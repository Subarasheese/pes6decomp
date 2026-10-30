/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_0080A710();                            /* extern */
M2C_UNK func_0080A780();                            /* extern */
M2C_UNK func_0080AA20(M2C_UNK, s32, M2C_UNK);       /* extern */
s16 *func_008472D0();                               /* extern */
M2C_UNK func_0084CC80(u16);                         /* extern */
M2C_UNK func_0084CDD0(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s64 func_00858C20(s32);                             /* extern */
extern char D_008B13E0[];
extern char D_008B1468[];
extern char D_008B1470[];
extern char D_008B14E2[];

void func_00808970(void *arg0) {
    M2C_UNK *var_s2;
    s16 temp_s1;
    s32 var_s3;
    s64 temp_s1_2;
    u8 temp_v1;

    temp_s1 = M2C_FIELD(arg0, s16 *, 4);
    if (temp_s1 == *func_008472D0()) {
        func_0084CDD0(0, -1, ((void *)D_008B14E2));
        if (((*(u16 *)D_008B1470) != 3) && ((*(u16 *)D_008B1470) != 2)) {

        } else {
            func_0084CC80((*(u16 *)D_008B1470));
        }
        (*(s8 *)D_008B1468) = 5;
        temp_v1 = M2C_FIELD(arg0, u8 *, 2);
        switch (temp_v1) {                          /* irregular */
        case 1:
            func_0080A780();
            break;
        case 2:
            func_0080A710();
            break;
        }
        var_s3 = 0;
        var_s2 = ((void *)D_008B13E0);
        do {
            M2C_FIELD(var_s2, s8 *, 0x8D) = 0;
            temp_s1_2 = (s64) (func_00858C20(var_s3) << 0x30) >> 0x30;
            if (temp_s1_2 == *func_008472D0()) {
                func_0080AA20(-3, var_s3, 4);
            }
            var_s3 += 1;
            var_s2 += 1;
        } while (var_s3 < 2);
    }
    M2C_FIELD(arg0, s8 *, 3) = 1;
}
