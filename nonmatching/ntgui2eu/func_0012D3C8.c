/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0012D408();                            /* extern */
extern char D_011D4D40[];
extern char D_011D4D44[];
extern char D_011D4D50[];

void func_0012D3C8(void) {
    (*(s32 *)D_011D4D50) = 1;
    (*(s32 *)D_011D4D44) = 0;
    func_0012D408();
    (*(s32 *)D_011D4D40) = 1;
}
