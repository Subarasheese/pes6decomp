/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_00256DC0(int);
extern s32 func_00265CA0(void *, s32, s32, s32);
extern void func_001B9250(s32, void (*)(void), s32, s32);
extern char D_0058D410[];
extern char D_0058D414[];
extern char D_0058D41C[];
extern void func_00265990(void);

s32 func_002653D0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;
    s32 var_s0;

    var_s0 = 0;
    if (arg0 != NULL) {
        temp_a0 = func_00256DC0(*arg0);
        (*(s32 *)D_0058D410) = arg1;
        (*(s32 *)D_0058D414) = arg2;
        *(void **)D_0058D41C = NULL;
        func_001B9250(temp_a0, func_00265990, arg2, arg3);
        if (*(void **)D_0058D41C != NULL) {
            var_s0 = func_00265CA0(*(void **)((char *)*(void **)D_0058D41C + 0x18), arg3, 0, arg4);
        }
    }
    return var_s0;
}
