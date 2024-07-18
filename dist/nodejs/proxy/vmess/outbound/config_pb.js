// source: proxy/vmess/outbound/config.proto
/**
 * @fileoverview
 * @enhanceable
 * @suppress {missingRequire} reports error on implicit type usages.
 * @suppress {messageConventions} JS Compiler reports an error if a variable or
 *     field starts with 'MSG_' and isn't a translatable message.
 * @public
 */
// GENERATED CODE -- DO NOT EDIT!
/* eslint-disable */
// @ts-nocheck

var jspb = require('google-protobuf');
var goog = jspb;
var global = (function() {
  if (this) { return this; }
  if (typeof window !== 'undefined') { return window; }
  if (typeof global !== 'undefined') { return global; }
  if (typeof self !== 'undefined') { return self; }
  return Function('return this')();
}.call(null));

var common_protocol_server_spec_pb = require('../../../common/protocol/server_spec_pb.js');
goog.object.extend(proto, common_protocol_server_spec_pb);
goog.exportSymbol('proto.xray.proxy.vmess.outbound.Config', null, global);
/**
 * Generated by JsPbCodeGenerator.
 * @param {Array=} opt_data Optional initial data array, typically from a
 * server response, or constructed directly in Javascript. The array is used
 * in place and becomes part of the constructed object. It is not cloned.
 * If no data is provided, the constructed object will be empty, but still
 * valid.
 * @extends {jspb.Message}
 * @constructor
 */
proto.xray.proxy.vmess.outbound.Config = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.xray.proxy.vmess.outbound.Config.repeatedFields_, null);
};
goog.inherits(proto.xray.proxy.vmess.outbound.Config, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.xray.proxy.vmess.outbound.Config.displayName = 'proto.xray.proxy.vmess.outbound.Config';
}

/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.xray.proxy.vmess.outbound.Config.repeatedFields_ = [1];



if (jspb.Message.GENERATE_TO_OBJECT) {
/**
 * Creates an object representation of this proto.
 * Field names that are reserved in JavaScript and will be renamed to pb_name.
 * Optional fields that are not set will be set to undefined.
 * To access a reserved field use, foo.pb_<name>, eg, foo.pb_default.
 * For the list of reserved names please see:
 *     net/proto2/compiler/js/internal/generator.cc#kKeyword.
 * @param {boolean=} opt_includeInstance Deprecated. whether to include the
 *     JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @return {!Object}
 */
proto.xray.proxy.vmess.outbound.Config.prototype.toObject = function(opt_includeInstance) {
  return proto.xray.proxy.vmess.outbound.Config.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.xray.proxy.vmess.outbound.Config} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.vmess.outbound.Config.toObject = function(includeInstance, msg) {
  var f, obj = {
    receiverList: jspb.Message.toObjectList(msg.getReceiverList(),
    common_protocol_server_spec_pb.ServerEndpoint.toObject, includeInstance)
  };

  if (includeInstance) {
    obj.$jspbMessageInstance = msg;
  }
  return obj;
};
}


/**
 * Deserializes binary data (in protobuf wire format).
 * @param {jspb.ByteSource} bytes The bytes to deserialize.
 * @return {!proto.xray.proxy.vmess.outbound.Config}
 */
proto.xray.proxy.vmess.outbound.Config.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.xray.proxy.vmess.outbound.Config;
  return proto.xray.proxy.vmess.outbound.Config.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.xray.proxy.vmess.outbound.Config} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.xray.proxy.vmess.outbound.Config}
 */
proto.xray.proxy.vmess.outbound.Config.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new common_protocol_server_spec_pb.ServerEndpoint;
      reader.readMessage(value,common_protocol_server_spec_pb.ServerEndpoint.deserializeBinaryFromReader);
      msg.addReceiver(value);
      break;
    default:
      reader.skipField();
      break;
    }
  }
  return msg;
};


/**
 * Serializes the message to binary data (in protobuf wire format).
 * @return {!Uint8Array}
 */
proto.xray.proxy.vmess.outbound.Config.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.xray.proxy.vmess.outbound.Config.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.xray.proxy.vmess.outbound.Config} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.vmess.outbound.Config.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getReceiverList();
  if (f.length > 0) {
    writer.writeRepeatedMessage(
      1,
      f,
      common_protocol_server_spec_pb.ServerEndpoint.serializeBinaryToWriter
    );
  }
};


/**
 * repeated xray.common.protocol.ServerEndpoint Receiver = 1;
 * @return {!Array<!proto.xray.common.protocol.ServerEndpoint>}
 */
proto.xray.proxy.vmess.outbound.Config.prototype.getReceiverList = function() {
  return /** @type{!Array<!proto.xray.common.protocol.ServerEndpoint>} */ (
    jspb.Message.getRepeatedWrapperField(this, common_protocol_server_spec_pb.ServerEndpoint, 1));
};


/**
 * @param {!Array<!proto.xray.common.protocol.ServerEndpoint>} value
 * @return {!proto.xray.proxy.vmess.outbound.Config} returns this
*/
proto.xray.proxy.vmess.outbound.Config.prototype.setReceiverList = function(value) {
  return jspb.Message.setRepeatedWrapperField(this, 1, value);
};


/**
 * @param {!proto.xray.common.protocol.ServerEndpoint=} opt_value
 * @param {number=} opt_index
 * @return {!proto.xray.common.protocol.ServerEndpoint}
 */
proto.xray.proxy.vmess.outbound.Config.prototype.addReceiver = function(opt_value, opt_index) {
  return jspb.Message.addToRepeatedWrapperField(this, 1, opt_value, proto.xray.common.protocol.ServerEndpoint, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.xray.proxy.vmess.outbound.Config} returns this
 */
proto.xray.proxy.vmess.outbound.Config.prototype.clearReceiverList = function() {
  return this.setReceiverList([]);
};


goog.object.extend(exports, proto.xray.proxy.vmess.outbound);