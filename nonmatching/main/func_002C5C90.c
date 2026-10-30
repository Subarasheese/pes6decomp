/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00C12FD0(s32, s32, s32, M2C_UNK);          /* extern */
s32 func_00C137F0();                                /* extern */
s32 func_00C13840();                                /* extern */
s32 func_00C17E10(s32, s32);                        /* extern */
extern char D_003DA428[];
extern s8 D_003E9D50;
extern s8 D_003E9D52;
extern s8 D_003E9D53;

s32 func_002C5C90(s8 arg0) {
    s32 temp_a0;
    s32 temp_s1;
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = arg0 & 0xFF;
    if ((func_00C17E10((temp_v1 >> 5) & 1, temp_v1 & 0x1F) & 0xFF) == 0xFF) {
        return -1;
    }
    temp_s1 = func_00C137F0();
    temp_a0 = func_00C13840();
    D_003E9D53 = 0xFF;
    D_003E9D50 = arg0;
    D_003E9D52 = 0;
    var_v0 = func_00C12FD0(temp_a0, temp_s1, (*(s32 *)D_003DA428), 1);
    if (var_v0 == -1) {
        var_v0 = temp_s1;
    }
    return var_v0;
}
