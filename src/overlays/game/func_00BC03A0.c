/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern s32 func_001A5F20(s32);
extern s32 func_00208210(s32);
extern s32 func_00BC0A60(u16);
extern s32 func_00BC0B30(u16);
extern s32 func_00BC0BF0(u16);
extern s32 func_00BC0CB0(u16);
extern s32 func_00BC0D70(u16);
extern s32 func_00BC0E30(u16);
extern s32 func_00BC0EF0(u16);
extern s32 func_00BC0FC0(u16);
extern s32 func_00BC1080(u16);
extern s32 func_00BC1150(u16);
extern s32 func_00BC1210(u16);
extern s32 func_00BC12E0(u16);

static inline s32 clip_set_82(u16 clip) {
    switch (clip) {
    case 0x5CA:
        return 0x5D;
    case 0x5CB:
        return 0x5C;
    case 0x5CC:
        return 0x59;
    case 0x5CD:
        return 0x5E;
    case 0x5CE:
        return 0x5F;
    case 0x5CF:
        return 0x58;
    case 0x5D0:
        return 0x5A;
    case 0x5D1:
        return 0x5B;
    default:
        return 0xffff;
    }
}
static inline s32 clip_set_81(u16 clip) {
    switch (clip) {
    case 0x5CA:
        return 0x42;
    case 0x5CB:
        return 0x3E;
    case 0x5CC:
        return 0x44;
    case 0x5CD:
        return 0x43;
    case 0x5CE:
        return 0x47;
    case 0x5CF:
        return 0x48;
    case 0x5D0:
        return 0x41;
    case 0x5D1:
        return 0x40;
    case 0x5D2:
        return 0x3F;
    case 0x5D3:
        return 0x46;
    default:
        return 0xffff;
    }
}
static inline s32 clip_set_80(u16 clip) {
    switch (clip) {
    case 0x5CA:
        return 0x42;
    case 0x5CB:
        return 0x3E;
    case 0x5CC:
        return 0x44;
    case 0x5CD:
        return 0x43;
    case 0x5CE:
        return 0x4B;
    case 0x5CF:
        return 0x4C;
    case 0x5D0:
        return 0x41;
    case 0x5D1:
        return 0x40;
    case 0x5D2:
        return 0x3F;
    case 0x5D3:
        return 0x46;
    default:
        return 0xffff;
    }
}
static inline s32 clip_set_7f(u16 clip) {
    switch (clip) {
    case 0x5CA:
        return 0x42;
    case 0x5CB:
        return 0x3E;
    case 0x5CC:
        return 0x44;
    case 0x5CD:
        return 0x43;
    case 0x5CE:
        return 0x11;
    case 0x5CF:
        return 0x45;
    case 0x5D0:
        return 0x41;
    case 0x5D1:
        return 0x40;
    case 0x5D2:
        return 0x3F;
    case 0x5D3:
        return 0x46;
    default:
        return 0xffff;
    }
}
static inline s32 clip_set_7e(u16 clip) {
    switch (clip) {
    case 0x5CA:
        return 0x42;
    case 0x5CB:
        return 0x3E;
    case 0x5CC:
        return 0x44;
    case 0x5CD:
        return 0x43;
    case 0x5CE:
        return 0x4A;
    case 0x5CF:
        return 0x49;
    case 0x5D0:
        return 0x41;
    case 0x5D1:
        return 0x40;
    case 0x5D2:
        return 0x3F;
    case 0x5D3:
        return 0x46;
    default:
        return 0xffff;
    }
}
static inline s32 clip_set_7d(u16 clip) {
    switch (clip) {
    case 0x5CA:
        return 0x42;
    case 0x5CB:
        return 0x3E;
    case 0x5CC:
        return 0x44;
    case 0x5CD:
        return 0x43;
    case 0x5CE:
        return 0x10;
    case 0x5CF:
        return 0x24;
    case 0x5D0:
        return 0x25;
    case 0x5D1:
        return 0x41;
    case 0x5D2:
        return 0x40;
    case 0x5D3:
        return 0x3F;
    case 0x5D4:
        return 0x46;
    default:
        return 0xffff;
    }
}
static inline s32 clip_set_7c(u16 clip) {
    switch (clip) {
    case 0x5CA:
        return 0x32;
    case 0x5CB:
        return 0x37;
    case 0x5CC:
        return 0x33;
    case 0x5CD:
        return 0x34;
    case 0x5CE:
        return 0x35;
    case 0x5CF:
        return 0x36;
    case 0x5D0:
        return 0x3D;
    case 0x5D1:
        return 0x3C;
    case 0x5D2:
        return 0x3B;
    case 0x5D3:
        return 0x3A;
    case 0x5D4:
        return 0x38;
    case 0x5D5:
        return 0x39;
    default:
        return 0xffff;
    }
}
static inline s32 clip_set_7b(u16 clip) {
    switch (clip) {
    case 0x5CA:
        return 0x10;
    case 0x5CB:
        return 0x11;
    case 0x5CC:
        return 0x20;
    case 0x5CD:
        return 0x1C;
    case 0x5CE:
        return 0x1D;
    case 0x5CF:
        return 0x1F;
    case 0x5D0:
        return 0x21;
    default:
        return 0xffff;
    }
}
static inline s32 clip_set_7a(u16 clip) {
    switch (clip) {
    case 0x5CA:
        return 0x10;
    case 0x5CB:
        return 0x11;
    case 0x5CC:
        return 0x20;
    case 0x5CD:
        return 0x1C;
    case 0x5CE:
        return 0x1E;
    case 0x5CF:
        return 0x1F;
    case 0x5D0:
        return 0x21;
    default:
        return 0xffff;
    }
}
static inline s32 clip_set_6c(u16 clip) {
    switch (clip) {
    case 0x5CA:
        return 0x4D;
    case 0x5CB:
        return 0x11;
    case 0x5CC:
        return 6;
    case 0x5CD:
        return 0x24;
    case 0x5CE:
        return 0x23;
    case 0x5CF:
        return 2;
    case 0x5D0:
        return 3;
    default:
        return 0xffff;
    }
}

