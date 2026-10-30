/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDBA0(void *, void *);
M2C_UNK func_001EDD90(void *);                      /* extern */
M2C_UNK func_0063A580(s32);                         /* extern */

void func_006302F0(void *arg0, void *arg1, void *arg2) {
    s32 var_s2;
    void *temp_a1;
    void *var_s1;

    if (arg1 != NULL) {
        if (arg2 == NULL) {
            return;
        }
        if (((M2C_FIELD(arg2, u8 *, 0xC) == 0) || (arg0 == NULL) || (M2C_FIELD(arg0, u8 *, 0xC) != 2)) && (M2C_FIELD(arg1, void **, 0x1C4) != NULL)) {
            var_s2 = 0;
            var_s1 = arg1;
            do {
                temp_a1 = M2C_FIELD(var_s1, void **, 0x1C8);
                if (temp_a1 != NULL) {
                    func_001EDBA0(M2C_FIELD(arg1, void **, 0x1C4), temp_a1);
                    M2C_FIELD(var_s1, void **, 0x1C8) = NULL;
                }
                func_0063A580(var_s2 + 0x734B);
                var_s2 += 1;
                var_s1 += 4;
            } while (var_s2 < 0xA);
            func_001EDD90(M2C_FIELD(arg1, void **, 0x1C4));
            M2C_FIELD(arg1, void **, 0x1C4) = NULL;
        }
    }
}
