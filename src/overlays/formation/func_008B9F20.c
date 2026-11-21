/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001F2330(s32);
extern s32 func_001F3D10(s32, u8);
extern void func_001F2290(void *, s32);
extern void func_001F3D80(s32, void *, s32);

int func_008B9F20(int arg0, int arg1, int arg2) {
    void *arg0_00;

    arg0_00 = func_001F2330(arg0);
    func_001F3D10((int)arg0_00, '\x01');
    func_001F2290(arg0_00, arg1);
    if (arg2 != 0) {
        func_001F3D80((int)arg0_00, (void *)arg2, 0);
    }
    return (int)arg0_00;
}
