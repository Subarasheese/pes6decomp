/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001ECBF0(void *);
extern int func_00145480(void *);
extern void func_001E6310(s32, s32);
M2C_UNK func_00103538(s32, M2C_UNK);                /* extern */
s64 func_00138C10(s32, s32);                        /* extern */
M2C_UNK func_001E6360(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_001ECC80(s32, void *);                 /* extern */

void func_001ECAA0(void *arg0) {
    s32 temp_s3;
    s32 temp_v1;
    u8 temp_v1_2;
    void *temp_s0;
    void *var_s1;
    void *var_s2;

    temp_s3 = M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x1C);
    if ((arg0 != NULL) && (M2C_FIELD(arg0, u16 *, 0x34) != 0) && (func_001ECBF0(arg0) != 0)) {
        temp_v1 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_v1 & 1) {
            var_s1 = NULL;
            if (temp_v1 == 1) {
                goto block_5;
            }
            if (temp_v1 == 3) {
block_5:
                var_s2 = M2C_FIELD(arg0, void **, 0);
                do {
                    if ((M2C_FIELD(var_s2, u8 *, 0x11C) != 0) && !(((s32) M2C_FIELD(var_s2, u8 *, 0x11D) >> 1) & 1)) {
                        temp_s0 = M2C_FIELD(var_s2, void **, 0xD0);
                        temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 0x19);
                        if ((temp_v1_2 != 1) && (temp_v1_2 != 2) && (var_s1 != temp_s0)) {
                            var_s1 = temp_s0;
                            M2C_FIELD(temp_s0, s64 *, 0x10) = func_00138C10(temp_s3, func_00145480(M2C_FIELD(temp_s0, void **, 8)));
                        }
                    }
                    var_s2 = M2C_FIELD(var_s2, void **, 8);
                } while (var_s2 != NULL);
            }
            func_00103538(temp_s3, 0);
        }
        func_001E6360(temp_s3, M2C_FIELD(arg0, s32 *, 0x10), 1);
        func_001ECC80(temp_s3, arg0);
        func_001E6310(temp_s3, M2C_FIELD(arg0, s32 *, 0x10));
    }
}
