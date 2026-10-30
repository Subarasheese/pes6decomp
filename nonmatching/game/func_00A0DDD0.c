/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
s32 func_00A1B4A0();                                /* extern */
s32 func_00BBB780(s64);                             /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char Pes6MatchSquads[];

s32 func_00A0DDD0(void *arg0) {
    s32 var_v1;
    u8 temp_v1;

    if (func_00A1B4A0() != 0) {
        return 0;
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x16);
    switch (temp_v1) {                              /* irregular */
    case 4:
        var_v1 = M2C_FIELD(arg0, s32 *, 0xA4);
        break;
    case 10:
        var_v1 = M2C_FIELD(arg0, s32 *, 0x98);
        break;
    case 9:
        var_v1 = M2C_FIELD(arg0, s32 *, 0xA4);
        break;
    default:
        var_v1 = M2C_FIELD(arg0, s32 *, 0x1C);
        break;
    }
    if (M2C_FIELD(arg0, u8 *, 0x25) == 0) {
        if ((var_v1 >= 0x1B01) && (func_00BBB8C0(2) == 0) && !(func_00BBB780((s64) (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U) << 0x30) >> 0x30) & 0xFF)) {
            goto block_26;
        }
        goto block_24;
    }
    if (var_v1 < 0x1901) {
        if (!(func_00BBB780((s64) (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U) << 0x30) >> 0x30) & 0xFF)) {
            goto block_26;
        }
block_24:
        return 0;
    }
block_26:
    return 1;
}
