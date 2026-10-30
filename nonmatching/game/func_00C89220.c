/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001DF7B0(s32);                         /* extern */
extern char D_00CCD048[];

void func_00C89220(s32 arg0) {
    s32 *temp_s0;

    if (arg0 < 3) {
        temp_s0 = ((void *)D_00CCD048) + (arg0 * 4);
        func_001DF7B0(*temp_s0);
        *temp_s0 = 0;
    }
}
