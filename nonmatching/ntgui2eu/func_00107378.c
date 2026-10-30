/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001192F8(s32, s32, s32, s32);
extern char D_002BA0C0[];

void func_00107378(void) {
    func_001192F8((s32) M2C_FIELD(((void *)D_002BA0C0), u8 *, 0x418), (s32) M2C_FIELD(((void *)D_002BA0C0), u8 *, 0x419), (s32) M2C_FIELD(((void *)D_002BA0C0), u8 *, 0x41A), (s32) M2C_FIELD(((void *)D_002BA0C0), u8 *, 0x41B));
}
