/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF820(void *, s32);
extern char D_00A02FC8[];
extern void *D_00A7DE08;

s32 func_009D3AE0(s32 arg0, s32 arg1, s8 *arg2) {
    s32 var_a1;
    s8 *var_a2;
    void *temp_v1;

    var_a1 = arg1;
    var_a2 = arg2;
    if (D_00A7DE08 == NULL) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 2) {
        if (M2C_FIELD(D_00A7DE08, u8 *, 1) != 0) {
            var_a1 += 1;
        }
        if (var_a1 < 0) {
            return 0;
        }
        if (var_a1 < 4) {
            temp_v1 = M2C_FIELD(((var_a1 * 4) + ((arg0 * 0x10) + D_00A7DE08)), void **, 0x8C);
            if (temp_v1 == NULL) {
                return 0;
            }
            if ((var_a2 == NULL) || (*var_a2 == 0)) {
                var_a2 = ((void *)D_00A02FC8);
            }
            func_001DF820(M2C_FIELD(temp_v1, void **, 0xC), (s32) var_a2);
            return 1;
        }
        return 0;
    }
    return 0;
}
