/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_001D7A20(void *, s32, M2C_UNK);        /* extern */
void *func_008C1490(M2C_UNK, s8 *);                 /* extern */

void func_008D85C0(s32 arg0) {
    s8 sp30;
    s32 var_v0;
    s8 *var_v1;
    void *temp_v0;

    var_v0 = 0x10;
    var_v1 = &sp30;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_v0 = func_008C1490(0x2B, &sp30);
    func_001D7A20(temp_v0, arg0, 0xF9);
    func_001D7F10(temp_v0);
}
