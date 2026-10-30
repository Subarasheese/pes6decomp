/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00159E88(void);
extern void func_00159EA0(void);
s32 func_00162958(void *arg0, s32 arg1) {
    func_00159E88();
    if (arg1 <= 0) {
        M2C_FIELD(arg0, s32 *, 0xA4) = (s32) (M2C_FIELD(arg0, s32 *, 0xA4) - arg1);
    } else {
        M2C_FIELD(arg0, s32 *, 0xA0) = (s32) (M2C_FIELD(arg0, s32 *, 0xA0) + arg1);
    }
    func_00159EA0();
    return arg1;
}
