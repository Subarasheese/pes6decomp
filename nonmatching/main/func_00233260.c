/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00231240(void);
extern void * func_00229460(void);
extern s32 func_00228ED0(s32, s32);
u8 *func_00232510(void *, s32, s32);                /* extern */

s32 func_00233260(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_s1;
    u8 var_v0;
    void *temp_v0;

    temp_v0 = func_00229460();
    if (temp_v0 != NULL) {
        temp_s1 = func_00228ED0(arg1, arg2) & 0xFF;
        if (func_00231240() != 1) {
            var_v0 = *func_00232510(temp_v0 + 0x3CD6, temp_s1, arg0);
        } else {
            var_v0 = 0;
        }
        return var_v0 & 0xFF;
    }
    return 0;
}
