# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: proxy/vmess/inbound/config.proto
# Protobuf Python Version: 5.26.1
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


from common.protocol import user_pb2 as common_dot_protocol_dot_user__pb2


DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n proxy/vmess/inbound/config.proto\x12\x18xray.proxy.vmess.inbound\x1a\x1a\x63ommon/protocol/user.proto\"\x1a\n\x0c\x44\x65tourConfig\x12\n\n\x02to\x18\x01 \x01(\t\"\x1e\n\rDefaultConfig\x12\r\n\x05level\x18\x02 \x01(\r\"\xa4\x01\n\x06\x43onfig\x12(\n\x04user\x18\x01 \x03(\x0b\x32\x1a.xray.common.protocol.User\x12\x38\n\x07\x64\x65\x66\x61ult\x18\x02 \x01(\x0b\x32\'.xray.proxy.vmess.inbound.DefaultConfig\x12\x36\n\x06\x64\x65tour\x18\x03 \x01(\x0b\x32&.xray.proxy.vmess.inbound.DetourConfigBj\n\x1c\x63om.xray.proxy.vmess.inboundP\x01Z-github.com/xtls/xray-core/proxy/vmess/inbound\xaa\x02\x18Xray.Proxy.Vmess.Inboundb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'proxy.vmess.inbound.config_pb2', _globals)
if not _descriptor._USE_C_DESCRIPTORS:
  _globals['DESCRIPTOR']._loaded_options = None
  _globals['DESCRIPTOR']._serialized_options = b'\n\034com.xray.proxy.vmess.inboundP\001Z-github.com/xtls/xray-core/proxy/vmess/inbound\252\002\030Xray.Proxy.Vmess.Inbound'
  _globals['_DETOURCONFIG']._serialized_start=90
  _globals['_DETOURCONFIG']._serialized_end=116
  _globals['_DEFAULTCONFIG']._serialized_start=118
  _globals['_DEFAULTCONFIG']._serialized_end=148
  _globals['_CONFIG']._serialized_start=151
  _globals['_CONFIG']._serialized_end=315
# @@protoc_insertion_point(module_scope)