/* Map the clip to its variant for the current animation set. */
s32 func_00BC03A0(u16 clip) {
    switch (func_00208210(func_001A5F20(4))) {
    case 0x82:
        return clip_set_82(clip);
    case 0x81:
        return clip_set_81(clip);
    case 0x80:
        return clip_set_80(clip);
    case 0x7F:
        return clip_set_7f(clip);
    case 0x7E:
        return clip_set_7e(clip);
    case 0x7D:
        return clip_set_7d(clip);
    case 0x7C:
        return clip_set_7c(clip);
    case 0x7B:
        return clip_set_7b(clip);
    case 0x7A:
        return clip_set_7a(clip);
    case 0x78:
        return func_00BC12E0(clip);
    case 0x79:
        return func_00BC1210(clip);
    case 0x77:
        return func_00BC1150(clip);
    case 0x76:
        return func_00BC1080(clip);
    case 0x75:
        return func_00BC0FC0(clip);
    case 0x74:
        return func_00BC0EF0(clip);
    case 0x73:
        return func_00BC0E30(clip);
    case 0x72:
        return func_00BC0D70(clip);
    case 0x71:
        return func_00BC0CB0(clip);
    case 0x70:
        return func_00BC0BF0(clip);
    case 0x6F:
        return func_00BC0B30(clip);
    case 0x6E:
        return func_00BC0A60(clip);
    case 0x6C:
        return clip_set_6c(clip);
    case 0x6B: {
        s32 id = clip;
        s32 variant;
        if (id == 0x5ce)
            variant = 3;
        else if (id == 0x5cd)
            variant = 2;
        else if (id == 0x5cc)
            variant = 1;
        else if (id == 0x5cb)
            variant = 4;
        else if (id != 0x5ca)
            variant = 0xffff;
        else
            variant = 0x4d;
        return variant;
    }
    case 0x6D:
        if (clip != 0x5ca)
            return 0xffff;
        return 5;
    default:
        return 0xffff;
    }
}
