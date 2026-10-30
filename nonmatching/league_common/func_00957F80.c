/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001DA550(s32, f32 *);                  /* extern */
extern char D_009BF408[];
extern char D_009BF410[];
extern char D_009BF414[];

s32 func_00957F80(void) {
    f32 sp38;
    f32 sp3C;
    s32 *var_s0;
    u32 var_s1;

    var_s1 = 0;
    var_s0 = ((void *)D_009BF408);
    sp38 = (*(f32 *)D_009BF410);
    sp3C = (*(f32 *)D_009BF414);
    do {
        func_001DA550(*var_s0, &sp38);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 2U);
    return 1;
}
