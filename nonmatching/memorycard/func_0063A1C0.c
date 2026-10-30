/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
M2C_UNK func_001EE890(s32, s32);                    /* extern */
M2C_UNK func_001EEAC0(s32, void *);                 /* extern */
M2C_UNK func_001EF370(s32, s32);                    /* extern */

void func_0063A1C0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_a1;

    temp_a1 = func_001E6E10(arg1);
    if ((arg0 != 0) && (temp_a1 != NULL) && (arg2 != 0) && (arg3 != 0)) {
        func_001EEAC0(arg0, temp_a1);
        func_001EE890(arg0, arg2);
        func_001EF370(arg0, arg3);
    }
}
