/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002646D0(int);
extern void func_00264790(void *, u8);
extern void func_002648E0(int);
extern void func_002648F0(int);
M2C_UNK func_00271E40();                            /* extern */
M2C_UNK func_009B6810();                            /* extern */
extern char D_005E3A98[];

s32 func_00809560(s32 *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 var_s1;

    var_s1 = 0;
    temp_s0 = *arg0;
    func_002648F0(temp_s0);
    temp_v0 = func_002646D0(temp_s0) & 0xFF;
    switch (temp_v0) {                              /* irregular */
    case 1:
        var_s1 = 1;
        break;
    case 0:
        if ((*(s32 *)D_005E3A98) != 0) {
            func_00264790((void *) temp_s0, 1U);
        } else {
            func_00271E40();
            func_009B6810();
        }
        break;
    }
    func_002648E0(temp_s0);
    return var_s1;
}
