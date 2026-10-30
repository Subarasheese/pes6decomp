/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00986190(s32);                         /* extern */
s32 func_0099C7E0(M2C_UNK);                         /* extern */
extern char D_00A7D758[];

void func_00986C60(s32 arg0) {
    s32 temp_v0;

    if ((*(s32 *)D_00A7D758) == 0) {
        temp_v0 = func_0099C7E0(0x2C);
        (*(s32 *)D_00A7D758) = temp_v0;
        if (temp_v0 != 0) {
            func_00986190(arg0);
        }
    }
}
