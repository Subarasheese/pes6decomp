/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00220830(s32);
extern s32 func_001F08B0(s32);
s32 func_002781A0(s32);                             /* extern */
s16 *func_008472D0();                               /* extern */
s64 func_00858C20(s32);                             /* extern */
s32 func_008BC3B0();                                /* extern */
s32 func_008E2870(void *, u8);                      /* extern */
M2C_UNK func_008E2A40(void *);                      /* extern */
M2C_UNK func_008E2A50(void *, M2C_UNK, M2C_UNK, u8, s32 *); /* extern */
extern char D_00592800[];
extern char D_008B144E[];
extern char D_008EE190[];
extern char D_008EE750[];

s32 func_008B4B40(void *arg0, s32 arg1) {
    s32 sp38;
    s32 sp3C;
    M2C_UNK *var_a1;
    s32 var_a2;
    s32 var_v0;
    s32 var_v0_2;
    s64 temp_a0;
    s64 temp_s1;
    u8 temp_s0;

    switch (arg1) {                                 /* switch 1; irregular */
    case 1:                                         /* switch 1 */
        if (func_008E2870(arg0 + 0x2484, M2C_FIELD(arg0, u8 *, 0x19)) == 2) {
            func_008E2A40(arg0 + 0x2484);
            M2C_FIELD(arg0, s8 *, 0xC) = 1;
            temp_s0 = M2C_FIELD(arg0, u8 *, 0);
            if (func_008BC3B0() == 0) {
                if (((*(u16 *)D_008EE190) & 0x80) && (temp_s1 = (s64) (func_00858C20((*(s8 *)D_008B144E) & 1) << 0x30) >> 0x30, ((temp_s1 == *func_008472D0()) == 0))) {
                    var_v0_2 = 1;
                } else {
                    var_v0_2 = 1;
                    if (((s64) (((*(u16 *)D_008EE190) & 0xF) << 0x30) >> 0x30) == 1) {
                        var_a2 = 0;
                        var_a1 = ((void *)D_00592800);
loop_16:
                        if ((M2C_FIELD(var_a1, u8 *, 0) == M2C_FIELD((((void *)D_008EE750) + ((temp_s0 & 0xFF) * 0x3224)), u8 *, 0x19)) && (M2C_FIELD(var_a1, u8 *, 8) == 1)) {

                        } else {
                            var_a2 += 1;
                            var_a1 += 0x28;
                            if (var_a2 >= 8) {
                                var_v0_2 = 0;
                            } else {
                                goto loop_16;
                            }
                        }
                    } else if (func_008BC3B0() != 0) {
                        var_v0_2 = 0;
                    } else {
                        temp_a0 = (s64) (((*(u16 *)D_008EE190) & 0xF) << 0x30) >> 0x30;
                        switch (temp_a0) {          /* switch 2; irregular */
                        case 7:                     /* switch 2 */
                            var_v0_2 = 0;
                            break;
                        case 6:                     /* switch 2 */
                        case 8:                     /* switch 2 */
                            var_v0_2 = 0;
                            break;
                        default:                    /* switch 2 */
                            var_v0_2 = func_002781A0(temp_s0 & 0xFF);
                            break;
                        }
                    }
                }
                if (var_v0_2 == 1) {
                    var_v0 = 0x21;
                } else {
                    goto block_33;
                }
            } else {
block_33:
                if (func_00220830(temp_s0 & 0xFF) != 1) {
                    var_v0 = 0x20;
                } else {
                    var_v0 = 0x24;
                }
            }
            return var_v0 & 0xFF;
        }
    case 2:                                         /* switch 1 */
block_38:
    default:                                        /* switch 1 */
        return 0;
    case 0:                                         /* switch 1 */
        sp38 = func_001F08B0(0x010C0005);
        sp3C = 0;
        func_008E2A50(arg0 + 0x2484, 3, 0, M2C_FIELD(arg0, u8 *, 0), &sp38);
        goto block_38;
    }
}
