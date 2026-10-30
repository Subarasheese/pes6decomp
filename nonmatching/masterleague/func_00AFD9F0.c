/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_002297F0(s32);
extern u8 func_00225820(void);
extern void * func_00223C10(void);
extern void * func_00228A80(void);
M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_00931B90(s32, s32);                    /* extern */
M2C_UNK func_0094CE20(s32, s32);                    /* extern */
M2C_UNK func_0094CF00(s32, s32);                    /* extern */
M2C_UNK func_0094E4A0(s32, s32);                    /* extern */
void *func_00970870(s32);                           /* extern */
M2C_UNK func_009782E0(s32);                         /* extern */
M2C_UNK func_00978600(s32);                         /* extern */
s32 func_00AF97B0(s32, u8);                         /* extern */
s16 func_00B05280(s32, u16, u8);                    /* extern */

void func_00AFD9F0(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_v0_2;
    s32 temp_s0_2;
    s32 temp_s1_2;
    s32 temp_s6;
    s32 temp_s6_2;
    u16 temp_a1_2;
    u8 temp_a1;
    u8 temp_a2;
    u8 temp_v1;
    void *temp_s0;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;

    temp_s6 = ((arg0 & 0xFFFF) - 0x7000) & 0xFF;
    temp_s1 = func_002297F0(temp_s6);
    temp_s0 = func_00228A80();
    temp_s2 = func_00970870(arg0);
    if ((temp_s1 != NULL) && (temp_s0 != NULL) && (temp_s2 != NULL)) {
        temp_s6_2 = (temp_s6 & 0xFF) * 0x48;
        func_001C4730(temp_s0 + temp_s6_2 + 0x10BBC, temp_s1 + 4, 0x48);
        func_001C4730(temp_s2, temp_s1 + 4, 0x48);
        if (M2C_FIELD(temp_s2, u8 *, 0x22) == 0) {
            M2C_FIELD(temp_s2, u8 *, 0x22) = 0x30U;
            M2C_FIELD((temp_s6_2 + temp_s0), u8 *, 0x10BDE) = (u8) M2C_FIELD(temp_s2, u8 *, 0x22);
        }
        temp_v0 = func_00223C10();
        if (temp_v0 != NULL) {
            temp_a1 = M2C_FIELD(temp_v0, u8 *, 0);
            M2C_FIELD(temp_v0, u8 *, 0) = (u8) ((temp_a1 & ~0xF) | 2);
            temp_a2 = M2C_FIELD(temp_v0, u8 *, 1);
            temp_v1 = (temp_a2 & ~0xFC) | ((func_00AF97B0(arg0, temp_a1) & 0x3F) * 4);
            M2C_FIELD(temp_v0, u8 *, 1) = temp_v1;
            temp_a1_2 = (u16) M2C_FIELD(temp_v0, u8 *, 0);
            M2C_FIELD(temp_v0, u8 *, 0) = (s16) ((temp_a1_2 & ~0x3F0) | ((((u64) ((s64) temp_v1 << 0x38) >> 0x3A) & 0x3F) * 0x10));
            temp_v0_2 = func_00B05280(arg0, temp_a1_2, temp_a2);
            M2C_FIELD(temp_v0, s16 *, 4) = temp_v0_2;
            M2C_FIELD(temp_v0, s16 *, 2) = temp_v0_2;
            temp_s0_2 = arg1 & 0xFF;
            temp_s1_2 = func_00225820() & 0xFF;
            if ((temp_s0_2 < 0x50) && ((arg2 & 0xFF) < 0x20)) {
                func_009782E0(arg0);
                if (temp_s0_2 == (temp_s1_2 & 0xFF)) {
                    func_00978600(arg2);
                }
                func_00931B90(arg1, arg2 & 0xFF);
                func_0094E4A0(arg1, arg2);
                func_0094CF00(arg1, arg2);
                func_0094CE20(arg1, arg2);
            }
        }
    }
}
