// automatically generated by the FlatBuffers compiler, do not modify

/* eslint-disable @typescript-eslint/no-unused-vars, @typescript-eslint/no-explicit-any, @typescript-eslint/no-non-null-assertion */

import * as flatbuffers from 'flatbuffers';

export class SemVer {
  bb: flatbuffers.ByteBuffer|null = null;
  bb_pos = 0;
  __init(i:number, bb:flatbuffers.ByteBuffer):SemVer {
  this.bb_pos = i;
  this.bb = bb;
  return this;
}

static getRootAsSemVer(bb:flatbuffers.ByteBuffer, obj?:SemVer):SemVer {
  return (obj || new SemVer()).__init(bb.readInt32(bb.position()) + bb.position(), bb);
}

static getSizePrefixedRootAsSemVer(bb:flatbuffers.ByteBuffer, obj?:SemVer):SemVer {
  bb.setPosition(bb.position() + flatbuffers.SIZE_PREFIX_LENGTH);
  return (obj || new SemVer()).__init(bb.readInt32(bb.position()) + bb.position(), bb);
}

major():number {
  const offset = this.bb!.__offset(this.bb_pos, 4);
  return offset ? this.bb!.readUint16(this.bb_pos + offset) : 0;
}

minor():number {
  const offset = this.bb!.__offset(this.bb_pos, 6);
  return offset ? this.bb!.readUint16(this.bb_pos + offset) : 0;
}

patch():number {
  const offset = this.bb!.__offset(this.bb_pos, 8);
  return offset ? this.bb!.readUint16(this.bb_pos + offset) : 0;
}

prerelease():string|null
prerelease(optionalEncoding:flatbuffers.Encoding):string|Uint8Array|null
prerelease(optionalEncoding?:any):string|Uint8Array|null {
  const offset = this.bb!.__offset(this.bb_pos, 10);
  return offset ? this.bb!.__string(this.bb_pos + offset, optionalEncoding) : null;
}

build():string|null
build(optionalEncoding:flatbuffers.Encoding):string|Uint8Array|null
build(optionalEncoding?:any):string|Uint8Array|null {
  const offset = this.bb!.__offset(this.bb_pos, 12);
  return offset ? this.bb!.__string(this.bb_pos + offset, optionalEncoding) : null;
}

static startSemVer(builder:flatbuffers.Builder) {
  builder.startObject(5);
}

static addMajor(builder:flatbuffers.Builder, major:number) {
  builder.addFieldInt16(0, major, 0);
}

static addMinor(builder:flatbuffers.Builder, minor:number) {
  builder.addFieldInt16(1, minor, 0);
}

static addPatch(builder:flatbuffers.Builder, patch:number) {
  builder.addFieldInt16(2, patch, 0);
}

static addPrerelease(builder:flatbuffers.Builder, prereleaseOffset:flatbuffers.Offset) {
  builder.addFieldOffset(3, prereleaseOffset, 0);
}

static addBuild(builder:flatbuffers.Builder, buildOffset:flatbuffers.Offset) {
  builder.addFieldOffset(4, buildOffset, 0);
}

static endSemVer(builder:flatbuffers.Builder):flatbuffers.Offset {
  const offset = builder.endObject();
  return offset;
}

static createSemVer(builder:flatbuffers.Builder, major:number, minor:number, patch:number, prereleaseOffset:flatbuffers.Offset, buildOffset:flatbuffers.Offset):flatbuffers.Offset {
  SemVer.startSemVer(builder);
  SemVer.addMajor(builder, major);
  SemVer.addMinor(builder, minor);
  SemVer.addPatch(builder, patch);
  SemVer.addPrerelease(builder, prereleaseOffset);
  SemVer.addBuild(builder, buildOffset);
  return SemVer.endSemVer(builder);
}
}
