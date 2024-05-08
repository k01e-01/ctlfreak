// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_GATEWAYTODEVICEMESSAGE_OPENSHOCK_SERIALIZATION_GATEWAY_H_
#define FLATBUFFERS_GENERATED_GATEWAYTODEVICEMESSAGE_OPENSHOCK_SERIALIZATION_GATEWAY_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 25,
             "Non-compatible flatbuffers version included");

#include "SemVer_generated.h"
#include "ShockerCommandType_generated.h"
#include "ShockerModelType_generated.h"

namespace OpenShock {
namespace Serialization {
namespace Gateway {

struct ShockerCommand;

struct ShockerCommandList;
struct ShockerCommandListBuilder;

struct CaptivePortalConfig;

struct OtaInstall;
struct OtaInstallBuilder;

struct GatewayToDeviceMessage;
struct GatewayToDeviceMessageBuilder;

enum class GatewayToDeviceMessagePayload : uint8_t {
  NONE = 0,
  ShockerCommandList = 1,
  CaptivePortalConfig = 2,
  OtaInstall = 3,
  MIN = NONE,
  MAX = OtaInstall
};

inline const GatewayToDeviceMessagePayload (&EnumValuesGatewayToDeviceMessagePayload())[4] {
  static const GatewayToDeviceMessagePayload values[] = {
    GatewayToDeviceMessagePayload::NONE,
    GatewayToDeviceMessagePayload::ShockerCommandList,
    GatewayToDeviceMessagePayload::CaptivePortalConfig,
    GatewayToDeviceMessagePayload::OtaInstall
  };
  return values;
}

inline const char * const *EnumNamesGatewayToDeviceMessagePayload() {
  static const char * const names[5] = {
    "NONE",
    "ShockerCommandList",
    "CaptivePortalConfig",
    "OtaInstall",
    nullptr
  };
  return names;
}

inline const char *EnumNameGatewayToDeviceMessagePayload(GatewayToDeviceMessagePayload e) {
  if (::flatbuffers::IsOutRange(e, GatewayToDeviceMessagePayload::NONE, GatewayToDeviceMessagePayload::OtaInstall)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesGatewayToDeviceMessagePayload()[index];
}

template<typename T> struct GatewayToDeviceMessagePayloadTraits {
  static const GatewayToDeviceMessagePayload enum_value = GatewayToDeviceMessagePayload::NONE;
};

template<> struct GatewayToDeviceMessagePayloadTraits<OpenShock::Serialization::Gateway::ShockerCommandList> {
  static const GatewayToDeviceMessagePayload enum_value = GatewayToDeviceMessagePayload::ShockerCommandList;
};

template<> struct GatewayToDeviceMessagePayloadTraits<OpenShock::Serialization::Gateway::CaptivePortalConfig> {
  static const GatewayToDeviceMessagePayload enum_value = GatewayToDeviceMessagePayload::CaptivePortalConfig;
};

template<> struct GatewayToDeviceMessagePayloadTraits<OpenShock::Serialization::Gateway::OtaInstall> {
  static const GatewayToDeviceMessagePayload enum_value = GatewayToDeviceMessagePayload::OtaInstall;
};

bool VerifyGatewayToDeviceMessagePayload(::flatbuffers::Verifier &verifier, const void *obj, GatewayToDeviceMessagePayload type);
bool VerifyGatewayToDeviceMessagePayloadVector(::flatbuffers::Verifier &verifier, const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *values, const ::flatbuffers::Vector<GatewayToDeviceMessagePayload> *types);

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(2) ShockerCommand FLATBUFFERS_FINAL_CLASS {
 private:
  uint8_t model_;
  int8_t padding0__;
  uint16_t id_;
  uint8_t type_;
  uint8_t intensity_;
  uint16_t duration_;

 public:
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Gateway.ShockerCommand";
  }
  ShockerCommand()
      : model_(0),
        padding0__(0),
        id_(0),
        type_(0),
        intensity_(0),
        duration_(0) {
    (void)padding0__;
  }
  ShockerCommand(OpenShock::Serialization::Types::ShockerModelType _model, uint16_t _id, OpenShock::Serialization::Types::ShockerCommandType _type, uint8_t _intensity, uint16_t _duration)
      : model_(::flatbuffers::EndianScalar(static_cast<uint8_t>(_model))),
        padding0__(0),
        id_(::flatbuffers::EndianScalar(_id)),
        type_(::flatbuffers::EndianScalar(static_cast<uint8_t>(_type))),
        intensity_(::flatbuffers::EndianScalar(_intensity)),
        duration_(::flatbuffers::EndianScalar(_duration)) {
    (void)padding0__;
  }
  OpenShock::Serialization::Types::ShockerModelType model() const {
    return static_cast<OpenShock::Serialization::Types::ShockerModelType>(::flatbuffers::EndianScalar(model_));
  }
  uint16_t id() const {
    return ::flatbuffers::EndianScalar(id_);
  }
  OpenShock::Serialization::Types::ShockerCommandType type() const {
    return static_cast<OpenShock::Serialization::Types::ShockerCommandType>(::flatbuffers::EndianScalar(type_));
  }
  uint8_t intensity() const {
    return ::flatbuffers::EndianScalar(intensity_);
  }
  uint16_t duration() const {
    return ::flatbuffers::EndianScalar(duration_);
  }
};
FLATBUFFERS_STRUCT_END(ShockerCommand, 8);

struct ShockerCommand::Traits {
  using type = ShockerCommand;
};

FLATBUFFERS_MANUALLY_ALIGNED_STRUCT(1) CaptivePortalConfig FLATBUFFERS_FINAL_CLASS {
 private:
  uint8_t enabled_;

 public:
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Gateway.CaptivePortalConfig";
  }
  CaptivePortalConfig()
      : enabled_(0) {
  }
  CaptivePortalConfig(bool _enabled)
      : enabled_(::flatbuffers::EndianScalar(static_cast<uint8_t>(_enabled))) {
  }
  bool enabled() const {
    return ::flatbuffers::EndianScalar(enabled_) != 0;
  }
};
FLATBUFFERS_STRUCT_END(CaptivePortalConfig, 1);

struct CaptivePortalConfig::Traits {
  using type = CaptivePortalConfig;
};

struct ShockerCommandList FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef ShockerCommandListBuilder Builder;
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Gateway.ShockerCommandList";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_COMMANDS = 4
  };
  const ::flatbuffers::Vector<const OpenShock::Serialization::Gateway::ShockerCommand *> *commands() const {
    return GetPointer<const ::flatbuffers::Vector<const OpenShock::Serialization::Gateway::ShockerCommand *> *>(VT_COMMANDS);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffsetRequired(verifier, VT_COMMANDS) &&
           verifier.VerifyVector(commands()) &&
           verifier.EndTable();
  }
};

