/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008FAA38(void *);
M2C_UNK func_008FAA70(void *, s32);                 /* extern */

void func_008FABD8(void *arg0) {
    s32 temp_a1;

    func_008FAA38(arg0);
    temp_a1 = -(*(s32 *)0x10002020 & 7) & 7;
    if (temp_a1 != 0) {
        func_008FAA70(arg0, temp_a1);
    }
}
