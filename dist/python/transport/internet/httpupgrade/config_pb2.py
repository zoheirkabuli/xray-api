# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: transport/internet/httpupgrade/config.proto
# Protobuf Python Version: 5.26.1
"""Generated protocol buffer code."""
from google.protobuf import descriptor as _descriptor
from google.protobuf import descriptor_pool as _descriptor_pool
from google.protobuf import symbol_database as _symbol_database
from google.protobuf.internal import builder as _builder
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor_pool.Default().AddSerializedFile(b'\n+transport/internet/httpupgrade/config.proto\x12#xray.transport.internet.httpupgrade\"\xc7\x01\n\x06\x43onfig\x12\x0c\n\x04host\x18\x01 \x01(\t\x12\x0c\n\x04path\x18\x02 \x01(\t\x12G\n\x06header\x18\x03 \x03(\x0b\x32\x37.xray.transport.internet.httpupgrade.Config.HeaderEntry\x12\x1d\n\x15\x61\x63\x63\x65pt_proxy_protocol\x18\x04 \x01(\x08\x12\n\n\x02\x65\x64\x18\x05 \x01(\r\x1a-\n\x0bHeaderEntry\x12\x0b\n\x03key\x18\x01 \x01(\t\x12\r\n\x05value\x18\x02 \x01(\t:\x02\x38\x01\x42\x8b\x01\n\'com.xray.transport.internet.httpupgradeP\x01Z8github.com/xtls/xray-core/transport/internet/httpupgrade\xaa\x02#Xray.Transport.Internet.HttpUpgradeb\x06proto3')

_globals = globals()
_builder.BuildMessageAndEnumDescriptors(DESCRIPTOR, _globals)
_builder.BuildTopDescriptorsAndMessages(DESCRIPTOR, 'transport.internet.httpupgrade.config_pb2', _globals)
if not _descriptor._USE_C_DESCRIPTORS:
  _globals['DESCRIPTOR']._loaded_options = None
  _globals['DESCRIPTOR']._serialized_options = b'\n\'com.xray.transport.internet.httpupgradeP\001Z8github.com/xtls/xray-core/transport/internet/httpupgrade\252\002#Xray.Transport.Internet.HttpUpgrade'
  _globals['_CONFIG_HEADERENTRY']._loaded_options = None
  _globals['_CONFIG_HEADERENTRY']._serialized_options = b'8\001'
  _globals['_CONFIG']._serialized_start=85
  _globals['_CONFIG']._serialized_end=284
  _globals['_CONFIG_HEADERENTRY']._serialized_start=239
  _globals['_CONFIG_HEADERENTRY']._serialized_end=284
# @@protoc_insertion_point(module_scope)
