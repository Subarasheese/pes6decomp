/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

u8 func_0019F4C0();                                 /* extern */
M2C_UNK func_0019FB60();                            /* extern */
M2C_UNK func_0019FBA0();                            /* extern */
M2C_UNK func_001A22F0();                            /* extern */
M2C_UNK func_001A2330(M2C_UNK);                     /* extern */
M2C_UNK func_00272800(M2C_UNK);                     /* extern */
M2C_UNK func_002A8830(M2C_UNK);                     /* extern */
M2C_UNK func_00902240(s32, s32);                    /* extern */
s32 func_009088C0(u8 *);                            /* extern */
s32 func_00909F20(s32, M2C_UNK);                    /* extern */
s32 func_00909FA0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_0090A390();                            /* extern */
M2C_UNK func_0090B3D0();                            /* extern */
s32 func_009177C0(s32);                             /* extern */
extern char D_0059274E[];
extern char D_00592754[];
extern char D_0092F0A4[];
extern char D_0092F1AB[];
extern char D_0092F256[];

s32 func_00902790(void) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_s1;
    s32 var_s1_2;

    var_s1 = 0;
    do {
        temp_s0 = var_s1 & 0xFF;
        temp_v0 = func_009177C0(temp_s0);
        if (temp_v0 != 0) {
            func_00902240(temp_v0, temp_s0);
        }
        var_s1 = (var_s1 + 1) & 0xFF;
    } while (var_s1 < 0xB);
    var_s1_2 = 0;
    do {
        temp_s0_2 = ((var_s1_2 & 0xFF) + 0xB) & 0xFF;
        temp_v0_2 = func_009177C0(temp_s0_2);
        if (temp_v0_2 != 0) {
            func_00902240(temp_v0_2, temp_s0_2);
        }
        var_s1_2 = (var_s1_2 + 1) & 0xFF;
    } while (var_s1_2 < 0xB);
    (*(u8 *)D_00592754) = func_0019F4C0();
    switch ((*(u8 *)D_0092F0A4)) {                           /* irregular */
    case 0:
        if ((func_00909FA0((*(u8 *)D_0092F1AB) & 1, -1) & 0xFF) == 1) {
            (*(u8 *)D_0092F0A4) += 1;
        }
block_20:
    default:
        return 0;
    case 1:
        if (func_009088C0(((void *)D_00592754)) == 0) {
            if ((*(u8 *)D_00592754) != 0) {
                func_0019FB60();
                func_001A22F0();
                func_002A8830(0);
                func_00272800(0x17);
                func_0090A390();
                (*(s16 *)D_0092F256) = 3;
                (*(s8 *)D_0059274E) = 4;
                func_001A2330(3);
                func_0019FBA0();
                func_0019F4C0();
                return 0;
            }
            goto block_20;
        }
        (*(u8 *)D_0092F0A4) += 1;
    case 2:
        func_0090B3D0();
        if ((func_00909F20(((s32) (*(u8 *)D_0092F1AB) >> 1) & 1, -1) & 0xFF) == 1) {
            return 1;
        }
        goto block_20;
    }
}
