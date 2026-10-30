/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00C132C0(void *);
M2C_UNK func_00C57220(s32, s32, void *);            /* extern */
M2C_UNK func_00C578F0(s32, void *, void *, M2C_UNK); /* extern */

void func_00C57BC0(s32 arg0, s32 arg1, void *arg2) {
    s32 temp_a0;

    if ((arg0 != 0) && (arg1 != -1) && (arg2 != (void *)-1)) {
        temp_a0 = func_00C132C0(arg2) & 0xFF;
        switch (temp_a0) {                          /* irregular */
        case 5:
            func_00C578F0(arg0, arg2, arg2, 0x3F800000);
            break;
        case 4:
            func_00C578F0(arg0, arg2, arg2, 0x3F800000);
            return;
        case 3:
            func_00C57220(arg0, arg1, arg2);
            return;
        }
    }
}
