/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_002280B0(void);
extern u8 func_00226940(void);
extern u8 func_00227FC0(void);
extern u8 func_00227EB0(void);
s32 func_00225940(u8);                              /* extern */
M2C_UNK func_003710E0(u8);                          /* extern */
s8 func_00935C40();                                 /* extern */
extern void *D_003E77B0;
extern char D_00591BB6[];
extern char D_00591BBB[];
extern char D_00591BC0[];
extern char D_00591F2C[];

void func_00936FA0(void) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v1;
    s8 var_v1;

    (*(s8 *)D_00591BB6) = func_00935C40();
    temp_s0 = func_00225940(M2C_FIELD(D_003E77B0, u8 *, 0x2C)) & 0xFF;
    temp_v1 = temp_s0 & 0xFF;
    temp_a0 = func_00225940(M2C_FIELD(D_003E77B0, u8 *, 0x2D)) & 0xFF;
    if ((temp_v1 > 0) && !(temp_a0 & 0xFF)) {
        var_v1 = 1;
    } else if ((temp_v1 == 0) && ((temp_a0 & 0xFF) > 0)) {
        var_v1 = 2;
    } else if ((temp_v1 > 0) && ((temp_a0 & 0xFF) > 0)) {
        var_v1 = 3;
    } else {
        var_v1 = 1;
    }
    (*(s8 *)D_00591F2C) = var_v1;
    (*(u8 *)D_00591BC0) = func_002280B0();
    func_003710E0(func_00227FC0());
    M2C_FIELD(D_003E77B0, u8 *, 0xC) = (u8) ((M2C_FIELD(D_003E77B0, u8 *, 0xC) & ~0x38) | ((func_00226940() & 7) * 8));
    (*(u8 *)D_00591BBB) = func_00227EB0();
}
