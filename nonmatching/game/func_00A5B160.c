/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00A9BA00(void *);
extern s32 func_002AE670(s32);
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_00A40060(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_00A59F60();                                /* extern */
s32 func_00A5AFB0(void *, s32);                     /* extern */
s32 func_00A62290(void *, s32, M2C_UNK);            /* extern */
s32 func_00A9B990(void *);                          /* extern */
extern void *Pes6Ball_Current;

u8 func_00A5B160(void *arg0) {
    s32 temp_s1;

    if (func_00A59F60() == 0) {
        if ((func_00A9BA00(arg0) >= 0x900001) && ((func_009B30B0(M2C_FIELD(Pes6Ball_Current, u16 *, 0x58), M2C_FIELD(arg0, u16 *, 0x2A)) & 0xFFFF) < 0x21) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(arg0, u16 *, 0x28)) & 0xFFFF) < 0x31) && ((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x31)) {
            return 0xFFU;
        }
        if ((func_00A9B990(arg0) >= 0x900001) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) < (0x1900 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)))) {
            return 0xFFU;
        }
        temp_s1 = func_00A40060(arg0, 0xA, 0) & 0xFFFF;
        func_002AE670(0xA);
        if (func_00A5AFB0(arg0, func_00A9B990(arg0)) != 0) {
            if (func_00A62290(arg0, temp_s1, 1) != 0) {
                M2C_FIELD(arg0, s32 *, 0x228) = (s32) (temp_s1 & 0xFFFF);
                return M2C_FIELD(arg0, u8 *, 0x16);
            }
            return 0xFFU;
        }
        return 0xFFU;
    }
    return 0x22U;
}
