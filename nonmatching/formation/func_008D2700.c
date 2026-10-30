/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
M2C_UNK func_008C5900(void *, M2C_UNK);             /* extern */
M2C_UNK func_008C5A20(void *, s32, u8);             /* extern */

void func_008D2700(void *arg0, s32 arg1) {
    s32 var_v1;

    var_v1 = 0;
    switch (arg1) {                                 /* irregular */
    case 7:
        var_v1 = 2;
        break;
    case 6:
        var_v1 = 1;
        break;
    }
    func_001D7D80(M2C_FIELD(arg0, void **, 0x1EC), var_v1 & 0xFF);
    func_008C5A20(arg0 + 0x214, arg1, M2C_FIELD(arg0, u8 *, 0));
    func_008C5900(arg0 + 0x214, 0);
}
