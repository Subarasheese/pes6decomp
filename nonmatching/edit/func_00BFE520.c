/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_003344D0(s32);
extern void func_0026E1A0(s32, s32, s32, s32, s32, s32, s32);
M2C_UNK func_00BDCF60(s32);                         /* extern */

void func_00BFE520(s32 arg0) {
    s32 temp_v0;

    func_0026E1A0(0, 0xD, 0, 0, 0, 0, 0);
    temp_v0 = func_003344D0(arg0);
    func_00BDCF60(temp_v0);
    func_0026E1A0(0, 0xD, 0, 0, 0, 0, 0);
    func_0026E1A0(0, 0, temp_v0, 0, 0x64, 0, 0);
}
