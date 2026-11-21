/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001F08B0(s32);
extern s32 func_001D6E70(s32, s32, s32);

int func_00B8FBF0(int *arg0, int arg1, int arg2, int arg3) {
    int value;
    u32 value2;

    if ((arg0 == (int *)0x0) || (*arg0 != 0)) {
        value2 = 0;
        return value2;
    }
    value = func_001F08B0(arg3);
    if (value == 0) {
        value2 = 0;
    } else {
        value = func_001D6E70(arg1, arg2, value);
        *arg0 = value;
        value2 = (u32)(arg0 != (int *)0x0);
    }
    return value2;
}
