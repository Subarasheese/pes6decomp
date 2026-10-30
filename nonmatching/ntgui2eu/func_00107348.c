/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001191E0(s32, s32, s32, s32);
extern char D_002BA0C0[];

void func_00107348(void) {
    func_001191E0((s32) M2C_FIELD(((void *)D_002BA0C0), u8 *, 0x414), (s32) M2C_FIELD(((void *)D_002BA0C0), u8 *, 0x415), (s32) M2C_FIELD(((void *)D_002BA0C0), u8 *, 0x416), (s32) M2C_FIELD(((void *)D_002BA0C0), u8 *, 0x417));
}
