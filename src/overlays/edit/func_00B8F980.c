/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_001D6820(s32, s32);
extern void func_001EDA30(void *, s32);
extern s32 func_001D67E0(void *);

int func_00B8F980(void **arg0, int arg1, int arg2, int arg3, int arg4)

{
    void *pvVar1;
    int value;

    if ((arg0 == (void **)0x0) || (*arg0 != (void *)0x0)) {
        value = 0;
        return value;
    }
    pvVar1 = func_001D6820(arg1, arg2);
    *arg0 = pvVar1;
    if (pvVar1 == (void *)0x0) {
        value = 0;
    } else {
        if (pvVar1 == (void *)0x0) {
            pvVar1 = (void *)0x0;
        } else {
            pvVar1 = *(void **)((int)pvVar1 + 0xc);
        }
        func_001EDA30(pvVar1, arg3);
        do {
            func_001D67E0(*arg0);
            arg4 = arg4 + -1;
        } while (0 < arg4);
        value = 1;
    }
    return value;
}
