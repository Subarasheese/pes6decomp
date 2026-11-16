/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00288670(u32, u32);
extern s32 func_00A1B4A0(void);
extern u8 func_00BBB780(s16);
extern s32 func_00BBB8C0(s32);
extern char Pes6MatchSquads[];

s32 func_00A0DDD0(void *arg0) {
    s32 var_v1;
    u8 t;

    if (func_00A1B4A0() != 0) {
        return 0;
    }
    t = M2C_FIELD(arg0, u8 *, 0x16);
    if (t == 4) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0xA4);
    } else if (t == 10) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x98);
    } else if (t == 9) {
        var_v1 = M2C_FIELD(arg0, s32 *, 0xA4);
    } else {
        var_v1 = M2C_FIELD(arg0, s32 *, 0x1C);
    }
    if (M2C_FIELD(arg0, u8 *, 0x25) == 0) {
        if (var_v1 >= 0x1B01 && func_00BBB8C0(2) == 0) {
            if (func_00BBB780(func_00288670(*((u8 *)Pes6MatchSquads + M2C_FIELD(arg0, u8 *, 0x12) * 0x6900 + M2C_FIELD(arg0, u8 *, 0x11) * 0x348 + 0x6C) & 0x7F, 0x32) ) == 0) {
                return 1;
            }
        }
        return 0;
    }
    if (var_v1 < 0x1901) {
        if (func_00BBB780(func_00288670(*((u8 *)Pes6MatchSquads + M2C_FIELD(arg0, u8 *, 0x12) * 0x6900 + M2C_FIELD(arg0, u8 *, 0x11) * 0x348 + 0x6C) & 0x7F, 0x32)) == 0) {
            return 1;
        }
        return 0;
    }
    return 1;
}
