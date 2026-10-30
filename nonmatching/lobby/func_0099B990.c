/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
M2C_UNK func_001E7370(s32, s32 *);                  /* extern */

void func_0099B990(u32 arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 *var_v1;
    s32 var_v0;

    var_v0 = 0xC;
    var_v1 = &sp10;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    sp10 = 0x16;
    sp14 = 0x13;
    sp18 = 0x13;
    func_001E7370(func_0021E000(arg0), &sp10);
}
