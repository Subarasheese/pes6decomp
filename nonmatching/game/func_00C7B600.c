/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002D5410(void);
M2C_UNK func_002D5720(s32);                         /* extern */
extern char D_00591DCC[];

void func_00C7B600(void) {
    s32 temp_v0;
    s32 var_a0;

    temp_v0 = func_002D5410();
    switch (temp_v0) {                              /* irregular */
    case 14:
        var_a0 = 1;
        break;
    case 0:
        var_a0 = 1;
        break;
    default:
        if (((u64) ((s64) *(u8 *)0xCCBF18 << 0x3D) >> 0x3F) != 0) {
            var_a0 = 1;
        } else {
            var_a0 = ((*(u8 *)D_00591DCC) & 1) ^ 1;
        }
        break;
    }
    func_002D5720(var_a0);
}
