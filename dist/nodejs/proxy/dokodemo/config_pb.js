// source: proxy/dokodemo/config.proto
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

var common_net_address_pb = require('../../common/net/address_pb.js');
goog.object.extend(proto, common_net_address_pb);
var common_net_network_pb = require('../../common/net/network_pb.js');
goog.object.extend(proto, common_net_network_pb);
goog.exportSymbol('proto.xray.proxy.dokodemo.Config', null, global);
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
proto.xray.proxy.dokodemo.Config = function(opt_data) {
  jspb.Message.initialize(this, opt_data, 0, -1, proto.xray.proxy.dokodemo.Config.repeatedFields_, null);
};
goog.inherits(proto.xray.proxy.dokodemo.Config, jspb.Message);
if (goog.DEBUG && !COMPILED) {
  /**
   * @public
   * @override
   */
  proto.xray.proxy.dokodemo.Config.displayName = 'proto.xray.proxy.dokodemo.Config';
}

/**
 * List of repeated fields within this message type.
 * @private {!Array<number>}
 * @const
 */
proto.xray.proxy.dokodemo.Config.repeatedFields_ = [7];



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
proto.xray.proxy.dokodemo.Config.prototype.toObject = function(opt_includeInstance) {
  return proto.xray.proxy.dokodemo.Config.toObject(opt_includeInstance, this);
};


/**
 * Static version of the {@see toObject} method.
 * @param {boolean|undefined} includeInstance Deprecated. Whether to include
 *     the JSPB instance for transitional soy proto support:
 *     http://goto/soy-param-migration
 * @param {!proto.xray.proxy.dokodemo.Config} msg The msg instance to transform.
 * @return {!Object}
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.dokodemo.Config.toObject = function(includeInstance, msg) {
  var f, obj = {
    address: (f = msg.getAddress()) && common_net_address_pb.IPOrDomain.toObject(includeInstance, f),
    port: jspb.Message.getFieldWithDefault(msg, 2, 0),
    networkList: (f = msg.getNetworkList()) && common_net_network_pb.NetworkList.toObject(includeInstance, f),
    networksList: (f = jspb.Message.getRepeatedField(msg, 7)) == null ? undefined : f,
    timeout: jspb.Message.getFieldWithDefault(msg, 4, 0),
    followRedirect: jspb.Message.getBooleanFieldWithDefault(msg, 5, false),
    userLevel: jspb.Message.getFieldWithDefault(msg, 6, 0)
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
 * @return {!proto.xray.proxy.dokodemo.Config}
 */
proto.xray.proxy.dokodemo.Config.deserializeBinary = function(bytes) {
  var reader = new jspb.BinaryReader(bytes);
  var msg = new proto.xray.proxy.dokodemo.Config;
  return proto.xray.proxy.dokodemo.Config.deserializeBinaryFromReader(msg, reader);
};


/**
 * Deserializes binary data (in protobuf wire format) from the
 * given reader into the given message object.
 * @param {!proto.xray.proxy.dokodemo.Config} msg The message object to deserialize into.
 * @param {!jspb.BinaryReader} reader The BinaryReader to use.
 * @return {!proto.xray.proxy.dokodemo.Config}
 */
