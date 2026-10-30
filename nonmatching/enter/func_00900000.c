/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_008FFE70(void *);
extern char D_0092F0A8[];
extern void *D_0092F0AC;
extern char D_0092F0B0[];

s32 func_00900000(void) {
    func_008FFE70(D_0092F0AC);
    D_0092F0AC = NULL;
    (*(s8 *)D_0092F0B0) = 0;
    (*(s32 *)D_0092F0A8) = 0;
    return 1;
}
