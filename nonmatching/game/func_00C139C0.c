/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00C13B60(void *);                      /* extern */
extern s32 D_003EA7C0;
extern char D_00CBFAA0[];

void func_00C139C0(void) {
    func_00C13B60(((void *)D_00CBFAA0) + 0xB2A4);
    M2C_FIELD(((void *)D_00CBFAA0), s16 *, 0xB220) = 0;
    D_003EA7C0 = 0;
    M2C_FIELD(((void *)D_00CBFAA0), s16 *, 0xB222) = 0;
}
