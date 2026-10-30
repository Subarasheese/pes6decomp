/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB830(void *);
M2C_UNK func_002DB580(s32, s32);                    /* extern */
M2C_UNK func_0081D7E0(s32, s64);                    /* extern */
s32 func_0093C960(s32);                             /* extern */
M2C_UNK func_0099AEB0(s32, s32);                    /* extern */
M2C_UNK func_0099D2A0(s32, s64);                    /* extern */
M2C_UNK func_0099D550(s32, s64);                    /* extern */
extern void *D_003EAD1C;

void func_009B40A0(s64 arg0) {
    s32 temp_s2;
    s32 var_s1;
    s32 var_s5;
    s32 var_v0;
    void *temp_s3;
    void *var_s4;

    temp_s3 = D_003EAD1C;
    temp_s2 = func_002DB830(M2C_FIELD(temp_s3, void **, 0x1A8));
    func_0081D7E0(M2C_FIELD(temp_s3, s32 *, 8), (s64) (arg0 << 0x38) >> 0x38);
    var_s5 = 0;
    var_s4 = temp_s3;
    do {
        var_s1 = M2C_FIELD(temp_s3, s32 *, 0x1AC);
        if (var_s1 >= var_s5) {
            var_v0 = var_s5 - 1 + temp_s2;
            if (var_s1 < var_v0) {

            } else {
                if (var_v0 < 0) {
                    var_v0 = 0;
                }
                var_s1 = var_v0;
            }
            func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x30), (s64) (arg0 << 0x38) >> 0x38);
            func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x34), 0);
            if (func_0093C960(var_s1) != 0) {
                func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x4C), (s64) (arg0 << 0x38) >> 0x38);
            } else {
                func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x4C), 0);
            }
            if (M2C_FIELD(temp_s3, s32 *, 0x1C4) == 1) {
                func_0099D550(M2C_FIELD(var_s4, s32 *, 0x44), (s64) (arg0 << 0x38) >> 0x38);
            } else {
                func_0099D550(M2C_FIELD(var_s4, s32 *, 0x44), 0);
            }
            func_0099D2A0(M2C_FIELD(var_s4, s32 *, 0x48), (s64) (arg0 << 0x38) >> 0x38);
        } else {
            func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x30), 0);
            func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x34), (s64) (arg0 << 0x38) >> 0x38);
            func_0081D7E0(M2C_FIELD(var_s4, s32 *, 0x4C), 0);
            func_0099D550(M2C_FIELD(var_s4, s32 *, 0x44), 0);
            func_0099D2A0(M2C_FIELD(var_s4, s32 *, 0x48), 0);
        }
        var_s5 += 1;
        var_s4 += 0x20;
    } while (var_s5 < 0xB);
    func_0099AEB0(M2C_FIELD(temp_s3, s32 *, 0x1A4), arg0 & 0xFF);
    func_002DB580(M2C_FIELD(temp_s3, s32 *, 0x1A8), arg0 & 0xFF);
    M2C_FIELD(temp_s3, s32 *, 0x1C8) = (s32) arg0;
}
