/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F8760(void *);
M2C_UNK func_001C7F58(M2C_UNK *, M2C_UNK *);        /* extern */
extern char D_00D20600[];
extern char D_00D395D0[];
extern char D_00D395D8[];
extern char D_00D39640[];

s32 func_00D14D50(M2C_UNK *arg0) {
    M2C_UNK *var_s0;

    var_s0 = arg0;
    if (var_s0 == NULL) {
        var_s0 = ((void *)D_00D20600);
    }
    func_001C7F58(((void *)D_00D39640), var_s0);
    (*(s32 *)D_00D395D8) = 0;
    (*(s32 *)D_00D395D0) = func_001F8760(var_s0);
    return 0;
}
