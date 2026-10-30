/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001343A0(void);
extern s32 func_00123488(void);
extern s32 func_00135D70(void);
extern s32 func_00135D48(void);
s32 func_00123468();                                /* extern */
s32 func_0012D900();                                /* extern */
s32 func_0012FC88();                                /* extern */

void func_00123630(void) {
    s32 temp_s0;
    s32 temp_s0_2;

    if (func_001343A0() == 0) {
        if (func_00135D48() & 0x10) {
            func_00135D70();
        }
        temp_s0 = func_0012FC88() == 0;
        if (temp_s0 != 0) {
            temp_s0_2 = (func_0012D900() != 0) ? 0 : temp_s0;
            if ((temp_s0_2 != 0) && (((func_00123468() != 0) ? 0 : temp_s0_2) != 0)) {
                func_00123488();
            }
        }
    }
}
