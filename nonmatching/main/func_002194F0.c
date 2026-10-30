/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_001159F8(int);
extern int func_00115AB8(int, int, int);
s32 func_001C7E10(s32, M2C_UNK *);                  /* extern */
extern char D_003A9190[];
extern char D_003A91B0[];
extern char D_003A91B6[];
extern char D_00538224[];
extern char D_00538228[];
extern char D_0053822C[];
extern char D_00538230[];
extern char D_00538234[];
extern char D_00538250[];
extern char D_0053825E[];

s32 func_002194F0(void *arg0) {
    s32 temp_s0;
    s32 temp_v1;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_v0;

    temp_s0 = M2C_FIELD(arg0, s32 *, 0x84);
    temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x10), s32 *, 0x1C);
    var_a0_2 = 0;
    if (temp_v1 != 0) {
        var_a0_2 = temp_v1 + (M2C_FIELD(arg0, s32 *, 0xB8) << 5);
    }
    if ((*(s16 *)D_0053825E) == (*(s16 *)D_003A91B6)) {
        if (M2C_FIELD(((void *)D_00538250), s16 *, 0xC) == *(s16 *)0x3A91B4) {
            if ((*(s32 *)D_003A91B0) < 0) {
                goto block_4;
            }
            if (func_001C7E10(var_a0_2, ((void *)D_003A9190)) == 0) {
                var_v0 = 1;
            } else {
block_4:
                goto block_5;
            }
        } else {
            goto block_5;
        }
    } else {
block_5:
        var_v0 = 0;
    }
    if ((var_v0 != 0) && ((M2C_FIELD(arg0, s32 *, 0x34) & 0x100) == 0x100)) {
        (*(s32 *)D_00538228) = 0;
        (*(s32 *)D_00538230) = 0;
        (*(s32 *)D_00538234) = 0;
        (*(s32 *)D_0053822C) = (*(s32 *)D_003A91B0);
        var_a0 = 0;
        (*(s32 *)D_00538224) = 0;
        if (func_00115AB8((*(s32 *)D_003A91B0), 0, 0) != 0) {

        } else {
            M2C_FIELD(arg0, s32 *, 8) = 0;
            var_a0 = -0x7F;
        }
    } else {
        (*(s32 *)D_00538228) = 0;
        (*(s32 *)D_0053822C) = temp_s0;
        var_a0 = 0;
        (*(s32 *)D_00538224) = 0;
        if (func_001159F8(temp_s0) != 0) {

        } else {
            M2C_FIELD(arg0, s32 *, 8) = 0;
            var_a0 = -0x7F;
        }
    }
    return var_a0;
}
