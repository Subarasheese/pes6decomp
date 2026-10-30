/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_002EBF80(s32);                             /* extern */
extern char D_00CFFCFC[];
extern char D_00CFFD04[];

s32 func_00CEAC90(void) {
    if (((*(s32 *)D_00CFFCFC) == 0) && ((*(u16 *)D_00CFFD04) == 0x126)) {
        return 1;
    }
    if (((*(s32 *)D_00CFFCFC) != 0) && ((func_002EBF80((*(s32 *)D_00CFFCFC)) & 0xFFFF) == 0x126)) {
        return 1;
    }
    return 0;
}
