// automatically generated by the FlatBuffers compiler, do not modify

/* eslint-disable @typescript-eslint/no-unused-vars, @typescript-eslint/no-explicit-any, @typescript-eslint/no-non-null-assertion */

import * as flatbuffers from 'flatbuffers';

import { BackendConfig } from '../../../open-shock/serialization/configuration/backend-config';
import { CaptivePortalConfig } from '../../../open-shock/serialization/configuration/captive-portal-config';
import { ExtensionConfig } from '../../../open-shock/serialization/configuration/extension-config';
import { OtaUpdateConfig } from '../../../open-shock/serialization/configuration/ota-update-config';
import { RFConfig } from '../../../open-shock/serialization/configuration/rfconfig';
import { SerialInputConfig } from '../../../open-shock/serialization/configuration/serial-input-config';
import { WiFiConfig } from '../../../open-shock/serialization/configuration/wi-fi-config';


export class Config {
  bb: flatbuffers.ByteBuffer|null = null;
  bb_pos = 0;
  __init(i:number, bb:flatbuffers.ByteBuffer):Config {
  this.bb_pos = i;
  this.bb = bb;
  return this;
}

static getRootAsConfig(bb:flatbuffers.ByteBuffer, obj?:Config):Config {
  return (obj || new Config()).__init(bb.readInt32(bb.position()) + bb.position(), bb);
}

static getSizePrefixedRootAsConfig(bb:flatbuffers.ByteBuffer, obj?:Config):Config {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new Config()).__init(bb.readInt32(bb.position()) + bb.position(), bb);
}

/**
 * RF Transmitter configuration
 */
rf(obj?:RFConfig):RFConfig|null {
  const offset = this.bb!.__offset(this.bb_pos, 4);
  return offset ? (obj || new RFConfig()).__init(this.bb!.__indirect(this.bb_pos + offset), this.bb!) : null;
}

/**
 * WiFi configuration
 */
wifi(obj?:WiFiConfig):WiFiConfig|null {
  const offset = this.bb!.__offset(this.bb_pos, 6);
  return offset ? (obj || new WiFiConfig()).__init(this.bb!.__indirect(this.bb_pos + offset), this.bb!) : null;
}

/**
 * Captive portal configuration
 */
captivePortal(obj?:CaptivePortalConfig):CaptivePortalConfig|null {
  const offset = this.bb!.__offset(this.bb_pos, 8);
  return offset ? (obj || new CaptivePortalConfig()).__init(this.bb!.__indirect(this.bb_pos + offset), this.bb!) : null;
}

/**
 * Backend configuration
 */
backend(obj?:BackendConfig):BackendConfig|null {
  const offset = this.bb!.__offset(this.bb_pos, 10);
  return offset ? (obj || new BackendConfig()).__init(this.bb!.__indirect(this.bb_pos + offset), this.bb!) : null;
}

/**
 * Serial input configuration
 */
serialInput(obj?:SerialInputConfig):SerialInputConfig|null {
  const offset = this.bb!.__offset(this.bb_pos, 12);
  return offset ? (obj || new SerialInputConfig()).__init(this.bb!.__indirect(this.bb_pos + offset), this.bb!) : null;
}

/**
 * OTA update configuration
 */
otaUpdate(obj?:OtaUpdateConfig):OtaUpdateConfig|null {
  const offset = this.bb!.__offset(this.bb_pos, 14);
  return offset ? (obj || new OtaUpdateConfig()).__init(this.bb!.__indirect(this.bb_pos + offset), this.bb!) : null;
}

/**
 * Extensions configuration
 */
extension(obj?:ExtensionConfig):ExtensionConfig|null {
  const offset = this.bb!.__offset(this.bb_pos, 16);
  return offset ? (obj || new ExtensionConfig()).__init(this.bb!.__indirect(this.bb_pos + offset), this.bb!) : null;
}

static startConfig(builder:flatbuffers.Builder) {
  builder.startObject(7);
}

static addRf(builder:flatbuffers.Builder, rfOffset:flatbuffers.Offset) {
  builder.addFieldOffset(0, rfOffset, 0);
}

static addWifi(builder:flatbuffers.Builder, wifiOffset:flatbuffers.Offset) {
  builder.addFieldOffset(1, wifiOffset, 0);
}

static addCaptivePortal(builder:flatbuffers.Builder, captivePortalOffset:flatbuffers.Offset) {
  builder.addFieldOffset(2, captivePortalOffset, 0);
}

static addBackend(builder:flatbuffers.Builder, backendOffset:flatbuffers.Offset) {
  builder.addFieldOffset(3, backendOffset, 0);
}

static addSerialInput(builder:flatbuffers.Builder, serialInputOffset:flatbuffers.Offset) {
  builder.addFieldOffset(4, serialInputOffset, 0);
}

static addOtaUpdate(builder:flatbuffers.Builder, otaUpdateOffset:flatbuffers.Offset) {
  builder.addFieldOffset(5, otaUpdateOffset, 0);
}

static addExtension(builder:flatbuffers.Builder, extensionOffset:flatbuffers.Offset) {
  builder.addFieldOffset(6, extensionOffset, 0);
}

static endConfig(builder:flatbuffers.Builder):flatbuffers.Offset {
  const offset = builder.endObject();
  return offset;
}

}