struct ShockerCommandListBuilder {
  typedef ShockerCommandList Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_commands(::flatbuffers::Offset<::flatbuffers::Vector<const OpenShock::Serialization::Gateway::ShockerCommand *>> commands) {
    fbb_.AddOffset(ShockerCommandList::VT_COMMANDS, commands);
  }
  explicit ShockerCommandListBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<ShockerCommandList> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<ShockerCommandList>(end);
    fbb_.Required(o, ShockerCommandList::VT_COMMANDS);
    return o;
  }
};

inline ::flatbuffers::Offset<ShockerCommandList> CreateShockerCommandList(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::Vector<const OpenShock::Serialization::Gateway::ShockerCommand *>> commands = 0) {
  ShockerCommandListBuilder builder_(_fbb);
  builder_.add_commands(commands);
  return builder_.Finish();
}

struct ShockerCommandList::Traits {
  using type = ShockerCommandList;
  static auto constexpr Create = CreateShockerCommandList;
};

inline ::flatbuffers::Offset<ShockerCommandList> CreateShockerCommandListDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const std::vector<OpenShock::Serialization::Gateway::ShockerCommand> *commands = nullptr) {
  auto commands__ = commands ? _fbb.CreateVectorOfStructs<OpenShock::Serialization::Gateway::ShockerCommand>(*commands) : 0;
  return OpenShock::Serialization::Gateway::CreateShockerCommandList(
      _fbb,
      commands__);
}

