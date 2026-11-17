/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

void func_0017F9A0(s32, void (*)(void), void *, s32, s32 *, void *); /* extern */
extern u8 *D_003E9978;
extern void func_001F7E10(void);

void func_001F7C90(s32 arg0, s32 *arg1) {
    s32 sp10[5];
    u8 *node;

    sp10[0] = 0;
    sp10[1] = 0;
    sp10[2] = 0;
    sp10[3] = 0;
    sp10[4] = 0;
    node = D_003E9978;
    while (node != NULL) {
        if (*(s32 *)(node + 8) == arg0) {
            return;
        }
        node = *(u8 **)(node + 4);
    }
    sp10[3] = arg1[0];
    sp10[4] = arg1[1];
    func_0017F9A0(arg0, func_001F7E10, arg1 + 1, 4, sp10, arg1);
}
