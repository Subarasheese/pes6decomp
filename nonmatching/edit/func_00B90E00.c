/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002F3E20(s32, M2C_UNK, s32, s32);      /* extern */
extern char D_00CDF8F0[];

void func_00B90E00(s32 arg0, s32 arg1) {
    s32 temp_s0;

    if (arg1 != 0) {
        temp_s0 = (*(s32 *)D_00CDF8F0);
        func_002F3E20(temp_s0, 1, arg0, arg1);
        func_002F3E20(temp_s0, 0, arg0, arg1);
    }
}
