/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

s32 func_0081BC80(void *arg0) {
    s32 var_s0;
    void *var_s2;

    if (arg0 == NULL) {
        return 0;
    }
    if (arg0 != NULL) {
        var_s0 = 0;
        do {
            if (arg0 == NULL) {
                var_s2 = NULL;
            } else if (var_s0 < 0) {
                var_s2 = NULL;
            } else if (var_s0 < 4) {
                var_s2 = arg0 + (var_s0 * 0x74) + 4;
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
            var_s0 += 1;
        } while (var_s0 < 4);
    }
    func_001C48E8(arg0, 0, 0x2E4);
    return 1;
}
