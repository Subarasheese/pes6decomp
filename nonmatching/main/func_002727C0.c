/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

extern M2C_UNK (*D_003E9C9C)(s32);
extern char D_00592730[];

void func_002727C0(s32 arg0) {
    s32 temp_a1;

    temp_a1 = arg0 & 0xFF;
    if ((temp_a1 != (*(u8 *)D_00592730)) && (D_003E9C9C != NULL)) {
        D_003E9C9C(temp_a1);
    }
}
