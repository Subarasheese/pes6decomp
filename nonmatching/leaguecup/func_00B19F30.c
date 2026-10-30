/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00B19B50();                            /* extern */
M2C_UNK func_00B19C20(s32);                         /* extern */
M2C_UNK func_00B19D80(s32);                         /* extern */
M2C_UNK func_00B19DF0(s32);                         /* extern */
M2C_UNK func_00B19EC0(s32);                         /* extern */

void func_00B19F30(void *arg0) {
    s32 temp_a1;

    if (arg0 != NULL) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x38);
        switch (temp_a1) {                          /* irregular */
        case 4:
        case 0:
            func_00B19EC0(temp_a1);
            break;
        case 1:
            func_00B19DF0(temp_a1);
            break;
        case 2:
            func_00B19D80(temp_a1);
            break;
        case 3:
            func_00B19C20(temp_a1);
            break;
        }
        func_00B19B50();
    }
}
