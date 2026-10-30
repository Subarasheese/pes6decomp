/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001E7140(s32, u8);                     /* extern */
M2C_UNK func_0093D850();                            /* extern */
extern s32 D_003E7AE8;
extern char D_00591C09[];

void func_0093D2D0(void) {
    func_0093D850();
    switch ((*(u8 *)D_00591C09)) {                           /* irregular */
    case 14:
        func_001E7140(D_003E7AE8, (*(u8 *)D_00591C09));
        break;
    case 4:
        func_001E7140(D_003E7AE8, (*(u8 *)D_00591C09));
        break;
    case 2:
        func_001E7140(D_003E7AE8, (*(u8 *)D_00591C09));
        break;
    case 1:
        func_001E7140(D_003E7AE8, (*(u8 *)D_00591C09));
        break;
    }
    D_003E7AE8 = -1;
}
