/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B05E0(s32, s32);
extern void func_00153FA0(void *);
M2C_UNK func_0017B070(s32);                         /* extern */
M2C_UNK func_0017C3B0(s32);                         /* extern */
extern void *D_003E9894;

void func_001A5900(void) {
    s32 temp_s2;
    void *temp_s0;
    void *var_s1;
    void *var_v0;
    void *var_v1;

    var_s1 = D_003E9894;
    if (var_s1 != NULL) {
        do {
            temp_s2 = M2C_FIELD(var_s1, s32 *, 0x10);
            temp_s0 = M2C_FIELD(var_s1, void **, 0x24);
            if (M2C_FIELD(var_s1, u8 *, 1) != 2) {

            } else {
                func_0017B070(temp_s2);
                func_0017C3B0(temp_s2);
                M2C_FIELD(var_s1, s32 *, 0x10) = 0;
            }
            M2C_FIELD(var_s1, s32 *, 0x28) = 0;
            M2C_FIELD(var_s1, u8 *, 1) = 0U;
            if (M2C_FIELD(var_s1, s32 *, 8) == 1) {
                func_001B05E0((s32) var_s1, 0);
            } else {
                func_001B05E0((s32) var_s1, 1);
                M2C_FIELD(var_s1, s8 *, 6) = 0;
                var_v1 = D_003E9894;
                if (var_v1 != var_s1) {
                    var_v0 = M2C_FIELD(var_v1, void **, 0x24);
                    if (var_v0 != var_s1) {
                        do {
                            var_v1 = var_v0;
                            var_v0 = M2C_FIELD(var_v0, void **, 0x24);
                        } while (var_v0 != var_s1);
                    }
                    M2C_FIELD(var_v1, void **, 0x24) = (void *) M2C_FIELD(var_s1, void **, 0x24);
                    M2C_FIELD(var_s1, void **, 0x24) = NULL;
                } else {
                    D_003E9894 = M2C_FIELD(var_s1, void **, 0x24);
                    M2C_FIELD(var_s1, void **, 0x24) = NULL;
                }
                func_00153FA0(var_s1);
            }
            var_s1 = temp_s0;
        } while (temp_s0 != NULL);
    }
}
