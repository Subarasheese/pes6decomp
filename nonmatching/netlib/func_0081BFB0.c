/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_0081BDA0(void *, s32);                     /* extern */

void *func_0081BFB0(s32 arg0, void *arg1) {
    s32 var_s0;
    s32 var_s0_2;
    void *temp_v1;
    void *var_a0;
    void *var_s2;

    if (arg1 == NULL) {
        goto block_40;
    }
    func_001C48E8(arg1, 0, 0x2E4);
    M2C_FIELD(arg1, s32 *, 0) = 0;
    var_s0 = 0;
    M2C_FIELD(arg1, s32 *, 0x204) = 0;
    do {
        if (arg1 == NULL) {
            var_a0 = NULL;
        } else if (var_s0 < 0) {
            var_a0 = NULL;
        } else if (var_s0 < 4) {
            var_a0 = arg1 + (var_s0 * 0x74) + 4;
        } else {
            var_a0 = NULL;
        }
        func_001C48E8(var_a0, 0, 0x74);
        temp_v1 = arg1 + (var_s0 * 8);
        M2C_FIELD(temp_v1, s32 *, 0x1D4) = 0;
        M2C_FIELD(temp_v1, s32 *, 0x1D8) = 0;
        func_001C48E8(arg1 + (var_s0 * 0x34) + 0x209, 0, 0x34);
        var_s0 += 1;
    } while (var_s0 < 4);
    M2C_FIELD(arg1, s32 *, 0x2DC) = 0;
    M2C_FIELD(arg1, s32 *, 0x2E0) = 1;
    if (func_0081BDA0(arg1, arg0) != 0) {
        return arg1;
    }
    if (arg1 != NULL) {
        if (arg1 != NULL) {
            var_s0_2 = 0;
            do {
                if (arg1 == NULL) {
                    var_s2 = NULL;
                } else if (var_s0_2 < 0) {
                    var_s2 = NULL;
                } else if (var_s0_2 < 4) {
                    var_s2 = arg1 + (var_s0_2 * 0x74) + 4;
                } else {
                    var_s2 = NULL;
                }
                if (var_s2 != NULL) {
                    if (var_s2 != NULL) {
                        if (var_s2 != NULL) {
                            M2C_FIELD(var_s2, s8 *, 0x26) = 0;
                            M2C_FIELD(var_s2, s8 *, 0x27) = 0;
                        }
                        if (var_s2 != NULL) {
                            M2C_FIELD(var_s2, s8 *, 0x25) = 1;
                            M2C_FIELD(var_s2, s32 *, 0) = 0;
                        }
                        func_001D7F10(M2C_FIELD(var_s2, void **, 0xC));
                        M2C_FIELD(var_s2, void **, 0xC) = NULL;
                        func_001D7F10(M2C_FIELD(var_s2, void **, 8));
                        M2C_FIELD(var_s2, void **, 8) = NULL;
                    }
                    func_001C48E8(var_s2, 0, 0x74);
                }
                var_s0_2 += 1;
            } while (var_s0_2 < 4);
        }
        func_001C48E8(arg1, 0, 0x2E4);
    }
block_40:
    return NULL;
}
