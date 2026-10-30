/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009A60C0();                            /* extern */
extern void *D_003EA998;
extern char D_00AE1000[];

void func_009A6030(s32 arg0) {
    s32 var_a2;
    void *var_a0;
    void *var_a1;
    void *var_s0;

    var_s0 = D_003EA998;
    if (var_s0 != NULL) {
        func_009A60C0();
        var_a1 = M2C_FIELD(var_s0, void **, 4);
        var_a2 = 0;
        var_a0 = ((void *)D_00AE1000) + (arg0 * 0x28);
        do {
            M2C_FIELD(var_a0, s32 *, 4) = (s32) M2C_FIELD(var_s0, s32 *, 0x10);
            if (var_a1 != NULL) {
                M2C_FIELD(var_a0, s8 *, 0) = (s8) M2C_FIELD(var_a1, s32 *, 0x14);
                var_a1 = M2C_FIELD(var_a1, void **, 4);
            } else {
                M2C_FIELD(var_a0, s8 *, 0) = 0;
            }
            var_a2 += 1;
            var_s0 += 4;
            var_a0 += 8;
        } while (var_a2 < 5);
    }
}
