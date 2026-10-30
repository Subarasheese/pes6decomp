/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00CD7A00(M2C_UNK);                     /* extern */
s32 func_00CE4310();                                /* extern */
extern char D_00CFFED4[];
extern char D_00CFFED8[];

void func_00CF1D80(void) {
    if (func_00CE4310() != 0) {
        func_00CD7A00(1);
        (*(s32 *)D_00CFFED4) = (s32) ((*(s32 *)D_00CFFED4) + 1) % (s32) (*(s32 *)D_00CFFED8);
    }
}