struct OtaInstall FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef OtaInstallBuilder Builder;
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Gateway.OtaInstall";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_VERSION = 4
  };
  const OpenShock::Serialization::Types::SemVer *version() const {
    return GetPointer<const OpenShock::Serialization::Types::SemVer *>(VT_VERSION);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_VERSION) &&
           verifier.VerifyTable(version()) &&
           verifier.EndTable();
  }
};

struct OtaInstallBuilder {
  typedef OtaInstall Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_version(::flatbuffers::Offset<OpenShock::Serialization::Types::SemVer> version) {
    fbb_.AddOffset(OtaInstall::VT_VERSION, version);
  }
  explicit OtaInstallBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<OtaInstall> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<OtaInstall>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<OtaInstall> CreateOtaInstall(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<OpenShock::Serialization::Types::SemVer> version = 0) {
  OtaInstallBuilder builder_(_fbb);
  builder_.add_version(version);
  return builder_.Finish();
}

struct OtaInstall::Traits {
  using type = OtaInstall;
  static auto constexpr Create = CreateOtaInstall;
};

struct GatewayToDeviceMessage FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef GatewayToDeviceMessageBuilder Builder;
  struct Traits;
  static FLATBUFFERS_CONSTEXPR_CPP11 const char *GetFullyQualifiedName() {
    return "OpenShock.Serialization.Gateway.GatewayToDeviceMessage";
  }
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_PAYLOAD_TYPE = 4,
    VT_PAYLOAD = 6
  };
  OpenShock::Serialization::Gateway::GatewayToDeviceMessagePayload payload_type() const {
    return static_cast<OpenShock::Serialization::Gateway::GatewayToDeviceMessagePayload>(GetField<uint8_t>(VT_PAYLOAD_TYPE, 0));
  }
  const void *payload() const {
    return GetPointer<const void *>(VT_PAYLOAD);
  }
  template<typename T> const T *payload_as() const;
  const OpenShock::Serialization::Gateway::ShockerCommandList *payload_as_ShockerCommandList() const {
    return payload_type() == OpenShock::Serialization::Gateway::GatewayToDeviceMessagePayload::ShockerCommandList ? static_cast<const OpenShock::Serialization::Gateway::ShockerCommandList *>(payload()) : nullptr;
  }
  const OpenShock::Serialization::Gateway::CaptivePortalConfig *payload_as_CaptivePortalConfig() const {
    return payload_type() == OpenShock::Serialization::Gateway::GatewayToDeviceMessagePayload::CaptivePortalConfig ? static_cast<const OpenShock::Serialization::Gateway::CaptivePortalConfig *>(payload()) : nullptr;
  }
  const OpenShock::Serialization::Gateway::OtaInstall *payload_as_OtaInstall() const {
    return payload_type() == OpenShock::Serialization::Gateway::GatewayToDeviceMessagePayload::OtaInstall ? static_cast<const OpenShock::Serialization::Gateway::OtaInstall *>(payload()) : nullptr;
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_PAYLOAD_TYPE, 1) &&
           VerifyOffset(verifier, VT_PAYLOAD) &&
           VerifyGatewayToDeviceMessagePayload(verifier, payload(), payload_type()) &&
           verifier.EndTable();
  }
};

template<> inline const OpenShock::Serialization::Gateway::ShockerCommandList *GatewayToDeviceMessage::payload_as<OpenShock::Serialization::Gateway::ShockerCommandList>() const {
  return payload_as_ShockerCommandList();
}

template<> inline const OpenShock::Serialization::Gateway::CaptivePortalConfig *GatewayToDeviceMessage::payload_as<OpenShock::Serialization::Gateway::CaptivePortalConfig>() const {
  return payload_as_CaptivePortalConfig();
}

template<> inline const OpenShock::Serialization::Gateway::OtaInstall *GatewayToDeviceMessage::payload_as<OpenShock::Serialization::Gateway::OtaInstall>() const {
  return payload_as_OtaInstall();
}

