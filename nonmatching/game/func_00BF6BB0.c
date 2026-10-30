/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void **func_00B2A420(M2C_UNK);                      /* extern */
s32 func_00BBB8C0(M2C_UNK, M2C_UNK, M2C_UNK, u16, M2C_UNK, s32); /* extern */
extern char D_00591BE4[];
extern char D_00591E14[];
extern char D_00591F24[];
extern char D_005922EA[];

u8 func_00BF6BB0(void) {
    s32 var_a5;
    u16 temp_a3_2;
    u8 var_v0;
    u8 var_v0_2;
    void **var_s0;
    void *temp_a3;

    if (((*(s32 *)D_00591E14) == ((u8) (*(u8 *)D_00591BE4) >> 1)) && ((s32) (*(u16 *)D_005922EA) <= 0)) {
        if ((*(u8 *)D_00591F24) == 2) {
            var_s0 = func_00B2A420(1);
            var_a5 = 0;
loop_4:
            temp_a3 = *var_s0;
            if ((M2C_FIELD(temp_a3, u8 *, 0x16) == 0x47) && (temp_a3_2 = M2C_FIELD(M2C_FIELD(temp_a3, void **, 4), u16 *, 0x30), (((s32) temp_a3_2 < 0x3EF) == 0))) {
                switch (temp_a3_2) {                /* irregular */
                case 0x46E:
                    if (func_00BBB8C0(0xA, 0x478, 0x46E, temp_a3_2, 0x47, var_a5) >= 4) {
                        var_v0 = 0;
                    } else {
                        var_v0 = M2C_FIELD(*var_s0, u8 *, 0);
                    }
                    return var_v0;
                case 0x478:
                case 0x407:
                case 0x3F7:
                    if (func_00BBB8C0(0xA, 0x478, 0x46E, temp_a3_2, 0x47, var_a5) >= 6) {
                        var_v0_2 = 0;
                    } else {
                        var_v0_2 = M2C_FIELD(*var_s0, u8 *, 0);
                    }
                    return var_v0_2;
                }
            } else {
                var_a5 += 1;
                var_s0 += 8;
                if (var_a5 >= 0x16) {
                    goto block_24;
                }
                goto loop_4;
            }
        } else {
block_24:
            goto block_25;
        }
    } else {
block_25:
        return 0U;
    }
}
