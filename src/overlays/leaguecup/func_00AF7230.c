/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern s32 func_0096F610(s32);
extern char D_00B34380[];

void *func_00AF7230(int arg0) {
    int value;
    void *pvVar2;

    value = func_0096F610(arg0);
    if (value == 0) {
        pvVar2 = 0;
    } else {
        pvVar2 = (void *)(((arg0 & 0xffffU) - 6000) * 0x7c + (u32)D_00B34380);
    }
    return pvVar2;
}
