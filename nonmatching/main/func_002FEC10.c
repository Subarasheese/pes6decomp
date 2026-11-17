/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00305E60(void *, void (*)(void));
extern void func_002D4C40(s32);
extern s32 func_00992C20(void);
extern void func_002FEB50(void);

s32 func_002FEC10(void *arg0) {
    s32 v;
    void *p;

    p = M2C_FIELD(arg0, void **, 0x18);
    v = func_00992C20() & 0xFF;
    M2C_FIELD(p, s32 *, 0x18) = v;
    if (v == 3) {
        func_002D4C40(5);
    } else if (v == 2) {
        func_002D4C40(0x1B);
        func_002D4C40(5);
    } else if (v == 1) {
        func_002D4C40(0x25);
    } else {
        return 0;
    }
    func_00305E60(arg0, func_002FEB50);
    return 1;
}
