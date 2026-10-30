/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0090F820();                                /* extern */
s16 func_00911AD0(M2C_UNK);                         /* extern */
M2C_UNK func_00911D80(s32);                         /* extern */
extern void *D_00923FC8;

s32 func_00911BD0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s16 temp_v1;

    if (func_0090F820() != 0) {

    } else {
        temp_v1 = M2C_FIELD(D_00923FC8, s16 *, 0);
        if (temp_v1 < 9) {
            if (M2C_FIELD(D_00923FC8, s16 *, 2) == temp_v1) {
                func_0026E840(0x8400F803);
                func_00911D80(arg3);
                M2C_FIELD(D_00923FC8, s16 *, 2) = func_00911AD0(1);
            }
        }
    }
    return 0;
}
