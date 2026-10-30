/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F84D0(void *, void *);
extern s32 func_00BC57E0(s32, s32, s32);
M2C_UNK func_001C4730(void *, s32, M2C_UNK);        /* extern */
M2C_UNK func_001C48E8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00BC5740(u16);                             /* extern */
s32 func_00BC5B80(u16);                             /* extern */
s16 func_00BC5B90(u16, s32);                        /* extern */
s32 func_00BC5BF0(u16, s32);                        /* extern */
void *func_00BC5D90(u16, s32);                      /* extern */

void func_00BF5660(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a0_2;
    void *temp_s0;

    func_001C48E8(0, 0x7C);
    func_001F84D0(func_00BC5D90(M2C_FIELD(arg0, u16 *, 0x80), arg1), arg0);
    func_001C4730(arg0 + 0x20, func_00BC5BF0(M2C_FIELD(arg0, u16 *, 0x80), arg1), 0xF);
    M2C_FIELD(arg0, s16 *, 0x30) = func_00BC5B90(M2C_FIELD(arg0, u16 *, 0x80), arg1);
    func_001C4730(arg0 + 0x34, func_00BC5B80(M2C_FIELD(arg0, u16 *, 0x80)), 0x48);
    temp_s0 = arg0 + 0x34;
    if (func_00BC5740(M2C_FIELD(arg0, u16 *, 0x80)) == 0) {
        temp_a0 = arg1 & 0xFFFF;
        M2C_FIELD(arg0, s32 *, 0x7C) = 1;
        if ((temp_a0 != 0x11A) && (temp_a0 != 0xFFFF) && (temp_a0 != 0x117) && (temp_a0 != 0x116) && (temp_a0 != 0x115) && (temp_a0 != 0x114) && (temp_a0 != 0x113) && (temp_a0 != 0x11D) && (temp_a0 != 0x11C)) {
            M2C_FIELD(temp_s0, s8 *, 0x3B) = func_00BC57E0((s32) M2C_FIELD(arg0, u16 *, 0x80), arg1, 0);
        } else {
            M2C_FIELD(temp_s0, s8 *, 0x3B) = 0xFF;
        }
    } else {
        temp_a0_2 = arg1 & 0xFFFF;
        M2C_FIELD(temp_s0, u8 *, 1) = (u8) ((M2C_FIELD(temp_s0, u8 *, 1) & ~0xF0) | 0xD0);
        if ((temp_a0_2 != 0x11C) && (temp_a0_2 != 0x11D)) {
            M2C_FIELD(arg0, s32 *, 0x7C) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x7C) = 1;
        }
        M2C_FIELD(temp_s0, s8 *, 0x3B) = 0xFF;
    }
    M2C_FIELD(arg0, s16 *, 0x82) = 0xFFFF;
}
