/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002781A0(s32);                             /* extern */
s16 *func_008472D0();                               /* extern */
s64 func_00858C20(s32);                             /* extern */
s32 func_008BC3B0();                                /* extern */
extern char D_00592800[];
extern char D_008B144E[];
extern char D_008EE190[];
extern char D_008EE750[];

s32 func_008B94E0(s32 arg0) {
    M2C_UNK *var_a1;
    s32 var_a2;
    s64 temp_a0;
    s64 temp_s1;

    if ((*(u16 *)D_008EE190) & 0x80) {
        temp_s1 = (s64) (func_00858C20((*(s8 *)D_008B144E) & 1) << 0x30) >> 0x30;
        if (temp_s1 != *func_008472D0()) {
            return 1;
        }
    }
    if (((s64) (((*(u16 *)D_008EE190) & 0xF) << 0x30) >> 0x30) == 1) {
        var_a2 = 0;
        var_a1 = ((void *)D_00592800);
loop_5:
        if ((M2C_FIELD(var_a1, u8 *, 0) == M2C_FIELD((((void *)D_008EE750) + ((arg0 & 0xFF) * 0x3224)), u8 *, 0x19)) && (M2C_FIELD(var_a1, u8 *, 8) == 1)) {
            return 1;
        }
        var_a2 += 1;
        var_a1 += 0x28;
        if (var_a2 >= 8) {
            return 0;
        }
        goto loop_5;
    }
    if (func_008BC3B0() != 0) {
        return 0;
    }
    temp_a0 = (s64) (((*(u16 *)D_008EE190) & 0xF) << 0x30) >> 0x30;
    switch (temp_a0) {                              /* irregular */
    case 7:
        return 0;
    case 6:
    case 8:
        return 0;
    default:
        return func_002781A0(arg0 & 0xFF);
    }
}
