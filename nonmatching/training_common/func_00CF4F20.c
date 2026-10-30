/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00CF49E0(void);
M2C_UNK func_002F2ED0(s32);                         /* extern */
s32 func_002F3850(s32);                             /* extern */
M2C_UNK func_002F50D0(s32);                         /* extern */
extern s32 D_003EB33C;

s32 func_00CF4F20(void *arg0) {
    s32 temp_a0;

    if (arg0 != NULL) {
        if ((D_003EB33C == 0) && (func_002F3850(M2C_FIELD(arg0, s32 *, 0)) == 2)) {
            func_00CF49E0();
        }
        func_002F2ED0(M2C_FIELD(arg0, s32 *, 0));
        temp_a0 = M2C_FIELD(arg0, s32 *, 0x128);
        if (temp_a0 != 0) {
            func_002F50D0(temp_a0);
        }
        return 1;
    }
    return 0;
}
