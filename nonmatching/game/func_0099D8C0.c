/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_00293620(void *, s32, s32, s32);       /* extern */
extern char D_00592980[];

void func_0099D8C0(s32 arg0, s32 arg1, s32 arg2) {
    s32 a = arg0 & 0xFF;
    s32 b = arg1 & 0xFF;
    func_00293620(((u8 *)D_00592980) + 0x68 + a * 0x6900 + b * 0x348, arg2, a * 0x69, a * 0xF);
}
