/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002E5A30(int);
extern void func_001F1EA0(void *);
extern void func_00153FA0(void *);
void func_002E4F00(void *arg0) {
    s32 var_a0;
    s32 var_a0_2;
    s32 var_s0;

    if (arg0 != NULL) {
        var_s0 = 0;
        if (M2C_FIELD(arg0, s16 *, 0x1C) > 0) {
            do {
                if (arg0 == NULL) {
                    var_a0 = 0;
                } else {
                    var_a0_2 = M2C_FIELD(arg0, s16 *, 0x1C) - 1;
                    if (var_a0_2 < var_s0) {

                    } else if (var_s0 >= 0) {
                        var_a0_2 = var_s0;
                    } else {
                        var_a0_2 = 0;
                    }
                    var_a0 = M2C_FIELD(arg0, void **, 0x20) + (var_a0_2 * 0x50);
                }
                func_002E5A30(var_a0);
                var_s0 += 1;
            } while (var_s0 < M2C_FIELD(arg0, s16 *, 0x1C));
        }
        func_00153FA0(M2C_FIELD(arg0, void **, 0x20));
        func_001F1EA0(M2C_FIELD(arg0, void **, 0x18));
        func_00153FA0(arg0);
    }
}
