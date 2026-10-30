/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021DF90(s32);
extern void * func_001F01D0(s32);
extern void func_001F04F0(s32, void *);
extern char D_006599D8[];

s32 func_00645960(void) {
    if (func_001F01D0(func_0021DF90(0x11)) != NULL) {
        return 0;
    }
    func_001F04F0(func_0021DF90(0x11), ((void *)D_006599D8));
    return 1;
}
