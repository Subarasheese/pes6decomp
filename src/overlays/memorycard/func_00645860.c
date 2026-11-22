/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_001F08B0(s32);
extern char D_00659560[];
extern s32 D_00659558[];

int func_00645860(int arg0) {
    int arg0_00;
    int value;

    arg0_00 = *(int *)(arg0 * 4 + (u32)D_00659560);
    value = D_00659558[0];
    if (arg0_00 != 0) {
        value = func_001F08B0(arg0_00);
        return value;
    }
    return value;
}
