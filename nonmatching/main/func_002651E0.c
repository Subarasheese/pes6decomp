/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern int func_00256DC0(int);
extern s32 func_00265CA0(void *, s32, s32, s32);
extern void func_001B9250(s32, void *);
extern s32 D_0058D418;
extern void *D_0058D41C;
extern void func_00265920(void);

s32 func_002651E0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_a0;
    s32 var_s2;

    var_s2 = 0;
    if (arg0 != NULL) {
        temp_a0 = func_00256DC0(*arg0);
        D_0058D418 = arg1;
        D_0058D41C = NULL;
        func_001B9250(temp_a0, (void *)func_00265920);
        if (D_0058D41C != NULL) {
            var_s2 = func_00265CA0(M2C_FIELD(D_0058D41C, void **, 0x18), 0, arg2, arg3);
        }
    }
    return var_s2;
}
