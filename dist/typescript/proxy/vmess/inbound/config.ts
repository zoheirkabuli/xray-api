// Code generated by protoc-gen-ts_proto. DO NOT EDIT.
// versions:
//   protoc-gen-ts_proto  v2.7.3
//   protoc               v6.31.1
// source: proxy/vmess/inbound/config.proto

/* eslint-disable */
import { BinaryReader, BinaryWriter } from "@bufbuild/protobuf/wire";
import { User } from "../../../common/protocol/user";

export const protobufPackage = "xray.proxy.vmess.inbound";

export interface DetourConfig {
  to: string;
}

export interface DefaultConfig {
  level: number;
}

export interface Config {
  user: User[];
  default:
    | DefaultConfig
    | undefined;
  /** 4 is for legacy setting */
  detour: DetourConfig | undefined;
}

function createBaseDetourConfig(): DetourConfig {
  return { to: "" };
}

export const DetourConfig: MessageFns<DetourConfig> = {
  encode(message: DetourConfig, writer: BinaryWriter = new BinaryWriter()): BinaryWriter {
    if (message.to !== "") {
      writer.uint32(10).string(message.to);
    }
    return writer;
  },

  decode(input: BinaryReader | Uint8Array, length?: number): DetourConfig {
    const reader = input instanceof BinaryReader ? input : new BinaryReader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseDetourConfig();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1: {
          if (tag !== 10) {
            break;
          }

          message.to = reader.string();
          continue;
        }
      }
      if ((tag & 7) === 4 || tag === 0) {
        break;
      }
      reader.skip(tag & 7);
    }
    return message;
  },

  fromJSON(object: any): DetourConfig {
    return { to: isSet(object.to) ? globalThis.String(object.to) : "" };
  },

  toJSON(message: DetourConfig): unknown {
    const obj: any = {};
    if (message.to !== "") {
      obj.to = message.to;
    }
    return obj;
  },

  create<I extends Exact<DeepPartial<DetourConfig>, I>>(base?: I): DetourConfig {
    return DetourConfig.fromPartial(base ?? ({} as any));
  },
  fromPartial<I extends Exact<DeepPartial<DetourConfig>, I>>(object: I): DetourConfig {
    const message = createBaseDetourConfig();
    message.to = object.to ?? "";
    return message;
  },
};

function createBaseDefaultConfig(): DefaultConfig {
  return { level: 0 };
}

export const DefaultConfig: MessageFns<DefaultConfig> = {
  encode(message: DefaultConfig, writer: BinaryWriter = new BinaryWriter()): BinaryWriter {
    if (message.level !== 0) {
      writer.uint32(16).uint32(message.level);
    }
    return writer;
  },

  decode(input: BinaryReader | Uint8Array, length?: number): DefaultConfig {
    const reader = input instanceof BinaryReader ? input : new BinaryReader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseDefaultConfig();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 2: {
          if (tag !== 16) {
            break;
          }

          message.level = reader.uint32();
          continue;
        }
      }
      if ((tag & 7) === 4 || tag === 0) {
        break;
      }
      reader.skip(tag & 7);
    }
    return message;
  },

  fromJSON(object: any): DefaultConfig {
    return { level: isSet(object.level) ? globalThis.Number(object.level) : 0 };
  },

  toJSON(message: DefaultConfig): unknown {
    const obj: any = {};
    if (message.level !== 0) {
      obj.level = Math.round(message.level);
    }
    return obj;
  },

  create<I extends Exact<DeepPartial<DefaultConfig>, I>>(base?: I): DefaultConfig {
    return DefaultConfig.fromPartial(base ?? ({} as any));
  },
  fromPartial<I extends Exact<DeepPartial<DefaultConfig>, I>>(object: I): DefaultConfig {
    const message = createBaseDefaultConfig();
    message.level = object.level ?? 0;
    return message;
  },
};

function createBaseConfig(): Config {
  return { user: [], default: undefined, detour: undefined };
}

