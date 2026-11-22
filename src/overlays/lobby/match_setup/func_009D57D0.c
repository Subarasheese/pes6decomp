/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_00965CB0(s32);
extern s32 D_00A7DE10[];

int func_009D57D0(void) {
    void *pvVar1;

    if (D_00A7DE10[0] == 0) {
        pvVar1 = 0;
    } else {
        pvVar1 = func_00965CB0((u32) * (u8 *)(D_00A7DE10[0] + 3));
    }
    return (int)pvVar1;
}
