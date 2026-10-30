/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001DC980(s32);                         /* extern */
extern s32 D_003EA6AC;
extern char D_00908DA0[];

void func_00900390(void) {
    if (D_003EA6AC != 0) {
        func_001DC980((*(s32 *)D_00908DA0));
        D_003EA6AC = 0;
    }
}
