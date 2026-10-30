/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
extern int func_002646D0(int);
extern s32 func_00262FC0(void);
extern void func_002648F0(int);
extern void func_002648E0(int);
s32 func_00CD6680();                                /* extern */

void func_00CD69A0(s32 arg0) {
    s32 temp_v0;
    s32 var_s0;

    var_s0 = 0;
    if (func_00262FC0() == 0) {
        func_002648F0(arg0);
        temp_v0 = func_002646D0(arg0) & 0xFF;
        switch (temp_v0) {                          /* irregular */
        case 1:
            var_s0 = 1;
            break;
        case 0:
            if (func_00CD6680() != 0) {
                func_00264790((void *) arg0, 1U);
            }
            break;
        }
        func_002648E0(arg0);
    } else {
        var_s0 = 1;
    }
    if (var_s0 != 0) {
        func_00264790((void *) arg0, 0x20U);
    }
}
