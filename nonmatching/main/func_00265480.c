/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00256DC0(int);
extern void func_00256DE0(void *, s32);
M2C_UNK func_001B9250(s32, M2C_UNK *);              /* extern */
s32 func_00265AC0(s32);                             /* extern */
extern char D_0058D418[];
extern void *D_0058D41C;
extern M2C_UNK func_00265920;

s32 func_00265480(s32 *arg0, s32 arg1) {
    s32 temp_a0;
    s32 var_s2;
    void *temp_s1;

    var_s2 = 0;
    if (arg0 != NULL) {
        temp_a0 = func_00256DC0(*arg0);
        (*(s32 *)D_0058D418) = arg1;
        D_0058D41C = NULL;
        func_001B9250(temp_a0, &func_00265920);
        temp_s1 = D_0058D41C;
        if (temp_s1 != NULL) {
            var_s2 = func_00265AC0(M2C_FIELD(temp_s1, s32 *, 0x18));
            if (temp_s1 != NULL) {
                func_00256DE0((void *) *arg0, (s32) temp_s1);
            }
        }
    }
    return var_s2;
}
