/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001DF820(void *, s32);
extern char D_00888448[];

int func_0081DD00(void *arg0, s8 *arg1) {
    void *arg0_00;
    int value;

    if ((arg0 == 0) || (arg1 == (s8 *)0x0)) {
        value = 0;
    } else if (*(int *)arg0 != 0) {
        value = 0;
    } else {
        arg0_00 = *(void **)((int)arg0 + 0xc);
        if (arg0_00 == 0) {
            value = 0;
        } else if (*arg1 == 0) {
            func_001DF820(arg0_00, (u32)D_00888448);
            value = 1;
        } else {
            func_001DF820(arg0_00, (int)arg1);
            value = 1;
        }
    }
    return value;
}
