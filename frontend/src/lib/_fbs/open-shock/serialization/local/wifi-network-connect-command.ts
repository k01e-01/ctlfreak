// automatically generated by the FlatBuffers compiler, do not modify

/* eslint-disable @typescript-eslint/no-unused-vars, @typescript-eslint/no-explicit-any, @typescript-eslint/no-non-null-assertion */

import * as flatbuffers from 'flatbuffers';

export class WifiNetworkConnectCommand {
  bb: flatbuffers.ByteBuffer|null = null;
  bb_pos = 0;
  __init(i:number, bb:flatbuffers.ByteBuffer):WifiNetworkConnectCommand {
  this.bb_pos = i;
  this.bb = bb;
  return this;
}

static getRootAsWifiNetworkConnectCommand(bb:flatbuffers.ByteBuffer, obj?:WifiNetworkConnectCommand):WifiNetworkConnectCommand {
  return (obj || new WifiNetworkConnectCommand()).__init(bb.readInt32(bb.position()) + bb.position(), bb);
}

static getSizePrefixedRootAsWifiNetworkConnectCommand(bb:flatbuffers.ByteBuffer, obj?:WifiNetworkConnectCommand):WifiNetworkConnectCommand {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new WifiNetworkConnectCommand()).__init(bb.readInt32(bb.position()) + bb.position(), bb);
}

ssid():string|null
ssid(optionalEncoding:flatbuffers.Encoding):string|Uint8Array|null
ssid(optionalEncoding?:any):string|Uint8Array|null {
  const offset = this.bb!.__offset(this.bb_pos, 4);
  return offset ? this.bb!.__string(this.bb_pos + offset, optionalEncoding) : null;
}

static startWifiNetworkConnectCommand(builder:flatbuffers.Builder) {
  builder.startObject(1);
}

static addSsid(builder:flatbuffers.Builder, ssidOffset:flatbuffers.Offset) {
  builder.addFieldOffset(0, ssidOffset, 0);
}

static endWifiNetworkConnectCommand(builder:flatbuffers.Builder):flatbuffers.Offset {
  const offset = builder.endObject();
  return offset;
}

static createWifiNetworkConnectCommand(builder:flatbuffers.Builder, ssidOffset:flatbuffers.Offset):flatbuffers.Offset {
  WifiNetworkConnectCommand.startWifiNetworkConnectCommand(builder);
  WifiNetworkConnectCommand.addSsid(builder, ssidOffset);
  return WifiNetworkConnectCommand.endWifiNetworkConnectCommand(builder);
}
}
