/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009E9390(void *, s32);
M2C_UNK func_009E9EE0(void *, void *);              /* extern */

void func_009E8420(void *arg0) {
    void *temp_s0;

    temp_s0 = arg0 + 0x10;
    func_009E9EE0(temp_s0, arg0);
    func_009E9390(arg0, M2C_FIELD(temp_s0, s32 *, 0x40));
}
