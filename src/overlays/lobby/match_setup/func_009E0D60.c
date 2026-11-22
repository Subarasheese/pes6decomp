/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0099C7E0(s32);
extern s32 func_009E04B0(s32);

extern char D_00A7DEE8[];

s32 func_009E0D60(s32 arg0) {
    s32 temp_v0;

    if ((*(s32 *)D_00A7DEE8) != 0) {
        return 0;
    }
    temp_v0 = func_0099C7E0(0x40);
    (*(s32 *)D_00A7DEE8) = temp_v0;
    if (temp_v0 == 0) {
        return 0;
    }
    M2C_FIELD(temp_v0, s8 *, 0x3A) = 1;
    func_009E04B0(arg0);
    return 1;
}
