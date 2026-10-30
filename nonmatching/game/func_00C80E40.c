/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F9370(void *);
M2C_UNK func_002F9F20(s32, s32, M2C_UNK, s32, s32, s32); /* extern */
extern void *D_00CCC130;
extern char D_00CCC1A8[];

void func_00C80E40(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s32 temp_s0;

    temp_s0 = (*(s32 *)D_00CCC1A8);
    func_002F9F20(arg0, temp_s0, 0, func_002F9370(D_00CCC130), arg2, arg3);
}
