/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0099C7E0(s32);
extern s32 func_009E07C0(s32);
extern s32 func_009E0D60(s32);

extern char D_00A7DEF0[];

void func_009E1520(s32 arg0) {
    s32 temp_v0;
    s8 temp_v0_2;

    if ((*(s32 *)D_00A7DEF0) == 0) {
        temp_v0 = func_0099C7E0(8);
        (*(s32 *)D_00A7DEF0) = temp_v0;
        if (temp_v0 != 0) {
            M2C_FIELD(temp_v0, s8 *, 1) = 0;
            temp_v0_2 = func_009E07C0(arg0);
            M2C_FIELD((*(s32 *)D_00A7DEF0), s8 *, 3) = temp_v0_2;
            M2C_FIELD((*(s32 *)D_00A7DEF0), s8 *, 4) = temp_v0_2;
            func_009E0D60(arg0);
        }
    }
}
