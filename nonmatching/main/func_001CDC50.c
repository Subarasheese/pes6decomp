/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001CDE40();                            /* extern */
M2C_UNK func_001CDF60();                            /* extern */
s8 func_001CE320(M2C_UNK *, s32);                   /* extern */
M2C_UNK func_001CE550(M2C_UNK *, s32);              /* extern */
extern char D_0052A2C0[];
extern char D_0052AAC0[];
extern char D_0052AAC4[];
extern char D_0052AAC8[];
extern char D_0052AACC[];
extern char D_0052AAD0[];
extern char D_0052AAD4[];

void func_001CDC50(s32 arg0, s32 arg1, s32 arg2, void *arg3) {
    M2C_UNK *var_s1;
    s32 temp_s0;
    s32 var_s2;
    s32 var_s3;
    s8 *var_s4;

    if ((arg0 != 0) && (arg1 != 0) && (arg2 != 0) && (arg3 != NULL)) {
        (*(s32 *)D_0052AAC0) = arg0;
        (*(s32 *)D_0052AAC4) = arg1;
        (*(s32 *)D_0052AAC8) = arg2;
        (*(s32 *)D_0052AACC) = M2C_FIELD(arg3, s16 *, 0) * M2C_FIELD(arg3, s16 *, 2);
        func_001CDF60();
        temp_s0 = (*(s32 *)D_0052AAC8);
        var_s3 = 0;
        if ((*(s32 *)D_0052AAD0) > 0) {
            var_s1 = ((void *)D_0052A2C0);
            do {
                var_s2 = 0;
                var_s4 = temp_s0 + ((var_s3 + (*(u8 *)D_0052AAD4)) * 4);
loop_7:
                func_001CE550(var_s1, var_s2);
                *var_s4 = func_001CE320(var_s1, var_s2);
                var_s2 += 1;
                var_s4 += 1;
                if (var_s2 < 4) {
                    goto loop_7;
                }
                var_s3 += 1;
                var_s1 += 8;
            } while (var_s3 < (*(s32 *)D_0052AAD0));
        }
        func_001CDE40();
    }
}
