/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00A9BA00(void *);
extern s32 func_00A9C660(void *);
s32 func_009B30B0(s32, s32);                        /* extern */
s32 func_00A06F90(void *, s32);                     /* extern */
s32 func_00A18050(void *);                          /* extern */
extern char D_00591BE4[];

s32 func_009F4330(void *arg0) {
    s32 var_v0;
    s32 temp_a0;
    s32 temp_v0;
    u8 temp_v1;

    temp_v1 = M2C_FIELD(arg0, u8 *, 0x51);
    if (temp_v1 != 0 && !(M2C_FIELD(arg0, s32 *, 0xB4) & 0x8000)) {
        M2C_FIELD(arg0, u8 *, 0x51) = (u8) (temp_v1 - 1);
        if ((func_00A9BA00(arg0) < 0x06400000) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x10C)) & 0xFFFF) < 0x61) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), func_00A9C660(arg0)) & 0xFFFF) < 0x61)) {
            M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) | 0x8000);
        }
        var_v0 = func_00A06F90(arg0, func_00A18050(arg0) & 0xFF);
    } else {
        if ((M2C_FIELD(arg0, s32 *, 0xB4) & 0x8000) && (func_00A9BA00(arg0) < 0x02400001)) {
            M2C_FIELD(arg0, u8 *, 0x51) = (u8) (*(u8 *)D_00591BE4 / 3);
        }
        var_v0 = func_00A06F90(arg0, func_00A18050(arg0) & 0xFF);
    }
    temp_a0 = var_v0 & 0xFF;
    if (temp_a0 == 0xFF) {
        temp_v0 = M2C_FIELD(arg0, u16 *, 0x1A);
        if (temp_v0 != 0xFF) {
            return temp_v0;
        }
    }
    return temp_a0;
}
