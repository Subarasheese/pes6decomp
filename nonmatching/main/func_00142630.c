/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s64 func_001398B0(M2C_UNK);                         /* extern */
M2C_UNK func_00139C70(s32);                         /* extern */
M2C_UNK func_00144CA0(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
extern s32 *D_003E97F8;
extern char D_004FDD50[];

void func_00142630(void) {
    s64 temp_v0;

    temp_v0 = func_001398B0(0x10);
    func_00139C70(((u64) (temp_v0 << 0x24) >> 0x24) | 0x20000000);
    *D_003E97F8 = (s32) temp_v0;
    D_003E97F8 = NULL;
    func_00144CA0(1, 1, (*(s32 *)D_004FDD50), 0);
}
