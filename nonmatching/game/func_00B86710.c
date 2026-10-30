/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern void func_00209820(void);
extern s32 func_00207D10(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00B2ACF0(void **, M2C_UNK);            /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
M2C_UNK func_00BD3BA0(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00BD4040(void **, s32);                /* extern */
s32 func_00C01090(M2C_UNK);                         /* extern */

void func_00B86710(void **arg0) {
    s16 var_a0;
    s32 var_s0;
    s32 var_v0;
    void *temp_a0;

    func_00209820();
    temp_a0 = M2C_FIELD(*arg0, void **, 4);
    if (M2C_FIELD(temp_a0, u16 *, 0x30) == 0x4B8) {
        var_s0 = 0;
        func_00B2ACF0(arg0, 0x4B8);
        if (func_00C01090(1) != 0) {
            if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
                var_a0 = 0x7F;
                var_s0 = 1;
                goto block_7;
            }
        } else {
            if (func_00207D80(M2C_FIELD(*arg0, void **, 4), 0x34) == 0) {
                goto block_5;
            }
            if (func_00BBB8C0(3) != 0) {
                var_a0 = 8;
                var_s0 = 1;
                goto block_7;
            }
block_5:
            if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
                var_a0 = 0xA;
                var_s0 = 1;
block_7:
                M2C_FIELD(*arg0, s16 *, 0x18) = var_a0;
            }
        }
        if (var_s0 != 0) {
            if (M2C_FIELD(*arg0, u16 *, 0x18) == 8) {
                var_v0 = 3;
            } else {
                var_v0 = 1;
            }
            func_00BD4040(arg0, var_v0 & 0xFF);
            func_00BD3BA0(arg0, 4, 1);
            func_00BD3BA0(arg0, 5, 1);
        }
    } else {
        func_00209A00(temp_a0, 0x4B8, 0);
        func_00207390(M2C_FIELD(*arg0, void **, 4), 8);
    }
}
