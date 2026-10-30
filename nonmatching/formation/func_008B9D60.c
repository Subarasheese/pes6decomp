/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern s32 func_001F2410(void *);
M2C_UNK func_001EE630(void *, s32);                 /* extern */
M2C_UNK func_001EEAC0(void *, s32);                 /* extern */
M2C_UNK func_001EF370(void *, s32);                 /* extern */

void *func_008B9D60(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_v0;

    temp_v0 = func_001F2410(arg0);
    func_001EF900(temp_v0, 1);
    func_001EF370(temp_v0, arg1);
    if (arg2 != 0) {
        func_001EEAC0(temp_v0, arg2);
        func_001EE630(temp_v0, arg3);
    }
    return temp_v0;
}
