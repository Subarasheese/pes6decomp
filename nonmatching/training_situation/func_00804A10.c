/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CE3F00(s32);                         /* extern */
M2C_UNK func_00CE41E0();                            /* extern */
extern s32 D_003E7E1C;
extern char D_008168E0[];

void func_00804A10(void) {
    (*(s32 *)D_008168E0) = 0;
    func_00CE3F00(D_003E7E1C);
    func_00CE41E0();
}
