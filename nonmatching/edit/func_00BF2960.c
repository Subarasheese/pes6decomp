/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s8 func_00BECA10(void);
extern void func_001D7D60(void *, s8);
extern void func_001D7D80(void *, s16);
void func_00BF2960(void *arg0) {
    s16 var_a1;
    s32 var_s1;
    s64 temp_v1;

    temp_v1 = (s64) (func_00BECA10() << 0x38) >> 0x38;
    switch (temp_v1) {                              /* irregular */
    case 7:
        var_s1 = 1;
        var_a1 = 2;
        break;
    case 6:
        var_s1 = 1;
        var_a1 = 1;
        break;
    case 5:
        var_s1 = 1;
block_13:
        var_a1 = 0;
        break;
    default:
        var_s1 = 0;
        goto block_13;
    }
    func_001D7D80(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), var_a1);
    func_001D7D60(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 4), var_s1 & 0xFF);
}
