/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_0090BA30();
extern void func_00970590(void *);
extern s32 func_00A07B40();
extern s32 func_00A0DD50(void *);
extern void func_00C6A440(void *);

void func_0098BE90(u8 *arg0) {
    s32 t;
    func_0090BA30();
    arg0[0x201] = 4;
    t = arg0[0x1DE];
    if (t == 0) {
        arg0[0x1DE] = t + 1;
        arg0[0x20F] = 0;
        arg0[0x210] = 0;
        arg0[0x20E] = 0;
    }
    t = arg0[0x20E];
    if (t > 0) {
        arg0[0x20E] = t - 1;
    }
    if ((func_00A0DD50(arg0) != 0) && (func_00A07B40() != 0)) {
        func_00970590(arg0);
    } else {
        func_00C6A440(arg0);
    }
}
