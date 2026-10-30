/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
M2C_UNK func_0081A040(s32, s32, u32, u32);          /* extern */
extern char D_008A3CE8[];
extern char D_008A3D18[];
extern char D_008A3D20[];
extern char D_008A3D28[];
extern char D_008A3D30[];

s32 func_0081CB00(s32 arg0) {
    u32 sp28;
    s32 sp2C;
    u32 temp_lo;

    if ((*(s32 *)D_008A3D18) == 0) {
        return 0;
    }
    (*(s8 *)D_008A3D20) = 1;
    func_00110E58(func_001105C8(), &sp2C, &sp28);
    temp_lo = sp28 / 1000U;
    (*(s32 *)D_008A3D30) = arg0;
    (*(s32 *)D_008A3D28) = temp_lo + (sp2C * 0x3E8);
    if ((*(s32 *)D_008A3D18) != 0) {
        func_0081A040((*(s32 *)D_008A3CE8), arg0, temp_lo, sp28);
    }
    return 1;
}
