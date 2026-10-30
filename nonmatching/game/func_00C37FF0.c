/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D10(void *);
extern s32 func_002079F0(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209A00(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_00B2ACF0(void **);                     /* extern */
s32 func_00BAC710(u16);                             /* extern */
s32 func_00BB1310(M2C_UNK);                         /* extern */
M2C_UNK func_00BD3CF0(void **, f32, f32);           /* extern */
M2C_UNK func_00BD4040(void **, M2C_UNK);            /* extern */
M2C_UNK func_00C32E60(void **);                     /* extern */

void func_00C37FF0(void **arg0) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_00BAC710(M2C_FIELD(M2C_FIELD(*arg0, void **, 4), u16 *, 0x30));
    if ((temp_v0 != 0x1B4) && (temp_v0 != 0x1B3) && (temp_v0 != 0x1AF)) {
        func_00C32E60(arg0);
        temp_v0_2 = *arg0;
        func_00BD3CF0(arg0, M2C_FIELD(temp_v0_2, f32 *, 0x6C), M2C_FIELD(temp_v0_2, f32 *, 0x70));
        if (func_002079F0(M2C_FIELD(*arg0, void **, 4)) != 0) {
            func_00209A00(M2C_FIELD(*arg0, void **, 4), func_00BB1310(0x1AF) & 0xFFFF, 0);
        }
    } else {
        func_00B2ACF0(arg0);
        if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) != 0) {
            func_00208610(M2C_FIELD(*arg0, void **, 4));
            func_00BD4040(arg0, 1);
            M2C_FIELD(*arg0, s16 *, 0x18) = 1;
        }
    }
}
