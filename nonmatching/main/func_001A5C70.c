/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0014AAB0(void *, s32);                     /* extern */
M2C_UNK func_001A5FF0(s64, s32);                    /* extern */
M2C_UNK func_001C47E0(s32, void *, s32);            /* extern */
M2C_UNK func_001CDAD0(s32);                         /* extern */
M2C_UNK func_002CB8C0(void *);                      /* extern */
s32 func_002CBC80(M2C_UNK);                         /* extern */
extern void *D_003AFD40;
extern M2C_UNK (*D_003E9898)(u8);

void func_001A5C70(void) {
    s32 var_s2;
    s64 temp_s3_2;
    void *temp_a0;
    void *temp_s0;
    void *temp_s1;
    void *temp_s3;

    temp_s1 = D_003AFD40 + 0x78;
    temp_s0 = D_003AFD40 + 0x90;
    if (M2C_FIELD(D_003AFD40, s32 *, 0x98) != 0) {
        temp_a0 = M2C_FIELD(temp_s1, void **, 8);
        if (temp_a0 != NULL) {
            func_002CB8C0(temp_a0);
        }
        temp_s3 = M2C_FIELD(temp_s0, void **, 8);
        var_s2 = func_002CBC80(0xB);
        if (M2C_FIELD(temp_s3, u8 *, 2) != 0) {
            var_s2 = func_0014AAB0(temp_s3, var_s2);
            func_002CB8C0(temp_s3);
        } else {
            func_001C47E0(var_s2, temp_s3 + 0x20, M2C_FIELD(temp_s3, s32 *, 4));
        }
        temp_s3_2 = (s64) ((s64) temp_s1 << 0x20) >> 0x20;
        func_001CDAD0(var_s2);
        func_001A5FF0(temp_s3_2, var_s2);
        M2C_FIELD(temp_s3_2, s32 *, 8) = var_s2;
        if (D_003E9898 != NULL) {
            D_003E9898(M2C_FIELD(temp_s3_2, u8 *, 0));
        }
        M2C_FIELD(((s64) ((s64) temp_s1 << 0x20) >> 0x20), s32 *, 4) = (s32) M2C_FIELD(temp_s0, s32 *, 4);
        func_002CB8C0(M2C_FIELD(temp_s0, void **, 8));
        M2C_FIELD(temp_s0, void **, 8) = NULL;
    }
}
