/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001D7D60(void *, s8);
extern void func_001D7C20(void *, s32);
extern void func_001D7D80(void *, s16);
extern s32 D_00A7DE00[];

int func_009D2280(int arg0) {
    void *arg0_00;
    int value;

    if (D_00A7DE00[0] == 0) {
        value = 0;
    } else {
        arg0_00 = *(void **)(D_00A7DE00[0] + 0xbc);
        if (arg0 != 0) {
            func_001D7D60(arg0_00, '\x01');
            func_001D7C20(arg0_00, 2);
            value = 1;
        } else {
            func_001D7D60(arg0_00, '\0');
            func_001D7C20(arg0_00, 0);
            func_001D7D80(arg0_00, 0);
            value = 1;
        }
    }
    return value;
}
