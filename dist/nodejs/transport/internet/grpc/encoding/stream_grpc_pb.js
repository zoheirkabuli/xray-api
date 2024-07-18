// GENERATED CODE -- DO NOT EDIT!

'use strict';
var grpc = require('grpc');
var transport_internet_grpc_encoding_stream_pb = require('../../../../transport/internet/grpc/encoding/stream_pb.js');

function serialize_xray_transport_internet_grpc_encoding_Hunk(arg) {
  if (!(arg instanceof transport_internet_grpc_encoding_stream_pb.Hunk)) {
    throw new Error('Expected argument of type xray.transport.internet.grpc.encoding.Hunk');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_xray_transport_internet_grpc_encoding_Hunk(buffer_arg) {
  return transport_internet_grpc_encoding_stream_pb.Hunk.deserializeBinary(new Uint8Array(buffer_arg));
}

function serialize_xray_transport_internet_grpc_encoding_MultiHunk(arg) {
  if (!(arg instanceof transport_internet_grpc_encoding_stream_pb.MultiHunk)) {
    throw new Error('Expected argument of type xray.transport.internet.grpc.encoding.MultiHunk');
  }
  return Buffer.from(arg.serializeBinary());
}

function deserialize_xray_transport_internet_grpc_encoding_MultiHunk(buffer_arg) {
  return transport_internet_grpc_encoding_stream_pb.MultiHunk.deserializeBinary(new Uint8Array(buffer_arg));
}


var GRPCServiceService = exports.GRPCServiceService = {
  tun: {
    path: '/xray.transport.internet.grpc.encoding.GRPCService/Tun',
    requestStream: true,
    responseStream: true,
    requestType: transport_internet_grpc_encoding_stream_pb.Hunk,
    responseType: transport_internet_grpc_encoding_stream_pb.Hunk,
    requestSerialize: serialize_xray_transport_internet_grpc_encoding_Hunk,
    requestDeserialize: deserialize_xray_transport_internet_grpc_encoding_Hunk,
    responseSerialize: serialize_xray_transport_internet_grpc_encoding_Hunk,
    responseDeserialize: deserialize_xray_transport_internet_grpc_encoding_Hunk,
  },
  tunMulti: {
    path: '/xray.transport.internet.grpc.encoding.GRPCService/TunMulti',
    requestStream: true,
    responseStream: true,
    requestType: transport_internet_grpc_encoding_stream_pb.MultiHunk,
    responseType: transport_internet_grpc_encoding_stream_pb.MultiHunk,
    requestSerialize: serialize_xray_transport_internet_grpc_encoding_MultiHunk,
    requestDeserialize: deserialize_xray_transport_internet_grpc_encoding_MultiHunk,
    responseSerialize: serialize_xray_transport_internet_grpc_encoding_MultiHunk,
    responseDeserialize: deserialize_xray_transport_internet_grpc_encoding_MultiHunk,
  },
};

exports.GRPCServiceClient = grpc.makeGenericClientConstructor(GRPCServiceService);
