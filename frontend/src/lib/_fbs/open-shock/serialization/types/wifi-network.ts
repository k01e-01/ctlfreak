// automatically generated by the FlatBuffers compiler, do not modify

/* eslint-disable @typescript-eslint/no-unused-vars, @typescript-eslint/no-explicit-any, @typescript-eslint/no-non-null-assertion */

import * as flatbuffers from 'flatbuffers';

import { WifiAuthMode } from '../../../open-shock/serialization/types/wifi-auth-mode';


export class WifiNetwork {
  bb: flatbuffers.ByteBuffer|null = null;
  bb_pos = 0;
  __init(i:number, bb:flatbuffers.ByteBuffer):WifiNetwork {
  this.bb_pos = i;
  this.bb = bb;
  return this;
}

static getRootAsWifiNetwork(bb:flatbuffers.ByteBuffer, obj?:WifiNetwork):WifiNetwork {
  return (obj || new WifiNetwork()).__init(bb.readInt32(bb.position()) + bb.position(), bb);
}

static getSizePrefixedRootAsWifiNetwork(bb:flatbuffers.ByteBuffer, obj?:WifiNetwork):WifiNetwork {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new WifiNetwork()).__init(bb.readInt32(bb.position()) + bb.position(), bb);
}

ssid():string|null
ssid(optionalEncoding:flatbuffers.Encoding):string|Uint8Array|null
ssid(optionalEncoding?:any):string|Uint8Array|null {
  const offset = this.bb!.__offset(this.bb_pos, 4);
  return offset ? this.bb!.__string(this.bb_pos + offset, optionalEncoding) : null;
}

bssid():string|null
bssid(optionalEncoding:flatbuffers.Encoding):string|Uint8Array|null
bssid(optionalEncoding?:any):string|Uint8Array|null {
  const offset = this.bb!.__offset(this.bb_pos, 6);
  return offset ? this.bb!.__string(this.bb_pos + offset, optionalEncoding) : null;
}

channel():number {
  const offset = this.bb!.__offset(this.bb_pos, 8);
  return offset ? this.bb!.readUint8(this.bb_pos + offset) : 0;
}

rssi():number {
  const offset = this.bb!.__offset(this.bb_pos, 10);
  return offset ? this.bb!.readInt8(this.bb_pos + offset) : 0;
}

authMode():WifiAuthMode {
  const offset = this.bb!.__offset(this.bb_pos, 12);
  return offset ? this.bb!.readUint8(this.bb_pos + offset) : WifiAuthMode.Open;
}

saved():boolean {
  const offset = this.bb!.__offset(this.bb_pos, 14);
  return offset ? !!this.bb!.readInt8(this.bb_pos + offset) : false;
}

static startWifiNetwork(builder:flatbuffers.Builder) {
  builder.startObject(6);
}

static addSsid(builder:flatbuffers.Builder, ssidOffset:flatbuffers.Offset) {
  builder.addFieldOffset(0, ssidOffset, 0);
}

static addBssid(builder:flatbuffers.Builder, bssidOffset:flatbuffers.Offset) {
  builder.addFieldOffset(1, bssidOffset, 0);
}

static addChannel(builder:flatbuffers.Builder, channel:number) {
  builder.addFieldInt8(2, channel, 0);
}

static addRssi(builder:flatbuffers.Builder, rssi:number) {
  builder.addFieldInt8(3, rssi, 0);
}

static addAuthMode(builder:flatbuffers.Builder, authMode:WifiAuthMode) {
  builder.addFieldInt8(4, authMode, WifiAuthMode.Open);
}

static addSaved(builder:flatbuffers.Builder, saved:boolean) {
  builder.addFieldInt8(5, +saved, +false);
}

static endWifiNetwork(builder:flatbuffers.Builder):flatbuffers.Offset {
  const offset = builder.endObject();
  return offset;
}

static createWifiNetwork(builder:flatbuffers.Builder, ssidOffset:flatbuffers.Offset, bssidOffset:flatbuffers.Offset, channel:number, rssi:number, authMode:WifiAuthMode, saved:boolean):flatbuffers.Offset {
  WifiNetwork.startWifiNetwork(builder);
  WifiNetwork.addSsid(builder, ssidOffset);
  WifiNetwork.addBssid(builder, bssidOffset);
  WifiNetwork.addChannel(builder, channel);
  WifiNetwork.addRssi(builder, rssi);
  WifiNetwork.addAuthMode(builder, authMode);
  WifiNetwork.addSaved(builder, saved);
  return WifiNetwork.endWifiNetwork(builder);
}
}
