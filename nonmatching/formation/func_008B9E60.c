/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEE60(void *, void *);
extern s32 func_001F2410(void *);
extern void func_001EF900(void *, s8);
M2C_UNK func_001EF370(void *, s32);                 /* extern */

void *func_008B9E60(void *arg0, s32 arg1, void *arg2) {
    void *temp_v0;

    temp_v0 = func_001F2410(arg0);
    func_001EF900(temp_v0, 1);
    func_001EF370(temp_v0, arg1);
    func_001EEE60(temp_v0, arg2);
    return temp_v0;
}
