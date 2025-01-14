#include <extension/ExtensionManager.h>

#include <Logging.h>
#include <http/CrudeHTTPServer.h>
#include <config/Config.h>

#include <cstring>
#include <vector>

const char* const TAG = "ExtensionManager";

using namespace OpenShock;

static bool s_armed = false;

bool ExtensionManager::IsArmed() {
  return s_armed;
}

bool ExtensionManager::Init() {
  ESP_LOGI(TAG, "Hello world from ExtensionManager!");

  CrudeHTTPServer::On("/", "POST", [](std::vector<StringView> headers, StringView body, AsyncClient* client){
    ESP_LOGI(TAG, "%s", body.toString().c_str());

    return CrudeHTTPServer::Response {
      200,
      std::vector<StringView> {
        "Content-Type: text/plain"
      },
      "Hello world from ExtensionManager"
    };
  });

  CrudeHTTPServer::On("/config", "GET", [](std::vector<StringView> headers, StringView body, AsyncClient* client){
    std::string config;
    Config::GetExtensionExtensionsConfig(config);
    ESP_LOGI(TAG, "%s", config.c_str());

    return CrudeHTTPServer::Response {
      200,
      std::vector<StringView> {
        "Content-Type: text/plain"
      },
      config
    };
  });

  CrudeHTTPServer::On("/config", "POST", [](std::vector<StringView> headers, StringView body, AsyncClient* client){
    Config::SetExtensionExtensionsConfig(body);
    ESP_LOGI(TAG, "%s", body.toString().c_str());

    return CrudeHTTPServer::Response {
      200,
      std::vector<StringView> {},
      body
    };
  });

  CrudeHTTPServer::Start();

  return true;
}

void ExtensionManager::Update() {}
