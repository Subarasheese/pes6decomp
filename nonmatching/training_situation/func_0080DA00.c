/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E4C[];
extern char D_00592810[];
extern char D_005E3A94[];
extern char D_00CBCDE8[];

void func_0080DA00(void *arg0) {
    if ((*(u8 *)D_00591E4C) == (*(u8 *)D_00592810)) {
        M2C_FIELD(arg0, s32 *, 0x48) = 0x3F800000;
    }
    if (((*(s32 *)D_005E3A94) != 0) || ((s32) (*(u16 *)D_00CBCDE8) > 0)) {
        M2C_FIELD(arg0, s32 *, 0x58) = 0x3F800000;
    }
}
