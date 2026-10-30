/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001657E8(void *);
extern void func_00165778(void *);
extern void func_001659F8(void *);
void func_00161D80(void *arg0) {
    s32 sp4;
    s32 sp8;
    void *temp_a0;
    void *temp_s0;
    void *var_v1;

    var_v1 = arg0 + 0x840;
    if (M2C_FIELD(arg0, s32 *, 0x854) != 0) {
        temp_a0 = var_v1;
loop_2:
        temp_s0 = M2C_FIELD(var_v1, void **, 8);
        if (temp_s0 != temp_a0) {
            var_v1 = temp_s0;
            if (M2C_FIELD(temp_s0, s32 *, 0) != 0) {
                func_001657E8(M2C_FIELD(temp_s0, void **, 0x10));
                func_001659F8(M2C_FIELD(temp_s0, void **, 0x10));
                func_00165778(arg0);
            } else {
                goto loop_2;
            }
        }
    }
}
