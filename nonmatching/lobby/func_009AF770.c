/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0099C7C0(s32);                         /* extern */
M2C_UNK func_009AD000(s32);                         /* extern */
extern char D_00A7DBF0[];

void func_009AF770(void) {
    s32 temp_s0;

    temp_s0 = (*(s32 *)D_00A7DBF0);
    func_009AD000(temp_s0);
    if (temp_s0 != 0) {
        func_0099C7C0(temp_s0);
        (*(s32 *)D_00A7DBF0) = 0;
    }
}
