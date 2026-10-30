/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BCA8C0(void *);
extern char D_00CE4F40[];

void func_00BC86E0(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;

    temp_v1 = M2C_FIELD((((void *)D_00CE4F40) + (arg0 * 0xC0)), s32 *, 4);
    if (temp_v1 == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = temp_v1 % 23;
    }
    func_00BCA8C0((void *) var_a0);
}
