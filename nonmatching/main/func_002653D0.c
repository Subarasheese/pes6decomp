/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00256DC0(int);
extern s32 func_00265CA0(void *);
M2C_UNK func_001B9250(s32, M2C_UNK *);              /* extern */
extern char D_0058D410[];
extern char D_0058D414[];
extern void *D_0058D41C;
extern M2C_UNK func_00265990;

s32 func_002653D0(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_a0;
    s32 var_s0;

    var_s0 = 0;
    if (arg0 != NULL) {
        temp_a0 = func_00256DC0(*arg0);
        (*(s32 *)D_0058D410) = arg1;
        (*(s32 *)D_0058D414) = arg2;
        D_0058D41C = NULL;
        func_001B9250(temp_a0, &func_00265990);
        if (D_0058D41C != NULL) {
            var_s0 = func_00265CA0(M2C_FIELD(D_0058D41C, void **, 0x18));
        }
    }
    return var_s0;
}
