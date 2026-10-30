/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001E6C50(void *);
void *func_001E6E10(s32, u8);                       /* extern */
extern char D_0061ED60[];

void func_00366350(M2C_UNK arg0, u8 arg1) {
    M2C_UNK *var_s0;
    s32 var_s1;
    u8 var_a1;
    void *temp_v0;

    var_a1 = arg1;
    var_s1 = 0;
    var_s0 = ((void *)D_0061ED60);
    do {
        if (M2C_FIELD(var_s0, u8 *, 4) & 1) {
            temp_v0 = func_001E6E10(M2C_FIELD(var_s0, s32 *, 0x10), var_a1);
            if (temp_v0 != NULL) {
                func_001E6C50(temp_v0);
            }
            var_a1 = M2C_FIELD(var_s0, u8 *, 4);
            M2C_FIELD(var_s0, u8 *, 4) = (u8) ((var_a1 & ~1) | (0 & 1));
        }
        var_s1 += 1;
        var_s0 += 0x10;
    } while (var_s1 < 0x14);
}
