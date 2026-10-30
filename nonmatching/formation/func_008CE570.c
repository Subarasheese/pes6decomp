/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
extern s32 func_001F3D10(s32, u8);
extern s32 func_002DB830(void *);
s32 func_008B9F20(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_008CE6C0(M2C_UNK);                     /* extern */
M2C_UNK func_008CE7E0(void *, s32, s32, s32, void *); /* extern */

void func_008CE570(void *arg0, s32 arg1) {
    s32 temp_v0;
    s32 var_s0;
    s32 var_s3;
    u8 temp_s5;
    void *temp_s1;

    if (arg1 != 0) {
        if (M2C_FIELD(arg0, u8 *, 0) != 1) {
            func_008CE6C0(0);
        } else {
            func_008CE6C0(2);
        }
        temp_s1 = func_001E6E10(0x4EDC);
        temp_v0 = func_008B9F20(arg1, 3, 0);
        func_001F3D10(temp_v0, 0U);
        M2C_FIELD(arg0, s32 *, 0x1A8) = 0;
        M2C_FIELD(arg0, s32 *, 0x194) = 0;
        M2C_FIELD(arg0, s32 *, 0x1AC) = 0;
        M2C_FIELD(arg0, s32 *, 0x198) = 0;
        M2C_FIELD(arg0, s32 *, 0x1B0) = 0;
        M2C_FIELD(arg0, s32 *, 0x19C) = 0;
        M2C_FIELD(arg0, s32 *, 0x1B4) = 0;
        M2C_FIELD(arg0, s32 *, 0x1A0) = 0;
        M2C_FIELD(arg0, s32 *, 0x1B8) = 0;
        M2C_FIELD(arg0, s32 *, 0x1A4) = 0;
        temp_s5 = M2C_FIELD(arg0, u8 *, 5);
        var_s3 = -(s32) temp_s5;
        var_s0 = func_002DB830(M2C_FIELD(arg0, void **, 0x1D4)) - temp_s5;
        if (var_s3 < (M2C_FIELD(arg0, u8 *, 4) + temp_s5)) {
            do {
                if ((var_s0 >= 0) && (var_s0 < 0x20)) {
                    func_008CE7E0(arg0, temp_v0, var_s3, var_s0, temp_s1);
                }
                var_s3 += 1;
                var_s0 += 1;
            } while (var_s3 < (M2C_FIELD(arg0, u8 *, 4) + M2C_FIELD(arg0, u8 *, 5)));
        }
    }
}
