/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern s32 func_00226710(void);
extern u8 func_00225820(void);
s32 func_002262E0(s32);                             /* extern */
M2C_UNK func_0022E680(s32, s64, u8, M2C_UNK);       /* extern */
extern void *D_003E77B0;
extern char D_00591C09[];

void func_0022EBB0(s32 arg0, s64 arg1) {
    M2C_UNK var_a3;
    s32 temp_a1;
    s32 var_v1;
    u8 temp_s2;
    u8 temp_s2_2;
    u8 var_a2;
    void *temp_s3;
    void *temp_s3_2;

    if (((func_00309420() != 0) != 1) && ((arg0 != 0) || (((s64) (arg1 << 0x38) >> 0x38) == -2))) {
        if ((func_00309420() != 0) == 1) {
            var_v1 = 0xFF;
        } else {
            temp_a1 = func_002262E0(func_00226710()) & 0xFF;
            if (((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 0xE) && ((*(u8 *)D_00591C09) != 2) && ((*(u8 *)D_00591C09) != 1)) {
                var_v1 = 0xFF;
            } else {
                var_v1 = temp_a1 & 0xFF;
            }
        }
        if (!(var_v1 & 0xFF) && ((func_00226710() & 0xFF) != 0x1E) && ((func_00226710() & 0xFF) != 0x22) && ((func_00226710() & 0xFF) != 0x2E)) {
            temp_s3 = D_003E77B0;
            temp_s2 = M2C_FIELD(temp_s3, u8 *, 0x2C);
            if (temp_s2 == (func_00225820() & 0xFF)) {
                var_a2 = M2C_FIELD(temp_s3, u8 *, 0x2D);
                var_a3 = 0;
                goto block_19;
            }
            temp_s3_2 = D_003E77B0;
            temp_s2_2 = M2C_FIELD(temp_s3_2, u8 *, 0x2D);
            if (temp_s2_2 == (func_00225820() & 0xFF)) {
                var_a2 = M2C_FIELD(temp_s3_2, u8 *, 0x2C);
                var_a3 = 1;
block_19:
                func_0022E680(arg0, arg1, var_a2, var_a3);
            }
        }
    }
}
