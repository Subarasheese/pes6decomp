/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001BE5B0(s32);
extern s32 func_002646D0(s32);
extern s32 func_002646E0(s32);
extern void func_00264790(void *, u8);
extern void func_002648E0(s32);
extern void func_002648F0(s32);
extern s32 func_00CDC5B0(void);

void func_00804800(s32 arg0) {
    s32 temp_v1;
    s32 var_s0;

    var_s0 = 0;
    func_002648F0(arg0);
    temp_v1 = func_002646D0(arg0) & 0xFF;
    switch (temp_v1) {
    case 0:
        if (func_001BE5B0(0) != 0) {
            func_002646E0(arg0);
        }
        break;
    case 1:
        func_00CDC5B0();
        func_002646E0(arg0);
        /* fallthrough */
    case 2:
        var_s0 = 1;
        break;
    }
    func_002648E0(arg0);
    if (var_s0 != 0) {
        func_00264790((void *) arg0, 1U);
    }
}
