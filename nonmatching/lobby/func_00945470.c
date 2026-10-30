/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C6158(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
void *func_0082C2A0();                              /* extern */
extern M2C_UNK func_00945410;

s32 func_00945470(void) {
    s32 var_a0;
    s32 var_s0;
    s32 var_s1;
    s32 var_s2;
    s32 var_v1_2;
    s32 var_v1_3;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;
    void *var_v0;
    void *var_v1;
    void *var_v1_4;

    var_s0 = 0;
    temp_v0 = func_0082C2A0();
    if (temp_v0 != NULL) {
        var_a0 = M2C_FIELD(temp_v0, s32 *, 0x117E8);
    } else {
        var_a0 = 0;
    }
    if (var_a0 == 0) {
        return 0;
    }
    func_001C6158(var_a0, 0x64, 0x1D0, &func_00945410);
    var_s1 = 0;
    do {
        temp_v0_2 = func_0082C2A0();
        if (temp_v0_2 != NULL) {
            var_v1 = M2C_FIELD(temp_v0_2, void **, 0x117E8);
        } else {
            var_v1 = NULL;
        }
        if (var_v1 != NULL) {
            var_s2 = M2C_FIELD(var_v1, s32 *, 0xB540);
            if (var_s2 >= 0) {
                if (var_s2 >= 0x65) {
                    var_s2 = 0x64;
                }
            } else {
                var_s2 = 0;
            }
        } else {
            var_s2 = 0;
        }
        temp_v0_3 = func_0082C2A0();
        if (temp_v0_3 != NULL) {
            var_v1_2 = M2C_FIELD(temp_v0_3, s32 *, 0x117E8);
        } else {
            var_v1_2 = 0;
        }
        if (var_v1_2 == 0) {
            var_v0 = NULL;
        } else if (var_s1 < 0) {
            var_v0 = NULL;
        } else if (var_s1 < var_s2) {
            var_v0 = var_v1_2 + (var_s1 * 0x1D0);
        } else {
            var_v0 = NULL;
        }
        if (var_v0 != NULL) {
            var_v1_3 = M2C_FIELD(var_v0, s32 *, 0x14);
        } else {
            var_v1_3 = -1;
        }
        if (var_v1_3 != -1) {
            var_s0 += 1;
        }
        var_s1 += 1;
    } while (var_s1 < 0x64);
    temp_v0_4 = func_0082C2A0();
    if (temp_v0_4 != NULL) {
        var_v1_4 = M2C_FIELD(temp_v0_4, void **, 0x117E8);
    } else {
        var_v1_4 = NULL;
    }
    if (var_v1_4 != NULL) {
        M2C_FIELD(var_v1_4, s32 *, 0xB540) = var_s0;
    }
    return 1;
}
