/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern s32 func_00158BD8(void *, void *, s32);
extern s32 func_0019EE30(void *, s32, s32, void *, s32, void *, s32, void *, void *);
extern void func_001B02B0(s32, s32);

extern char D_011E3980[];
extern char D_011E3A00[];

s32 func_00159240(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    unsigned short new_var;
    new_var = 0x10;
    *((s32 *)(((s8 *)((void *)D_011E3A00)) + new_var)) = arg0;
    func_001B02B0((s32)(((void *)D_011E3A00) + 0x30), arg1);
    func_001B02B0((s32)(((void *)D_011E3A00) + 0x130), arg2);
    func_00158BD8(((void *)D_011E3A00) + 0x230, ((void *)D_011E3A00) + 0x20, arg3);
    func_00158BD8(((void *)D_011E3A00) + 0x330, ((void *)D_011E3A00) + 0x24, arg4);
    return func_0019EE30((void *)D_011E3980, 0xE, 1, (void *)D_011E3A00, 0x1000, (void *)D_011E3A00,
                         0x1000, 0, 0);
}
