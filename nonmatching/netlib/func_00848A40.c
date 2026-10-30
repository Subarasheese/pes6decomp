/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C47E0(s32, void *, M2C_UNK);        /* extern */
s16 *func_008472D0();                               /* extern */
extern char D_008B1504[];

void func_00848A40(u16 *arg0) {
    *arg0 = M2C_FIELD(((*func_008472D0() * 2) + ((void *)D_008B1504)), u16 *, -2);
    func_001C47E0(arg0 + 4, ((void *)D_008B1504) + 0x14, 0x40);
}
