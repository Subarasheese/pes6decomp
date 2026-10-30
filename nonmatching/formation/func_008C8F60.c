/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern void func_001D7F10(void *);
M2C_UNK func_001D7A20(void *, s32, M2C_UNK);        /* extern */
void *func_008C1490(M2C_UNK, s8 *);                 /* extern */

void func_008C8F60(s32 arg0, s32 arg1) {
    s8 sp50;
    s32 var_v0;
    s64 var_s0;
    s64 var_v0_2;
    s8 *var_v1;
    void *temp_s3;

    var_v0 = 0x10;
    var_v1 = &sp50;
    var_s0 = 0;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_s3 = func_008C1490(0x29, &sp50);
    var_v0_2 = 2;
    if ((arg1 == 2) || (var_v0_2 = 1, (arg1 == 1))) {
        var_s0 = var_v0_2;
    }
    func_001D7D80(temp_s3, (s16) ((s64) (var_s0 << 0x30) >> 0x30));
    func_001D7A20(temp_s3, arg0, 0xE5);
    func_001D7F10(temp_s3);
}
