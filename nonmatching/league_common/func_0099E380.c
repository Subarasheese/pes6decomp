/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0022BAC0(s32);
extern s32 func_0022BB90(s32);
extern void * func_0022C1E0(void);
extern u8 func_00239C20(s32);
extern u8 func_0022BC60(s32);
void *func_0022BFF0(u8, s32);                       /* extern */
M2C_UNK func_0094C620(s32, s32);                    /* extern */
extern void *D_003E77B0;
extern char D_00591BB0[];
extern char D_00591BB2[];

void func_0099E380(void) {
    s32 temp_a1_2;
    s32 temp_s0_2;
    s32 temp_v1;
    u8 temp_a1;
    u8 temp_s0;
    u8 var_s0;
    u8 var_s1;
    void *temp_v0;

    temp_s0 = M2C_FIELD(func_0022C1E0(), u8 *, 1);
    temp_v0 = func_0022BFF0(temp_s0, func_00239C20((s32) temp_s0) & 0xFF);
    if (temp_v0 != NULL) {
        temp_a1 = M2C_FIELD(temp_v0, u8 *, 0x16);
        if ((((u64) ((s64) temp_a1 << 0x3D) >> 0x3F) == 1) && (((u64) ((s64) temp_a1 << 0x39) >> 0x3F) == 1)) {
            var_s0 = M2C_FIELD(temp_v0, u8 *, 5);
            var_s1 = M2C_FIELD(temp_v0, u8 *, 6);
        } else {
            var_s1 = M2C_FIELD(temp_v0, u8 *, 5);
            var_s0 = M2C_FIELD(temp_v0, u8 *, 6);
        }
        (*(u16 *)D_00591BB0) = func_0022BAC0((s32) var_s1);
        (*(u16 *)D_00591BB2) = func_0022BAC0((s32) var_s0);
        M2C_FIELD(D_003E77B0, u8 *, 0) = func_0022BC60((s32) var_s1);
        M2C_FIELD(D_003E77B0, u8 *, 0x2D) = func_0022BC60((s32) var_s0);
        M2C_FIELD(D_003E77B0, u16 *, 0x1C) = (u16) (*(u16 *)D_00591BB0);
        M2C_FIELD(D_003E77B0, u16 *, 0x1E) = (u16) (*(u16 *)D_00591BB2);
        M2C_FIELD(D_003E77B0, u8 *, 0x2E) = (u8) M2C_FIELD(D_003E77B0, u8 *, 0x2C);
        M2C_FIELD(D_003E77B0, u8 *, 0x2F) = (u8) M2C_FIELD(D_003E77B0, u8 *, 0x2D);
        temp_s0_2 = func_0022BB90((s32) var_s1) & 0xFF;
        temp_a1_2 = func_0022BB90((s32) var_s0) & 0xFF;
        temp_v1 = temp_s0_2 & 0xFF;
        if ((temp_v1 != temp_a1_2) && ((temp_v1 > 0) || (temp_a1_2 > 0))) {
            func_0094C620(temp_s0_2, temp_a1_2);
        }
    }
}