proto.xray.proxy.dokodemo.Config.deserializeBinaryFromReader = function(msg, reader) {
  while (reader.nextField()) {
    if (reader.isEndGroup()) {
      break;
    }
    var field = reader.getFieldNumber();
    switch (field) {
    case 1:
      var value = new common_net_address_pb.IPOrDomain;
      reader.readMessage(value,common_net_address_pb.IPOrDomain.deserializeBinaryFromReader);
      msg.setAddress(value);
      break;
    case 2:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setPort(value);
      break;
    case 3:
      var value = new common_net_network_pb.NetworkList;
      reader.readMessage(value,common_net_network_pb.NetworkList.deserializeBinaryFromReader);
      msg.setNetworkList(value);
      break;
    case 7:
      var values = /** @type {!Array<!proto.xray.common.net.Network>} */ (reader.isDelimited() ? reader.readPackedEnum() : [reader.readEnum()]);
      for (var i = 0; i < values.length; i++) {
        msg.addNetworks(values[i]);
      }
      break;
    case 4:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setTimeout(value);
      break;
    case 5:
      var value = /** @type {boolean} */ (reader.readBool());
      msg.setFollowRedirect(value);
      break;
    case 6:
      var value = /** @type {number} */ (reader.readUint32());
      msg.setUserLevel(value);
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
proto.xray.proxy.dokodemo.Config.prototype.serializeBinary = function() {
  var writer = new jspb.BinaryWriter();
  proto.xray.proxy.dokodemo.Config.serializeBinaryToWriter(this, writer);
  return writer.getResultBuffer();
};


/**
 * Serializes the given message to binary data (in protobuf wire
 * format), writing to the given BinaryWriter.
 * @param {!proto.xray.proxy.dokodemo.Config} message
 * @param {!jspb.BinaryWriter} writer
 * @suppress {unusedLocalVariables} f is only used for nested messages
 */
proto.xray.proxy.dokodemo.Config.serializeBinaryToWriter = function(message, writer) {
  var f = undefined;
  f = message.getAddress();
  if (f != null) {
    writer.writeMessage(
      1,
      f,
      common_net_address_pb.IPOrDomain.serializeBinaryToWriter
    );
  }
  f = message.getPort();
  if (f !== 0) {
    writer.writeUint32(
      2,
      f
    );
  }
  f = message.getNetworkList();
  if (f != null) {
    writer.writeMessage(
      3,
      f,
      common_net_network_pb.NetworkList.serializeBinaryToWriter
    );
  }
  f = message.getNetworksList();
  if (f.length > 0) {
    writer.writePackedEnum(
      7,
      f
    );
  }
  f = message.getTimeout();
  if (f !== 0) {
    writer.writeUint32(
      4,
      f
    );
  }
  f = message.getFollowRedirect();
  if (f) {
    writer.writeBool(
      5,
      f
    );
  }
  f = message.getUserLevel();
  if (f !== 0) {
    writer.writeUint32(
      6,
      f
    );
  }
};


/**
 * optional xray.common.net.IPOrDomain address = 1;
 * @return {?proto.xray.common.net.IPOrDomain}
 */
proto.xray.proxy.dokodemo.Config.prototype.getAddress = function() {
  return /** @type{?proto.xray.common.net.IPOrDomain} */ (
    jspb.Message.getWrapperField(this, common_net_address_pb.IPOrDomain, 1));
};


/**
 * @param {?proto.xray.common.net.IPOrDomain|undefined} value
 * @return {!proto.xray.proxy.dokodemo.Config} returns this
*/
proto.xray.proxy.dokodemo.Config.prototype.setAddress = function(value) {
  return jspb.Message.setWrapperField(this, 1, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.xray.proxy.dokodemo.Config} returns this
 */
proto.xray.proxy.dokodemo.Config.prototype.clearAddress = function() {
  return this.setAddress(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.xray.proxy.dokodemo.Config.prototype.hasAddress = function() {
  return jspb.Message.getField(this, 1) != null;
};


/**
 * optional uint32 port = 2;
 * @return {number}
 */
proto.xray.proxy.dokodemo.Config.prototype.getPort = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 2, 0));
};


/**
 * @param {number} value
 * @return {!proto.xray.proxy.dokodemo.Config} returns this
 */
proto.xray.proxy.dokodemo.Config.prototype.setPort = function(value) {
  return jspb.Message.setProto3IntField(this, 2, value);
};


/**
 * optional xray.common.net.NetworkList network_list = 3;
 * @return {?proto.xray.common.net.NetworkList}
 */
proto.xray.proxy.dokodemo.Config.prototype.getNetworkList = function() {
  return /** @type{?proto.xray.common.net.NetworkList} */ (
    jspb.Message.getWrapperField(this, common_net_network_pb.NetworkList, 3));
};


/**
 * @param {?proto.xray.common.net.NetworkList|undefined} value
 * @return {!proto.xray.proxy.dokodemo.Config} returns this
*/
proto.xray.proxy.dokodemo.Config.prototype.setNetworkList = function(value) {
  return jspb.Message.setWrapperField(this, 3, value);
};


/**
 * Clears the message field making it undefined.
 * @return {!proto.xray.proxy.dokodemo.Config} returns this
 */
proto.xray.proxy.dokodemo.Config.prototype.clearNetworkList = function() {
  return this.setNetworkList(undefined);
};


/**
 * Returns whether this field is set.
 * @return {boolean}
 */
proto.xray.proxy.dokodemo.Config.prototype.hasNetworkList = function() {
  return jspb.Message.getField(this, 3) != null;
};


/**
 * repeated xray.common.net.Network networks = 7;
 * @return {!Array<!proto.xray.common.net.Network>}
 */
proto.xray.proxy.dokodemo.Config.prototype.getNetworksList = function() {
  return /** @type {!Array<!proto.xray.common.net.Network>} */ (jspb.Message.getRepeatedField(this, 7));
};


/**
 * @param {!Array<!proto.xray.common.net.Network>} value
 * @return {!proto.xray.proxy.dokodemo.Config} returns this
 */
proto.xray.proxy.dokodemo.Config.prototype.setNetworksList = function(value) {
  return jspb.Message.setField(this, 7, value || []);
};


/**
 * @param {!proto.xray.common.net.Network} value
 * @param {number=} opt_index
 * @return {!proto.xray.proxy.dokodemo.Config} returns this
 */
proto.xray.proxy.dokodemo.Config.prototype.addNetworks = function(value, opt_index) {
  return jspb.Message.addToRepeatedField(this, 7, value, opt_index);
};


/**
 * Clears the list making it empty but non-null.
 * @return {!proto.xray.proxy.dokodemo.Config} returns this
 */
proto.xray.proxy.dokodemo.Config.prototype.clearNetworksList = function() {
  return this.setNetworksList([]);
};


/**
 * optional uint32 timeout = 4;
 * @return {number}
 */
proto.xray.proxy.dokodemo.Config.prototype.getTimeout = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 4, 0));
};


