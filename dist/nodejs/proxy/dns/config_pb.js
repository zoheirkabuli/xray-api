// source: proxy/dns/config.proto
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

var common_net_destination_pb = require('../../common/net/destination_pb.js');
goog.object.extend(proto, common_net_destination_pb);
goog.exportSymbol('proto.xray.proxy.dns.Config', null, global);
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
proto.xray.proxy.dns.Config = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.xray.proxy.dns.Config, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.xray.proxy.dns.Config.displayName = 'proto.xray.proxy.dns.Config';
}



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
proto.xray.proxy.dns.Config.prototype.toObject = function(opt_includeInstance) {
  return proto.xray.proxy.dns.Config.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.xray.proxy.dns.Config} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.dns.Config.toObject = function(includeInstance, msg) {
  var f, obj = {
    server: (f = msg.getServer()) && common_net_destination_pb.Endpoint.toObject(includeInstance, f),
    userLevel: jspb.Message.getFieldWithDefault(msg, 2, 0),
    nonIpQuery: jspb.Message.getFieldWithDefault(msg, 3, "")
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
 * @return {!proto.xray.proxy.dns.Config}
 */
proto.xray.proxy.dns.Config.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.xray.proxy.dns.Config;
  return proto.xray.proxy.dns.Config.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.xray.proxy.dns.Config} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.xray.proxy.dns.Config}
 */
proto.xray.proxy.dns.Config.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new common_net_destination_pb.Endpoint;
      reader.readMessage(value,common_net_destination_pb.Endpoint.deserializeBinaryFromReader);
      msg.setServer(value);
      break;
    case 2:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setUserLevel(value);
      break;
    case 3:
      var value = /** @type {string} */ (reader.readString());
      msg.setNonIpQuery(value);
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
proto.xray.proxy.dns.Config.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.xray.proxy.dns.Config.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.xray.proxy.dns.Config} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.dns.Config.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getServer();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      common_net_destination_pb.Endpoint.serializeBinaryToWriter
    );
  }
  f = message.getUserLevel();
  if (f !== 0) {
    writer.writeUint32(
      2,
      f
    );
  }
  f = message.getNonIpQuery();
  if (f.length > 0) {
    writer.writeString(
      3,
      f
    );
  }
};


/**
 * optional xray.common.net.Endpoint server = 1;
 * @return {?proto.xray.common.net.Endpoint}
 */
proto.xray.proxy.dns.Config.prototype.getServer = function() {
  return /** @type{?proto.xray.common.net.Endpoint} */ (
    jspb.Message.getWrapperField(this, common_net_destination_pb.Endpoint, 1));
};


/**
 * @param {?proto.xray.common.net.Endpoint|undefined} value
 * @return {!proto.xray.proxy.dns.Config} returns this
*/
proto.xray.proxy.dns.Config.prototype.setServer = function(value) {
  return jspb.Message.setWrapperField(this, 1, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.xray.proxy.dns.Config} returns this
 */
proto.xray.proxy.dns.Config.prototype.clearServer = function() {
  return this.setServer(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.xray.proxy.dns.Config.prototype.hasServer = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional uint32 user_level = 2;
 * @return {number}
 */
proto.xray.proxy.dns.Config.prototype.getUserLevel = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 2, 0));
};


/**
 * @param {number} value
 * @return {!proto.xray.proxy.dns.Config} returns this
 */
proto.xray.proxy.dns.Config.prototype.setUserLevel = function(value) {
  return jspb.Message.setProto3IntField(this, 2, value);
};


/**
 * optional string non_IP_query = 3;
 * @return {string}
 */
proto.xray.proxy.dns.Config.prototype.getNonIpQuery = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 3, ""));
};


/**
 * @param {string} value
 * @return {!proto.xray.proxy.dns.Config} returns this
 */
proto.xray.proxy.dns.Config.prototype.setNonIpQuery = function(value) {
  return jspb.Message.setProto3StringField(this, 3, value);
};


goog.object.extend(exports, proto.xray.proxy.dns);
