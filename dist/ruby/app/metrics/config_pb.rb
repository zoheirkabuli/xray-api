# frozen_string_literal: true
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: app/metrics/config.proto

require 'google/protobuf'


descriptor_data = "\n\x18\x61pp/metrics/config.proto\x12\x10xray.app.metrics\"\x15\n\x06\x43onfig\x12\x0b\n\x03tag\x18\x01 \x01(\tBR\n\x14\x63om.xray.app.metricsP\x01Z%github.com/xtls/xray-core/app/metrics\xaa\x02\x10Xray.App.Metricsb\x06proto3"

pool = Google::Protobuf::DescriptorPool.generated_pool

begin
  pool.add_serialized_file(descriptor_data)
rescue TypeError
  # Compatibility code: will be removed in the next major version.
  require 'google/protobuf/descriptor_pb'
  parsed = Google::Protobuf::FileDescriptorProto.decode(descriptor_data)
  parsed.clear_dependency
  serialized = parsed.class.encode(parsed)
  file = pool.add_serialized_file(serialized)
  warn "Warning: Protobuf detected an import path issue while loading generated file #{__FILE__}"
  imports = [
  ]
  imports.each do |type_name, expected_filename|
    import_file = pool.lookup(type_name).file_descriptor
    if import_file.name != expected_filename
      warn "- #{file.name} imports #{expected_filename}, but that import was loaded as #{import_file.name}"
    end
  end
  warn "Each proto file must use a consistent fully-qualified name."
  warn "This will become an error in the next major version."
end

module Xray
  module App
    module Metrics
      Config = ::Google::Protobuf::DescriptorPool.generated_pool.lookup("xray.app.metrics.Config").msgclass
    end
  end
end
