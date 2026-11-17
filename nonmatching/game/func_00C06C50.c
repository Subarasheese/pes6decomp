/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00952A50(u16);                             /* extern */
M2C_UNK func_0096D0A0(void *, u16, M2C_UNK);        /* extern */
s32 func_009909D0(void *, s32);                     /* extern */
s32 func_009937C0();                                /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
extern char D_00591BE4[];
extern char Pes6MatchSquads[];

#pragma peephole off
s32 func_00C06C50(void *arg0, void *arg1) {
    u8 state;
    u16 v;
    u16 t;

    state = M2C_FIELD(arg1, u8 *, 0x29);
    if (state == 2) {
        func_0096D0A0(arg0, M2C_FIELD(arg1, u16 *, 0x2A), 0);
        if ((func_009937C0() & 0xFF) == 8) {
            return 1;
        }
        return 3;
    }
    if (state == 1) {
        func_0096D0A0(arg0, M2C_FIELD(arg1, u16 *, 0x2A), 0);
        if (M2C_FIELD(arg0, u8 *, 0x16) == 2) {
            t = M2C_FIELD(arg0, u16 *, 0x18);
            if (t == 0xD5 || t == 0xD0 || t == 4) {
                M2C_FIELD(arg1, u8 *, 0x29) = (u8) (M2C_FIELD(arg1, u8 *, 0x29) + 1);
                M2C_FIELD(arg1, u16 *, 0x2A) = (u16) (M2C_FIELD(arg1, u16 *, 0x2A) + 0x8000);
            }
        }
        return 3;
    }
    if (state != 0) {
        return 3;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) == 0 && func_009909D0(arg0, 0x100000) != 0) {
        M2C_FIELD(arg1, u8 *, 0x29) = (u8) (M2C_FIELD(arg1, u8 *, 0x29) + 1);
    } else if ((u8) (*(u8 *)D_00591BE4) < M2C_FIELD(arg1, u32 *, 0x10)) {
        M2C_FIELD(arg1, u8 *, 0x29) = (u8) (M2C_FIELD(arg1, u8 *, 0x29) + 1);
    }
    M2C_FIELD(arg0, s32 *, 0x1EC) = 0x200;
    M2C_FIELD(arg0, s32 *, 0xB0) = M2C_FIELD(arg0, s32 *, 0x1EC);
    if (M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((char *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x68) & 1) {
        v = M2C_FIELD(arg0, u16 *, 0x26) - 0x4000;
    } else {
        v = M2C_FIELD(arg0, u16 *, 0x26) + 0x4000;
    }
    M2C_FIELD(arg1, u16 *, 0x2A) = v;
    if ((func_009B3070(M2C_FIELD(arg1, u16 *, 0x2A), M2C_FIELD(((M2C_FIELD((((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 0xB) + (char *)arg0), u8 *, 0x1B4) * 2) + (char *)arg0), u16 *, 0x128)) & 0xFFFF) > 0x4000) {
        M2C_FIELD(arg1, u16 *, 0x2A) = (u16) (M2C_FIELD(arg1, u16 *, 0x2A) + 0x8000);
    }
    if ((func_00952A50(M2C_FIELD(arg1, u16 *, 0x2A)) & 0xFF) < 0x63) {
        if ((func_00952A50((M2C_FIELD(arg1, u16 *, 0x2A) + 0x8000) & 0xFFFF) & 0xFF) >= 0x63) {
            return 1;
        }
        return 3;
    }
    return 1;
}
