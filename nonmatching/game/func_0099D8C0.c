/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_00293620(void *, s32, s32, s32);       /* extern */
extern char D_00592980[];

void func_0099D8C0(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;

    temp_v1 = arg0 & 0xFF;
    func_00293620(((u8 *)D_00592980) + (temp_v1 * 0x6900), arg2, temp_v1 * 0x69, temp_v1 * 0xF);
}
