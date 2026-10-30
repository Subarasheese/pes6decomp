/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00207390(s32, M2C_UNK);                /* extern */
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_00AB38D0();                                /* extern */
extern void *Pes6Ball_Current;

s32 func_00ADA450(void *arg0, s32 arg1) {
    s32 var_s0;

    var_s0 = arg1;
    if (func_00AB38D0() != 4) {
        return 0;
    }
    if ((u32) (M2C_FIELD(arg0, u8 *, 0x4C) - 1) < 2U) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) & 0x400) {
        if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 9) {
            if ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 9) {
                var_s0 = 0;
            }
        }
        M2C_FIELD(arg0, u8 *, 0x4C) = 1U;
        if (var_s0 != 0) {
            func_00207390(M2C_FIELD(arg0, s32 *, 4), 8);
            M2C_FIELD(arg0, s8 *, 0x4E) = 0;
            M2C_FIELD(arg0, s16 *, 0x18) = 2;
        }
        return 1;
    }
    return 0;
}
