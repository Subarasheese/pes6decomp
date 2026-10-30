/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0026E840(s32);                         /* extern */
s32 func_00AEB1B0(M2C_UNK *);                       /* extern */
extern char D_00B02AA0[];
extern char D_00B02AA2[];
extern char D_00B02AA4[];
extern char D_00B02AA6[];
extern char D_00B02AA8[];
extern char D_00B02AAC[];
extern char D_00B02AB4[];
extern char D_00B02AC4[];
extern char D_00B02AC8[];

s32 func_00AEA260(void) {
    s16 var_s0;
    s32 var_s1;

    var_s0 = (*(s16 *)D_00B02AA8);
    (*(s32 *)D_00B02AC8) = 0;
    var_s1 = 0;
    switch (var_s0) {                               /* irregular */
    case 0:
        if (func_00AEB1B0(((void *)D_00B02AAC)) == 1) {
            if ((*(u8 *)D_00B02AB4) & 1) {
                (*(u16 *)D_00B02AA4) = (*(u16 *)D_00B02AA0);
                (*(u8 *)D_00B02AA6) = (*(u8 *)D_00B02AA2);
            }
            var_s0 = 0x14;
            (*(u8 *)D_00B02AB4) = ((*(u8 *)D_00B02AB4) & ~1) | (0 & 1);
        }
        break;
    case 20:
        var_s1 = 1;
        break;
    }
    (*(s16 *)D_00B02AA8) = var_s0;
    if ((*(s32 *)D_00B02AC8) != 0) {
        func_0026E840((*(s32 *)D_00B02AC4));
    }
    return var_s1;
}
