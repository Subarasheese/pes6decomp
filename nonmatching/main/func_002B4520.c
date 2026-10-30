/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00207BE0(void *);
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
s32 func_00207D10(void *);                          /* extern */
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00209830(void *);                      /* extern */
M2C_UNK func_002B45E0(void *);                      /* extern */

void func_002B4520(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_a0;
    s32 var_s1;

    var_s1 = arg2;
    if ((arg1 & 0xFF) == 2) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        var_s1 = 0;
    }
    func_00209830(arg0);
    temp_a0 = var_s1 & 0xFF;
    switch (temp_a0) {                              /* irregular */
    case 3:
        if (func_00207D10(arg0) != 0) {
            func_00208610(arg0);
            func_00207390(arg0, 4);
            return;
        }
        return;
    case 1:
        func_00207BE0(arg0);
        break;
    case 2:
        func_002B45E0(arg0);
        break;
    }
}
