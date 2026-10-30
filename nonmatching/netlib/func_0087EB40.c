/* compiler: mwcc-3.0.1b198 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_0081CB00(s32);                         /* extern */
s32 func_0081E320(M2C_UNK);                         /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_00852750(s64);                         /* extern */
M2C_UNK func_00858360(s16, s32);                    /* extern */
M2C_UNK func_0085EC80(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0087CF30();                            /* extern */
M2C_UNK func_00880C60();                            /* extern */
s32 func_00BDA160();                                /* extern */
extern char D_003AE983[];
extern char D_008B144D[];
extern char D_008B1468[];
extern char D_008B14CD[];
extern char D_008B2437[];
extern M2C_UNK func_0087DAA0;
extern M2C_UNK func_0087DB90;

s32 func_0087EB40(void) {
    M2C_UNK var_a0_2;
    s64 var_a0;

    switch ((*(u8 *)D_008B2437)) {                           /* irregular */
    case 1:
        (*(s8 *)D_008B1468) = 2;
        if ((*(s8 *)D_008B144D) == 2) {
            var_a0 = 7;
        } else {
            var_a0 = (s64) (2 << 0x38) >> 0x38;
            (*(s8 *)D_008B144D) = 2;
        }
        func_00852750(var_a0);
        func_00858360(*func_008472D0(), 0);
        if ((*(s8 *)D_003AE983) == 1) {
            func_0085EC80(6, 1, &func_0087DB90, &func_0087DAA0);
            func_00858360(*func_008472D0(), 1 << (((u64) ((s64) (*(u8 *)D_008B14CD) << 0x3E) >> 0x3F) ^ 1));
        } else {
            func_0085EC80(5, 1, &func_0087DB90, &func_0087DAA0);
        }
        func_0087CF30();
        func_00880C60();
        func_0026E840(0x82000000);
        (*(u8 *)D_008B2437) = 0;
        return 1;
    case 0:
        if ((*(s8 *)D_003AE983) == 0) {
            var_a0_2 = 5;
        } else if (func_00BDA160() == 0) {
            var_a0_2 = 7;
        } else {
            var_a0_2 = 6;
        }
        func_0081CB00(func_0081E320(var_a0_2));
        (*(u8 *)D_008B2437) += 1;
        /* fallthrough */
    default:
        return 0;
    }
}
