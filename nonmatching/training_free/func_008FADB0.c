/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0026B610(s32, void *, void *, s32);
extern s32 func_001BC3D0(s32, s32, s32, s32);
extern void *D_003EA6C0;
extern char D_00591DB6[];
extern char D_0092DAA0[];
extern M2C_UNK func_008FACC0;

void func_008FADB0(void) {
    func_0026B610((s32) (*(s8 *)D_00591DB6), D_003EA6C0, ((void *)D_0092DAA0), 5);
    M2C_FIELD(D_003EA6C0, s32 *, 0x14) = func_001BC3D0((s32) (*(s8 *)D_00591DB6), 0xE, 0, (s32) &func_008FACC0);
}