struct GatewayToDeviceMessageBuilder {
  typedef GatewayToDeviceMessage Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_payload_type(OpenShock::Serialization::Gateway::GatewayToDeviceMessagePayload payload_type) {
    fbb_.AddElement<uint8_t>(GatewayToDeviceMessage::VT_PAYLOAD_TYPE, static_cast<uint8_t>(payload_type), 0);
  }
  void add_payload(::flatbuffers::Offset<void> payload) {
    fbb_.AddOffset(GatewayToDeviceMessage::VT_PAYLOAD, payload);
  }
  explicit GatewayToDeviceMessageBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<GatewayToDeviceMessage> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<GatewayToDeviceMessage>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<GatewayToDeviceMessage> CreateGatewayToDeviceMessage(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    OpenShock::Serialization::Gateway::GatewayToDeviceMessagePayload payload_type = OpenShock::Serialization::Gateway::GatewayToDeviceMessagePayload::NONE,
    ::flatbuffers::Offset<void> payload = 0) {
  GatewayToDeviceMessageBuilder builder_(_fbb);
  builder_.add_payload(payload);
  builder_.add_payload_type(payload_type);
  return builder_.Finish();
}

struct GatewayToDeviceMessage::Traits {
  using type = GatewayToDeviceMessage;
  static auto constexpr Create = CreateGatewayToDeviceMessage;
};

inline bool VerifyGatewayToDeviceMessagePayload(::flatbuffers::Verifier &verifier, const void *obj, GatewayToDeviceMessagePayload type) {
  switch (type) {
    case GatewayToDeviceMessagePayload::NONE: {
      return true;
    }
    case GatewayToDeviceMessagePayload::ShockerCommandList: {
      auto ptr = reinterpret_cast<const OpenShock::Serialization::Gateway::ShockerCommandList *>(obj);
      return verifier.VerifyTable(ptr);
    }
    case GatewayToDeviceMessagePayload::CaptivePortalConfig: {
      return verifier.VerifyField<OpenShock::Serialization::Gateway::CaptivePortalConfig>(static_cast<const uint8_t *>(obj), 0, 1);
    }
    case GatewayToDeviceMessagePayload::OtaInstall: {
      auto ptr = reinterpret_cast<const OpenShock::Serialization::Gateway::OtaInstall *>(obj);
      return verifier.VerifyTable(ptr);
    }
    default: return true;
  }
}

inline bool VerifyGatewayToDeviceMessagePayloadVector(::flatbuffers::Verifier &verifier, const ::flatbuffers::Vector<::flatbuffers::Offset<void>> *values, const ::flatbuffers::Vector<GatewayToDeviceMessagePayload> *types) {
  if (!values || !types) return !values && !types;
  if (values->size() != types->size()) return false;
  for (::flatbuffers::uoffset_t i = 0; i < values->size(); ++i) {
    if (!VerifyGatewayToDeviceMessagePayload(
        verifier,  values->Get(i), types->GetEnum<GatewayToDeviceMessagePayload>(i))) {
      return false;
    }
  }
  return true;
}

inline const OpenShock::Serialization::Gateway::GatewayToDeviceMessage *GetGatewayToDeviceMessage(const void *buf) {
  return ::flatbuffers::GetRoot<OpenShock::Serialization::Gateway::GatewayToDeviceMessage>(buf);
}

inline const OpenShock::Serialization::Gateway::GatewayToDeviceMessage *GetSizePrefixedGatewayToDeviceMessage(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<OpenShock::Serialization::Gateway::GatewayToDeviceMessage>(buf);
}

inline bool VerifyGatewayToDeviceMessageBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<OpenShock::Serialization::Gateway::GatewayToDeviceMessage>(nullptr);
}

inline bool VerifySizePrefixedGatewayToDeviceMessageBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<OpenShock::Serialization::Gateway::GatewayToDeviceMessage>(nullptr);
}

inline void FinishGatewayToDeviceMessageBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<OpenShock::Serialization::Gateway::GatewayToDeviceMessage> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedGatewayToDeviceMessageBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<OpenShock::Serialization::Gateway::GatewayToDeviceMessage> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace Gateway
}  // namespace Serialization
}  // namespace OpenShock

#endif  // FLATBUFFERS_GENERATED_GATEWAYTODEVICEMESSAGE_OPENSHOCK_SERIALIZATION_GATEWAY_H_
