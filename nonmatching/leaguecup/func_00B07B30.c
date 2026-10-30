/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229310(void);
M2C_UNK func_00B19F30(void *, u16, u16, void *, s32, s32); /* extern */
extern s32 D_003EAD5C;

void func_00B07B30(s32 arg0) {
    s32 temp_a4;
    u16 temp_a1;
    u16 temp_a2;
    void *temp_a3;
    void *temp_v0;
    void *temp_v1;

    temp_v0 = func_00229310();
    if (D_003EAD5C != 0) {
        temp_a4 = (arg0 & 0xFF) * 0x90;
        temp_a3 = temp_a4 + D_003EAD5C;
        M2C_FIELD(temp_a3, s32 *, 0x290) = (s32) M2C_FIELD(temp_v0, u16 *, 4);
        M2C_FIELD(temp_a3, s32 *, 0x29C) = (s32) M2C_FIELD(temp_v0, u16 *, 6);
        M2C_FIELD(temp_a3, s32 *, 0x294) = 0;
        M2C_FIELD(temp_a3, s32 *, 0x2A0) = 0;
        M2C_FIELD(temp_a3, s32 *, 0x298) = 0;
        M2C_FIELD(temp_a3, s32 *, 0x2A4) = 0;
        temp_a2 = M2C_FIELD(temp_v0, u16 *, 2);
        M2C_FIELD(temp_a3, u16 *, 0x286) = temp_a2;
        M2C_FIELD(temp_a3, s16 *, 0x284) = 0x35;
        temp_a1 = M2C_FIELD(temp_v0, u16 *, 2);
        M2C_FIELD(temp_a3, u16 *, 0x288) = temp_a1;
        if (M2C_FIELD(temp_v0, u16 *, 2) != 0xFFFF) {
            M2C_FIELD(temp_a3, s32 *, 0x28C) = 1;
        } else {
            M2C_FIELD(temp_a3, s32 *, 0x28C) = 0;
        }
        temp_v1 = temp_a4 + D_003EAD5C;
        M2C_FIELD(temp_v1, s8 *, 0x2C8) = 1;
        M2C_FIELD(temp_v1, s8 *, 0x2C9) = 0;
        M2C_FIELD(temp_v1, s32 *, 0x2BC) = 4;
        func_00B19F30(temp_a3 + 0x284, temp_a1, temp_a2, temp_a3, temp_a4, D_003EAD5C);
    }
}
