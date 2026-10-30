/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591BE4[];
extern char D_00CBCD96[];
extern char D_00CBCDC4[];

s32 func_009B46A0(void) {
    s32 temp_v0;
    s32 var_a1;

    var_a1 = (*(u8 *)D_00CBCD96) + (*(s32 *)D_00CBCDC4);
    temp_v0 = (((*(u8 *)D_00591BE4) * 4) / 3) + ((u32) ((*(u8 *)D_00591BE4) * 4) >> 0x1F);
    if (var_a1 < temp_v0) {
        var_a1 = temp_v0;
    }
    return (*(u8 *)D_00591BE4) + var_a1;
}
