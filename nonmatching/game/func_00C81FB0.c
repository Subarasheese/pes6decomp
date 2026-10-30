/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00C8B150(void);
extern void * func_001E6E10(s32);
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_00C897C0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00C89CB0(M2C_UNK, M2C_UNK *, s32, void *, f32, f32, f32, f32); /* extern */
extern char D_00CA87F0[];
extern char D_00CA87F4[];
extern char D_00CA87F8[];
extern char D_00CA87FC[];
extern char D_00CA8800[];
extern M2C_UNK func_00C81FA0;

void func_00C81FB0(void) {
    void *temp_s0;

    temp_s0 = func_001E6E10(0x4EE2);
    func_00C89CB0(0x7E, ((void *)D_00CA8800), func_00C8B150(), temp_s0, (*(f32 *)D_00CA87F0), (*(f32 *)D_00CA87F4), (*(f32 *)D_00CA87F8), (*(f32 *)D_00CA87FC));
    func_00C897C0(0x7E, 0);
    func_00C88EC0(0x20, 0, &func_00C81FA0);
}
