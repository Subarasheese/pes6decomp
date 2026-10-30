/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017DF40(s32, s32, s32);
extern s32 func_0017DF20(s32, s32, s32);
M2C_UNK func_00BF8D60(M2C_UNK, M2C_UNK);            /* extern */
extern char D_00CBD7C0[];

s32 func_00BF91D0(void) {
    func_0017DF40((*(s32 *)D_00CBD7C0), 0x8CB7, 0x8CBC);
    func_0017DF20((*(s32 *)D_00CBD7C0), 0x8CB7, 0x8CBD);
    func_0017DF40((*(s32 *)D_00CBD7C0), 0x8CB8, 0x8CBC);
    func_0017DF20((*(s32 *)D_00CBD7C0), 0x8CB8, 0x8CBE);
    func_0017DF40((*(s32 *)D_00CBD7C0), 0x8CB9, 0x8CBC);
    func_0017DF20((*(s32 *)D_00CBD7C0), 0x8CB9, 0x8CBE);
    func_0017DF40((*(s32 *)D_00CBD7C0), 0x8CBA, 0x8CBC);
    func_0017DF20((*(s32 *)D_00CBD7C0), 0x8CBA, 0x8CBF);
    func_0017DF40((*(s32 *)D_00CBD7C0), 0x8CBB, 0x8CBC);
    func_0017DF20((*(s32 *)D_00CBD7C0), 0x8CBB, 0x8CBF);
    func_00BF8D60(0x64, 0x64);
    return 1;
}
