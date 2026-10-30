/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern void func_001DF820(void *, s32);
extern char D_00A02FC8[];
extern void *D_00A7DE08;

s32 func_009D3D60(s8 arg0) {
    s32 var_s0;
    s8 var_a1;
    void *temp_v0;

    if (D_00A7DE08 == NULL) {
        return 0;
    }
    M2C_FIELD(D_00A7DE08, s8 *, 1) = arg0;
    var_a1 = arg0 != 0;
    if (M2C_FIELD(D_00A7DE08, u8 *, 4) == 0) {
        var_a1 = 0;
    }
    func_001D7D60(M2C_FIELD(D_00A7DE08, void **, 0x28), var_a1);
    if (arg0 != 0) {
        var_s0 = 0;
        do {
            temp_v0 = M2C_FIELD((D_00A7DE08 + (var_s0 * 0x10)), void **, 0x8C);
            if (temp_v0 != NULL) {
                func_001DF820(M2C_FIELD(temp_v0, void **, 0xC), (s32) ((void *)D_00A02FC8));
            }
            var_s0 += 1;
        } while (var_s0 < 2);
    }
    return 1;
}