export const Config: MessageFns<Config> = {
  encode(message: Config, writer: BinaryWriter = new BinaryWriter()): BinaryWriter {
    for (const v of message.user) {
      User.encode(v!, writer.uint32(10).fork()).join();
    }
    if (message.default !== undefined) {
      DefaultConfig.encode(message.default, writer.uint32(18).fork()).join();
    }
    if (message.detour !== undefined) {
      DetourConfig.encode(message.detour, writer.uint32(26).fork()).join();
    }
    return writer;
  },

  decode(input: BinaryReader | Uint8Array, length?: number): Config {
    const reader = input instanceof BinaryReader ? input : new BinaryReader(input);
    let end = length === undefined ? reader.len : reader.pos + length;
    const message = createBaseConfig();
    while (reader.pos < end) {
      const tag = reader.uint32();
      switch (tag >>> 3) {
        case 1: {
          if (tag !== 10) {
            break;
          }

          message.user.push(User.decode(reader, reader.uint32()));
          continue;
        }
        case 2: {
          if (tag !== 18) {
            break;
          }

          message.default = DefaultConfig.decode(reader, reader.uint32());
          continue;
        }
        case 3: {
          if (tag !== 26) {
            break;
          }

          message.detour = DetourConfig.decode(reader, reader.uint32());
          continue;
        }
      }
      if ((tag & 7) === 4 || tag === 0) {
        break;
      }
      reader.skip(tag & 7);
    }
    return message;
  },

  fromJSON(object: any): Config {
    return {
      user: globalThis.Array.isArray(object?.user) ? object.user.map((e: any) => User.fromJSON(e)) : [],
      default: isSet(object.default) ? DefaultConfig.fromJSON(object.default) : undefined,
      detour: isSet(object.detour) ? DetourConfig.fromJSON(object.detour) : undefined,
    };
  },

  toJSON(message: Config): unknown {
    const obj: any = {};
    if (message.user?.length) {
      obj.user = message.user.map((e) => User.toJSON(e));
    }
    if (message.default !== undefined) {
      obj.default = DefaultConfig.toJSON(message.default);
    }
    if (message.detour !== undefined) {
      obj.detour = DetourConfig.toJSON(message.detour);
    }
    return obj;
  },

  create<I extends Exact<DeepPartial<Config>, I>>(base?: I): Config {
    return Config.fromPartial(base ?? ({} as any));
  },
  fromPartial<I extends Exact<DeepPartial<Config>, I>>(object: I): Config {
    const message = createBaseConfig();
    message.user = object.user?.map((e) => User.fromPartial(e)) || [];
    message.default = (object.default !== undefined && object.default !== null)
      ? DefaultConfig.fromPartial(object.default)
      : undefined;
    message.detour = (object.detour !== undefined && object.detour !== null)
      ? DetourConfig.fromPartial(object.detour)
      : undefined;
    return message;
  },
};

type Builtin = Date | Function | Uint8Array | string | number | boolean | undefined;

export type DeepPartial<T> = T extends Builtin ? T
  : T extends globalThis.Array<infer U> ? globalThis.Array<DeepPartial<U>>
  : T extends ReadonlyArray<infer U> ? ReadonlyArray<DeepPartial<U>>
  : T extends {} ? { [K in keyof T]?: DeepPartial<T[K]> }
  : Partial<T>;

type KeysOfUnion<T> = T extends T ? keyof T : never;
export type Exact<P, I extends P> = P extends Builtin ? P
  : P & { [K in keyof P]: Exact<P[K], I[K]> } & { [K in Exclude<keyof I, KeysOfUnion<P>>]: never };

function isSet(value: any): boolean {
  return value !== null && value !== undefined;
}

export interface MessageFns<T> {
  encode(message: T, writer?: BinaryWriter): BinaryWriter;
  decode(input: BinaryReader | Uint8Array, length?: number): T;
  fromJSON(object: any): T;
  toJSON(message: T): unknown;
  create<I extends Exact<DeepPartial<T>, I>>(base?: I): T;
  fromPartial<I extends Exact<DeepPartial<T>, I>>(object: I): T;
}
