/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005BFF98[];
extern char D_005BFFAC[];
extern char D_005BFFB0[];
extern char D_005BFFB4[];
extern char D_005BFFC0[];

void func_00169450(void *arg0) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a3;
    s32 temp_a4;
    s64 temp_a0_3;
    u16 var_v0;
    void *temp_a1;
    void *temp_a7;

    temp_a0 = M2C_FIELD(arg0, s32 *, 0x4EC);
    temp_a4 = M2C_FIELD(arg0, s32 *, 0x82C);
    temp_a1 = arg0 + 0x630 + (temp_a0 * 0xA0);
    temp_a0_2 = (0x800 - ((s32) (*(s32 *)D_005BFFAC) >> 1)) * 0x10;
    temp_a7 = ((*(s32 *)D_005BFFC0) == 0) ? (temp_a1 + 0x60) : (temp_a1 + 0x10);
    if (M2C_FIELD(((void *)D_005BFF98), s32 *, 0) != 0) {
        var_v0 = (temp_a0_2 + 8) - temp_a4;
    } else {
        var_v0 = temp_a0_2 - temp_a4;
    }
    M2C_FIELD(temp_a7, u16 *, 0x14) = var_v0;
    temp_a3 = M2C_FIELD(((void *)D_005BFF98), s32 *, -0x68) * 8;
    M2C_FIELD(arg0, s32 *, 0x860) = (s32) (*(s32 *)D_005BFFB4);
    M2C_FIELD(arg0, s32 *, 0x85C) = (s32) (*(s32 *)D_005BFFB0);
    M2C_FIELD(((temp_a0 * 0x50) + arg0 + 0x780), s16 *, 0x14) = (s16) (var_v0 & 0xFFFF & 0xFFFF);
    temp_a0_3 = (M2C_FIELD(temp_a7, s64 *, 0x20) & ((((-0x800 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((((s32) (M2C_FIELD(arg0, s32 *, 0x834) + temp_a3) >> 4) & 0x7FF) << 0x20);
    (*(s32 *)D_005BFFB0) = (s32) M2C_FIELD(temp_a7, u16 *, 0x10);
    (*(s32 *)D_005BFFB4) = (s32) ((s64) ((s64) M2C_FIELD(temp_a7, u16 *, 0x14) << 0x20) >> 0x20);
    M2C_FIELD(temp_a7, s64 *, 0x20) = temp_a0_3;
    M2C_FIELD(temp_a7, s64 *, 0x20) = (s64) ((temp_a0_3 & ((((0xF800FFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | (((((s32) (M2C_FIELD(arg0, s32 *, 0x83C) + temp_a3 + 7) >> 4) - 1) & 0x7FF) << 0x30));
}
