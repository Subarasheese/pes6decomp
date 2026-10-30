/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F23E0(void *, void *);
extern void func_001F22B0(void *);
extern void func_001F1990(void *);
void func_008E4D50(void *arg0) {
    s32 var_a0;
    s32 var_s3;
    s32 var_s4;
    void *temp_a0;
    void *var_a1;
    void *var_s0;
    void *var_s1;
    void *var_s2;

    if (M2C_FIELD(arg0, void **, 0x700) != NULL) {
        var_s4 = 0;
        var_s2 = arg0;
        var_s1 = arg0;
        do {
            func_001F23E0(M2C_FIELD(arg0, void **, 0x700), M2C_FIELD(var_s2, void **, 0x704));
            M2C_FIELD(var_s2, void **, 0x704) = NULL;
            func_001F1990(M2C_FIELD(var_s2, void **, 0x8C0));
            M2C_FIELD(var_s2, void **, 0x8C0) = NULL;
            func_001F23E0(M2C_FIELD(arg0, void **, 0x700), M2C_FIELD(var_s2, void **, 0x8EC));
            M2C_FIELD(var_s2, void **, 0x8EC) = NULL;
            var_s3 = 0;
            var_s0 = var_s1;
loop_3:
            func_001F23E0(M2C_FIELD(arg0, void **, 0x700), M2C_FIELD(var_s0, void **, 0x730));
            var_s3 += 1;
            M2C_FIELD(var_s0, void **, 0x730) = NULL;
            var_s0 += 4;
            if (var_s3 < 8) {
                goto loop_3;
            }
            var_s4 += 1;
            var_s2 += 4;
            var_s1 += 0x20;
        } while (var_s4 < 0xB);
    }
    temp_a0 = M2C_FIELD(arg0, void **, 0x6CC);
    if (temp_a0 != NULL) {
        func_001F22B0(temp_a0);
        M2C_FIELD(arg0, void **, 0x6CC) = NULL;
        var_a0 = 0;
        var_a1 = arg0;
        do {
            M2C_FIELD(var_a1, s32 *, 0x6D0) = 0;
            var_a0 += 5;
            M2C_FIELD(var_a1, s32 *, 0x6D4) = 0;
            M2C_FIELD(var_a1, s32 *, 0x6D8) = 0;
            M2C_FIELD(var_a1, s32 *, 0x6DC) = 0;
            M2C_FIELD(var_a1, s32 *, 0x6E0) = 0;
            var_a1 += 0x14;
        } while (var_a0 < 6);
        M2C_FIELD(((var_a0 * 4) + arg0), s32 *, 0x6D0) = 0;
    }
}
