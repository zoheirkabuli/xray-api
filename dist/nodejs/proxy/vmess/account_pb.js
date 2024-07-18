// source: proxy/vmess/account.proto
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

var common_protocol_headers_pb = require('../../common/protocol/headers_pb.js');
goog.object.extend(proto, common_protocol_headers_pb);
goog.exportSymbol('proto.xray.proxy.vmess.Account', null, global);
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
proto.xray.proxy.vmess.Account = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, null, null);
};
goog.inherits(proto.xray.proxy.vmess.Account, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.xray.proxy.vmess.Account.displayName = 'proto.xray.proxy.vmess.Account';
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
proto.xray.proxy.vmess.Account.prototype.toObject = function(opt_includeInstance) {
  return proto.xray.proxy.vmess.Account.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.xray.proxy.vmess.Account} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.vmess.Account.toObject = function(includeInstance, msg) {
  var f, obj = {
    id: jspb.Message.getFieldWithDefault(msg, 1, ""),
    securitySettings: (f = msg.getSecuritySettings()) && common_protocol_headers_pb.SecurityConfig.toObject(includeInstance, f),
    testsEnabled: jspb.Message.getFieldWithDefault(msg, 4, "")
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
 * @return {!proto.xray.proxy.vmess.Account}
 */
proto.xray.proxy.vmess.Account.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.xray.proxy.vmess.Account;
  return proto.xray.proxy.vmess.Account.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.xray.proxy.vmess.Account} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.xray.proxy.vmess.Account}
 */
proto.xray.proxy.vmess.Account.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = /** @type {string} */ (reader.readString());
      msg.setId(value);
      break;
    case 3:
      var value = new common_protocol_headers_pb.SecurityConfig;
      reader.readMessage(value,common_protocol_headers_pb.SecurityConfig.deserializeBinaryFromReader);
      msg.setSecuritySettings(value);
      break;
    case 4:
      var value = /** @type {string} */ (reader.readString());
      msg.setTestsEnabled(value);
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
proto.xray.proxy.vmess.Account.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.xray.proxy.vmess.Account.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.xray.proxy.vmess.Account} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.vmess.Account.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getId();
  if (f.length > 0) {
    writer.writeString(
      1,
      f
    );
  }
  f = message.getSecuritySettings();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      common_protocol_headers_pb.SecurityConfig.serializeBinaryToWriter
    );
  }
  f = message.getTestsEnabled();
  if (f.length > 0) {
    writer.writeString(
      4,
      f
    );
  }
};


/**
 * optional string id = 1;
 * @return {string}
 */
proto.xray.proxy.vmess.Account.prototype.getId = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 1, ""));
};


/**
 * @param {string} value
 * @return {!proto.xray.proxy.vmess.Account} returns this
 */
proto.xray.proxy.vmess.Account.prototype.setId = function(value) {
  return jspb.Message.setProto3StringField(this, 1, value);
};


/**
 * optional xray.common.protocol.SecurityConfig security_settings = 3;
 * @return {?proto.xray.common.protocol.SecurityConfig}
 */
proto.xray.proxy.vmess.Account.prototype.getSecuritySettings = function() {
  return /** @type{?proto.xray.common.protocol.SecurityConfig} */ (
    jspb.Message.getWrapperField(this, common_protocol_headers_pb.SecurityConfig, 3));
};


/**
 * @param {?proto.xray.common.protocol.SecurityConfig|undefined} value
 * @return {!proto.xray.proxy.vmess.Account} returns this
*/
proto.xray.proxy.vmess.Account.prototype.setSecuritySettings = function(value) {
  return jspb.Message.setWrapperField(this, 3, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.xray.proxy.vmess.Account} returns this
 */
proto.xray.proxy.vmess.Account.prototype.clearSecuritySettings = function() {
  return this.setSecuritySettings(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.xray.proxy.vmess.Account.prototype.hasSecuritySettings = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * optional string tests_enabled = 4;
 * @return {string}
 */
proto.xray.proxy.vmess.Account.prototype.getTestsEnabled = function() {
  return /** @type {string} */ (jspb.Message.getFieldWithDefault(this, 4, ""));
};


/**
 * @param {string} value
 * @return {!proto.xray.proxy.vmess.Account} returns this
 */
proto.xray.proxy.vmess.Account.prototype.setTestsEnabled = function(value) {
  return jspb.Message.setProto3StringField(this, 4, value);
};


goog.object.extend(exports, proto.xray.proxy.vmess);
