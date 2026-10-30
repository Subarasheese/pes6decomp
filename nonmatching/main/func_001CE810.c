/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0012A0B0(float, float, float);
M2C_UNK func_00129ED0(u8);                          /* extern */
M2C_UNK func_00129FD0(f32, f32);                    /* extern */
extern char D_0052AAD8[];
extern char D_0052AAD9[];
extern char D_0052AADA[];
extern char D_0052AADB[];
extern char D_0052AADC[];
extern char D_0052AAE0[];

void func_001CE810(void) {
    f32 var_f12;
    f32 var_f13;
    f32 var_f14;

    func_00129ED0((*(u8 *)D_0052AAD8));
    if ((s32) (*(u8 *)D_0052AAD9) < 0) {
        var_f12 = 2.0f * (f32) (((u8) (*(u8 *)D_0052AAD9) >> 1) | ((*(u8 *)D_0052AAD9) & 1));
    } else {
        var_f12 = (f32) (*(u8 *)D_0052AAD9);
    }
    if ((s32) (*(u8 *)D_0052AADA) < 0) {
        var_f13 = 2.0f * (f32) (((u8) (*(u8 *)D_0052AADA) >> 1) | ((*(u8 *)D_0052AADA) & 1));
    } else {
        var_f13 = (f32) (*(u8 *)D_0052AADA);
    }
    if ((s32) (*(u8 *)D_0052AADB) < 0) {
        var_f14 = 2.0f * (f32) (((u8) (*(u8 *)D_0052AADB) >> 1) | ((*(u8 *)D_0052AADB) & 1));
    } else {
        var_f14 = (f32) (*(u8 *)D_0052AADB);
    }
    func_0012A0B0(var_f12, var_f13, var_f14);
    func_00129FD0((f32) (*(s32 *)D_0052AADC), (f32) (*(s32 *)D_0052AAE0));
}
