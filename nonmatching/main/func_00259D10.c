/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0025FE20(M2C_UNK *, s16, s16);         /* extern */
extern char D_0058CF70[];
extern char D_0058CF72[];
extern char D_0058CF74[];

void func_00259D10(void *arg0) {
    s16 temp_a2;
    s16 temp_a3;

    if (arg0 != NULL) {
        temp_a3 = M2C_FIELD(arg0, s16 *, 0);
        temp_a2 = M2C_FIELD(arg0, s16 *, 2);
        (*(s16 *)D_0058CF70) = temp_a3;
        (*(s16 *)D_0058CF72) = temp_a2;
        func_0025FE20(((void *)D_0058CF74), temp_a2, temp_a3);
    }
}
