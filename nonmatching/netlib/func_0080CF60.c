/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00221230(s32);
extern int func_002211C0(int, int, int, int);
extern int func_002DCA50(void);
void func_0080CF60(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s0;
    u8 temp_v1;
    void *temp_v0;
    void *temp_v0_2;

    temp_v0 = func_002211C0(arg0, arg1, arg2, arg3);
    temp_v1 = M2C_FIELD(temp_v0, u8 *, 5);
    if ((temp_v1 == 4) || (temp_v1 == 0xC) || ((s32) temp_v1 >= 0xD)) {
        M2C_FIELD(temp_v0, u8 *, 5) = 2U;
    }
    if (M2C_FIELD(temp_v0, u8 *, 7) != 8) {
        if (func_002DCA50() == 0) {
            M2C_FIELD(temp_v0, u8 *, 7) = 1U;
        } else {
            M2C_FIELD(temp_v0, u8 *, 7) = 0U;
        }
    }
    var_s0 = 0;
    do {
        temp_v0_2 = func_00221230(var_s0);
        if (M2C_FIELD(temp_v0_2, u8 *, 0) == 0) {
            M2C_FIELD(temp_v0_2, u8 *, 0) = 6U;
        }
        if (M2C_FIELD(temp_v0_2, s8 *, 2) == 0) {
            M2C_FIELD(temp_v0_2, s8 *, 2) = 1;
        }
        var_s0 += 1;
    } while (var_s0 < 8);
}
