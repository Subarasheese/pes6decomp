/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00121430(void *);
s32 func_001C7E10(void *, M2C_UNK *);               /* extern */
M2C_UNK func_001C7F58(M2C_UNK *, void *, s32, s32); /* extern */
extern char D_003A9190[];
extern char D_003A91B0[];
extern char D_003A91B4[];
extern char D_003A91B6[];
extern char D_00537B60[];
extern char D_00538250[];
extern char D_0053825E[];
extern M2C_UNK func_00214DB0;
extern M2C_UNK func_002150F0;

s32 func_00215170(void *arg0) {
    s32 *var_a1_2;
    s32 *var_a1_3;
    s32 *var_a2_2;
    s32 *var_a2_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_a1;
    s32 var_a2;
    s32 var_a3;
    s32 var_a3_2;
    s32 var_a4;
    s32 var_v0;
    s32 var_v0_2;
    u8 temp_v0;
    void *temp_s0;

    var_a3 = M2C_FIELD(arg0, s32 *, 0xB8);
    var_a1 = var_a3 << 6;
loop_1:
    if (var_a3 < M2C_FIELD(arg0, s32 *, 0x1C)) {
        temp_s0 = M2C_FIELD(arg0, s32 *, 0xBC) + var_a1;
        var_a2 = 0;
        if (M2C_FIELD(temp_s0, u8 *, 0x20) != 0x2E) {

        } else {
            temp_v0 = M2C_FIELD(temp_s0, u8 *, 0x21);
            switch (temp_v0) {                      /* irregular */
            case 0:
block_17:
                var_a2 = 1;
                break;
            case 46:
                if (M2C_FIELD(temp_s0, u8 *, 0x22) == 0) {
                    goto block_17;
                }
                break;
            }
        }
        if (var_a2 != 0) {
            var_a3 += 1;
            var_a1 += 0x40;
            M2C_FIELD(arg0, s32 *, 0xB8) = var_a3;
            goto loop_1;
        }
        func_001C7F58(((void *)D_00537B60), arg0 + 0x38, var_a2, var_a3);
        func_00121430(((void *)D_00537B60));
        func_00121430(((void *)D_00537B60));
        M2C_FIELD(arg0, M2C_UNK **, 0xC4) = ((void *)D_00537B60);
        if (((*(s16 *)D_0053825E) == (*(s16 *)D_003A91B6)) && (M2C_FIELD(((void *)D_00538250), s16 *, 0xC) == (*(s16 *)D_003A91B4))) {
            if ((*(s32 *)D_003A91B0) < 0) {
                goto block_28;
            }
            if (func_001C7E10(temp_s0 + 0x20, ((void *)D_003A9190)) == 0) {
                var_v0_2 = 1;
            } else {
block_28:
                goto block_29;
            }
        } else {
block_29:
            var_v0_2 = 0;
        }
        if (var_v0_2 != 0) {
            var_v0 = -0x7E;
        } else {
            var_a2_2 = M2C_FIELD(arg0, s32 **, 0xA8);
            var_a4 = 0;
            temp_v1 = M2C_FIELD(arg0, s32 *, 0xAC);
            temp_a0 = *var_a2_2;
            var_a3_2 = 0;
            if (temp_a0 != temp_v1) {
                var_a1_2 = var_a2_2;
                do {
                    var_a1_2 += 4;
                    var_a4 += 1;
                } while (*var_a1_2 != temp_v1);
            }
            if (temp_a0 != &func_002150F0) {
                do {
                    var_a2_2 += 4;
                    var_a3_2 += 1;
                } while (*var_a2_2 != &func_002150F0);
            }
            goto block_23;
        }
    } else {
        var_a2_3 = M2C_FIELD(arg0, s32 **, 0xA8);
        var_a4 = 0;
        temp_v1_2 = M2C_FIELD(arg0, s32 *, 0xAC);
        temp_a0_2 = *var_a2_3;
        var_a3_2 = 0;
        if (temp_a0_2 != temp_v1_2) {
            var_a1_3 = var_a2_3;
            do {
                var_a1_3 += 4;
                var_a4 += 1;
            } while (*var_a1_3 != temp_v1_2);
        }
        if (temp_a0_2 != &func_00214DB0) {
            do {
                var_a2_3 += 4;
                var_a3_2 += 1;
            } while (*var_a2_3 != &func_00214DB0);
        }
block_23:
        var_v0 = var_a3_2 - var_a4;
    }
    return var_v0;
}
