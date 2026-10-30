/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00213800(s32, M2C_UNK);                /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0081EC20(M2C_UNK);                         /* extern */
s32 func_009DD8B0();                                /* extern */
s32 func_009DD8F0();                                /* extern */
s32 func_009DD930();                                /* extern */
s32 func_009DD970();                                /* extern */
s32 func_009DDA10();                                /* extern */
s32 func_009DDA50();                                /* extern */
M2C_UNK func_009DDAE0(M2C_UNK);                     /* extern */
M2C_UNK func_009E3510(s32, M2C_UNK);                /* extern */
extern s8 *D_00A7DD78;

s32 func_009C7D30(void) {
    s32 temp_v0;
    s8 var_v1;

    if (func_009DD970() == 0) {
        func_00213800(M2C_FIELD(D_00A7DD78, s32 *, 8), 1);
        M2C_FIELD(D_00A7DD78, s8 *, 0) = 1;
        return 0;
    }
    if ((func_009DD8B0() == 0) && (func_0081EC20(0x1000) != 0)) {
        func_0026E840(0x84008401);
        func_009DDAE0(0);
    } else if ((func_009DD8B0() == 0) && (func_0081EC20(0x80) != 0)) {
        func_0026E840(0x8400F803);
        func_009DDAE0(0);
    } else if ((func_009DD8F0() == 0) && (func_009DD930() == 0) && (func_0081EC20(0x20) != 0)) {
        func_0026E840(0x8400F803);
        func_009DDAE0(1);
    }
    temp_v0 = func_009DDA50();
    switch (temp_v0) {                              /* irregular */
    case 0:
        break;
    case 1:
        func_009E3510(func_009DDA10(), 0);
        var_v1 = 0xC;
block_18:
        M2C_FIELD(D_00A7DD78, s8 *, 0) = var_v1;
        break;
    case 2:
        var_v1 = 1;
        goto block_18;
    }
    return 0;
}
