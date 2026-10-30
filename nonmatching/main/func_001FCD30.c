/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00153FA0(s32);                         /* extern */
s32 func_00154070(s32);                             /* extern */
M2C_UNK func_001C4730(s32, s32, s32);               /* extern */
extern char D_00533038[];
extern char D_0053303C[];

void func_001FCD30(s32 arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_v0;

    if ((arg0 != 0) && (arg1 != 0)) {
        if ((*(s32 *)D_00533038) != 0) {
            func_00153FA0((*(s32 *)D_00533038));
        }
        temp_s0 = arg1 * 8;
        temp_v0 = func_00154070(temp_s0);
        (*(s32 *)D_00533038) = temp_v0;
        func_001C4730(temp_v0, arg0, temp_s0);
        (*(s32 *)D_0053303C) = arg1;
        return;
    }
    if ((*(s32 *)D_00533038) != 0) {
        func_00153FA0((*(s32 *)D_00533038));
        (*(s32 *)D_00533038) = 0;
        (*(s32 *)D_0053303C) = 0;
    }
}
