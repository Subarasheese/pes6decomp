/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00150FF0(s32, s32);
extern void func_001ADDA0(s32);
extern void func_00153FA0(void *);
s32 func_001454C0(s32);                             /* extern */
M2C_UNK func_00150DC0(s32, s32);                    /* extern */
M2C_UNK func_001CDAD0(void *);                      /* extern */

void func_001B2B00(void *arg0) {
    s32 temp_s0;
    void *temp_s2;
    void *temp_s3;

    temp_s2 = M2C_FIELD(arg0, void **, 0);
    temp_s3 = M2C_FIELD(arg0, void **, 0x44);
    func_001CDAD0(temp_s3);
    if (*M2C_FIELD(temp_s3, s32 **, 4) != 0) {
        func_00150DC0(func_001454C0(M2C_FIELD(temp_s2, u8 *, 0x66) + 0xFAA), *M2C_FIELD(temp_s3, s32 **, 4));
    }
    if (M2C_FIELD(temp_s2, u8 *, 3) == 0) {
        temp_s0 = (M2C_FIELD(temp_s2, u8 *, 0x35) + 1) * 4;
        if (*(M2C_FIELD(temp_s3, s32 **, 4) + temp_s0) != 0) {
            func_00150FF0(func_001454C0(M2C_FIELD(temp_s2, u8 *, 0x66) + 0xFAF), *(M2C_FIELD(temp_s3, s32 **, 4) + temp_s0));
        }
    }
    func_001ADDA0((s32) M2C_FIELD(temp_s2, u8 *, 0x66));
    func_00153FA0(temp_s3);
}
