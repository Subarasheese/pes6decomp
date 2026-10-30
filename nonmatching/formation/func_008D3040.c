/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001F3CA0(void *);
extern void func_001D6E40(void *);
void func_008D3040(void *arg0) {
    s32 var_s1_2;
    s32 var_s2;
    s32 var_s4;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *var_s1;
    void *var_s2_2;
    void *var_s3;

    if (arg0 != NULL) {
        func_001F3CA0(M2C_FIELD(arg0, void **, 0x18));
        var_s2 = 0;
        var_s1 = arg0;
        do {
            temp_a0 = M2C_FIELD(var_s1, void **, 0x5C);
            if (temp_a0 != NULL) {
                func_001D6E40(temp_a0);
                M2C_FIELD(var_s1, void **, 0x5C) = NULL;
            }
            var_s2 += 1;
            M2C_FIELD(var_s1, s32 *, 0x20) = 0;
            var_s1 += 4;
        } while (var_s2 < 0xA);
        var_s1_2 = 0;
        var_s3 = arg0;
        do {
            var_s4 = 0;
            var_s2_2 = var_s3;
loop_7:
            temp_a0_2 = M2C_FIELD(var_s2_2, void **, 0x84);
            if (temp_a0_2 != NULL) {
                func_001D6E40(temp_a0_2);
                M2C_FIELD(var_s2_2, void **, 0x84) = NULL;
            }
            var_s4 += 1;
            var_s2_2 += 4;
            if (var_s4 < 3) {
                goto loop_7;
            }
            var_s1_2 += 1;
            var_s3 += 0xC;
        } while (var_s1_2 < 4);
        temp_a0_3 = M2C_FIELD(arg0, void **, 0x58);
        if (temp_a0_3 != NULL) {
            func_001D6E40(temp_a0_3);
            M2C_FIELD(arg0, void **, 0x58) = NULL;
        }
    }
}
