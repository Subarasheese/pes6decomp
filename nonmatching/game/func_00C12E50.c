/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001C4730(void *, void *, s32);
extern char D_00CBFAA0[];

u8 *func_00C12E50(u8 *arg0) {
    if (arg0 != 0) {
        func_001C4730(arg0, D_00CBFAA0 + 0xB220, 4);
        arg0 += 4;
    }
    return arg0;
}