/**
 * @param {number} value
 * @return {!proto.xray.proxy.dokodemo.Config} returns this
 */
proto.xray.proxy.dokodemo.Config.prototype.setTimeout = function(value) {
  return jspb.Message.setProto3IntField(this, 4, value);
};


/**
 * optional bool follow_redirect = 5;
 * @return {boolean}
 */
proto.xray.proxy.dokodemo.Config.prototype.getFollowRedirect = function() {
  return /** @type {boolean} */ (jspb.Message.getBooleanFieldWithDefault(this, 5, false));
};


/**
 * @param {boolean} value
 * @return {!proto.xray.proxy.dokodemo.Config} returns this
 */
proto.xray.proxy.dokodemo.Config.prototype.setFollowRedirect = function(value) {
  return jspb.Message.setProto3BooleanField(this, 5, value);
};


/**
 * optional uint32 user_level = 6;
 * @return {number}
 */
proto.xray.proxy.dokodemo.Config.prototype.getUserLevel = function() {
  return /** @type {number} */ (jspb.Message.getFieldWithDefault(this, 6, 0));
};


/**
 * @param {number} value
 * @return {!proto.xray.proxy.dokodemo.Config} returns this
 */
proto.xray.proxy.dokodemo.Config.prototype.setUserLevel = function(value) {
  return jspb.Message.setProto3IntField(this, 6, value);
};


goog.object.extend(exports, proto.xray.proxy.dokodemo);