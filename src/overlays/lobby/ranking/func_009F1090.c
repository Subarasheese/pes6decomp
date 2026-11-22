/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0099C7E0(s32);

extern char D_00A7E018[];

void func_009F1090(void) {
    s32 temp_v0;

    if ((*(s32 *)D_00A7E018) == 0) {
        temp_v0 = func_0099C7E0(0xC);
        (*(s32 *)D_00A7E018) = temp_v0;
        if (temp_v0 != 0) {
            M2C_FIELD(temp_v0, s8 *, 2) = 0;
        }
    }
}
