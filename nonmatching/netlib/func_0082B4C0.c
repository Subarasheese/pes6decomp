/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082B290();                                /* extern */
s32 func_00862110(s32, s32);                        /* extern */
extern char D_008A4398[];
extern char D_008A43B0[];

s32 func_0082B4C0(s32 arg0) {
    s32 temp_v0;

    temp_v0 = func_0082B290();
    if (temp_v0 == -0x96) {
        return 1;
    }
    if ((*(s32 *)D_008A4398) == 0) {
        return 1;
    }
    if ((*(s8 *)D_008A43B0) != 1) {
        switch (temp_v0) {                          /* irregular */
        case -62:
            return 1;
        case -73:
            return 1;
        default:
            return func_00862110((*(s32 *)D_008A4398), arg0) == 0;
        }
    } else {
        return 1;
    }
}
