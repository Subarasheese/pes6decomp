/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB830(void *);
M2C_UNK func_002DB580(s32, s32);                    /* extern */
M2C_UNK func_002DF8E0(s32, M2C_UNK);                /* extern */
M2C_UNK func_0081D7E0(s32, s64);                    /* extern */
s32 func_0093ADE0(s32);                             /* extern */
M2C_UNK func_0099AEB0(s32, s32);                    /* extern */
extern void *D_00A7DBF8;

void func_009AFC30(s64 arg0) {
    s32 temp_s7;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 var_s0_2;
    s32 var_s1_2;
    s32 var_s4;
    s32 var_v0;
    void *temp_s2;
    void *var_s0;
    void *var_s1;
    void *var_s3;
    void *var_s3_2;
    void *var_s4_2;
    void *var_s6;

    temp_s2 = D_00A7DBF8;
    temp_v1 = M2C_FIELD(temp_s2, s32 *, 0x650);
    temp_s7 = func_002DB830(M2C_FIELD(temp_s2, void **, 0x64C));
    switch (temp_v1) {                              /* irregular */
    case 0:
        func_0081D7E0(M2C_FIELD(temp_s2, s32 *, 4), (s64) (arg0 << 0x38) >> 0x38);
        var_s4 = 0;
        if (M2C_FIELD(temp_s2, s32 *, 0x65C) > 0) {
            var_s3 = temp_s2;
            var_s1 = temp_s2;
            var_s0 = temp_s2;
            do {
                func_0081D7E0(M2C_FIELD(var_s3, s32 *, 0x34), (s64) (arg0 << 0x38) >> 0x38);
                func_0081D7E0(M2C_FIELD(var_s1, s32 *, 0x514), (s64) (arg0 << 0x38) >> 0x38);
                if (func_0093ADE0((M2C_FIELD(temp_s2, s32 *, 0x654) - M2C_FIELD(var_s0, s32 *, 0x6D0)) - 1) != 0) {
                    func_0081D7E0(M2C_FIELD(var_s3, s32 *, 0x64), (s64) (arg0 << 0x38) >> 0x38);
                } else {
                    func_0081D7E0(M2C_FIELD(var_s3, s32 *, 0x64), 0);
                }
                var_s4 += 1;
                var_s3 += 0x34;
                var_s1 += 0xC;
                var_s0 += 4;
            } while (var_s4 < M2C_FIELD(temp_s2, s32 *, 0x65C));
        }
        break;
    case 2:
    case 1:
        var_s1_2 = 0;
        var_s4_2 = temp_s2;
        var_s3_2 = temp_s2;
        var_s6 = temp_s2;
        do {
            if (var_s1_2 < (M2C_FIELD(temp_s2, s32 *, 0x654) + 1)) {
                func_0081D7E0(M2C_FIELD(var_s4_2, s32 *, 0xC), (s64) (arg0 << 0x38) >> 0x38);
                func_0081D7E0(M2C_FIELD(var_s4_2, s32 *, 0x20), 0);
                func_0081D7E0(M2C_FIELD(var_s3_2, s32 *, 0x34), (s64) (arg0 << 0x38) >> 0x38);
                func_0081D7E0(M2C_FIELD(var_s6, s32 *, 0x514), (s64) (arg0 << 0x38) >> 0x38);
                temp_v1_2 = M2C_FIELD(temp_s2, s32 *, 0x654);
                var_v0 = temp_v1_2 - (var_s1_2 + temp_s7);
                var_s0_2 = temp_v1_2 - 1;
                if (var_s0_2 < var_v0) {

                } else {
                    if (var_v0 < 0) {
                        var_v0 = 0;
                    }
                    var_s0_2 = var_v0;
                }
                if ((func_0093ADE0(var_s0_2) != 0) && (var_s0_2 >= 0)) {
                    func_0081D7E0(M2C_FIELD(var_s3_2, s32 *, 0x64), (s64) (arg0 << 0x38) >> 0x38);
                } else {
                    func_0081D7E0(M2C_FIELD(var_s3_2, s32 *, 0x64), 0);
                }
            } else {
                func_0081D7E0(M2C_FIELD(var_s4_2, s32 *, 0xC), 0);
                func_0081D7E0(M2C_FIELD(var_s4_2, s32 *, 0x20), (s64) (arg0 << 0x38) >> 0x38);
                func_0081D7E0(M2C_FIELD(var_s3_2, s32 *, 0x34), 0);
                func_0081D7E0(M2C_FIELD(var_s6, s32 *, 0x514), 0);
                func_0081D7E0(M2C_FIELD(var_s3_2, s32 *, 0x64), 0);
            }
            var_s1_2 += 1;
            var_s4_2 += 4;
            var_s3_2 += 0x34;
            var_s6 += 0xC;
        } while (var_s1_2 < 5);
        func_0081D7E0(M2C_FIELD(temp_s2, s32 *, 4), 0);
        if (M2C_FIELD(D_00A7DBF8, s32 *, 0x654) == 0) {
            func_002DF8E0(M2C_FIELD(D_00A7DBF8, s32 *, 0x634), 0);
        } else {
            func_002DF8E0(M2C_FIELD(D_00A7DBF8, s32 *, 0x634), 1);
        }
        break;
    }
    func_0099AEB0(M2C_FIELD(temp_s2, s32 *, 0x648), arg0 & 0xFF);
    func_002DB580(M2C_FIELD(temp_s2, s32 *, 0x64C), arg0 & 0xFF);
}
