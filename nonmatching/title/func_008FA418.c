/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

u32 func_008F86F8(void *, M2C_UNK);                 /* extern */
M2C_UNK func_00900500(void *, M2C_UNK *);           /* extern */
extern char D_00901E50[];
extern char D_00901E78[];

void func_008FA418(void *arg0) {
    s32 temp_v0_2;
    u32 temp_s0;
    u32 temp_s2;
    u32 temp_v0;

    M2C_FIELD(arg0, s32 *, 0x858) = 1;
    *(s32 *)0x10002010 &= 0xFF7FFFFF;
    temp_v0 = func_008F86F8((void *)0x1C, 0x10002010);
    temp_v0_2 = (temp_v0 >> 0x11) & 3;
    M2C_FIELD(arg0, s32 *, 0x150) = temp_v0_2;
    if (temp_v0_2 != 1) {
        func_00900500(arg0, ((void *)D_00901E50));
    }
    M2C_FIELD(arg0, s32 *, 0x14C) = (s32) ((temp_v0 >> 0x13) & 1);
    temp_s0 = temp_v0 >> 0x14;
    temp_s2 = func_008F86F8(arg0, 0x10) >> 8;
    if ((temp_s0 != 0x48) && (temp_s0 != 0x58) && (temp_s0 != 0x44)) {
        func_00900500(arg0, ((void *)D_00901E78));
    }
    M2C_FIELD(arg0, s32 *, 0x148) = (s32) (M2C_FIELD(arg0, s32 *, 0x148) + (temp_s2 << 0xA));
    M2C_FIELD(arg0, s32 *, 0x134) = (s32) ((((temp_v0 >> 0xF) & 3) << 0xC) | (M2C_FIELD(arg0, s32 *, 0x134) & 0xFFF));
    M2C_FIELD(arg0, s32 *, 0x138) = (s32) ((((temp_v0 >> 0xD) & 3) << 0xC) | (M2C_FIELD(arg0, s32 *, 0x138) & 0xFFF));
    M2C_FIELD(arg0, s32 *, 0x144) = (s32) (M2C_FIELD(arg0, s32 *, 0x144) + (((temp_v0 >> 1) & 0xFFF) << 0x12));
}
