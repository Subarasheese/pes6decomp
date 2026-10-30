/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EEE60(void *, void *);
M2C_UNK func_00C74BF0(void *, s32);                 /* extern */
extern char D_003AB520[];

void func_008FD2C0(void *arg0, s32 arg1) {
    if (arg0 != NULL) {
        func_001EEE60(M2C_FIELD(arg0, void **, 0x18), ((void *)D_003AB520) + (arg1 * 4));
        func_00C74BF0(arg0 + 8, arg1);
    }
}
