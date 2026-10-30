/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0093B9E0();                                /* extern */
extern char D_009FF500[];
extern char D_009FF520[];
extern char D_009FF530[];
extern char D_009FF550[];
extern char D_009FF570[];

M2C_UNK *func_009B4B50(s32 arg0) {
    M2C_UNK *var_v0;

    switch (arg0) {                                 /* irregular */
    case 0:
        if (func_0093B9E0() != 0) {
            var_v0 = ((void *)D_009FF500);
        } else {
            var_v0 = ((void *)D_009FF520);
        }
        return var_v0;
    case 1:
        return ((void *)D_009FF530);
    case 2:
        return ((void *)D_009FF550);
    case 3:
        return ((void *)D_009FF570);
    default:
        return (M2C_UNK *)0x9FF550;
    }
}
