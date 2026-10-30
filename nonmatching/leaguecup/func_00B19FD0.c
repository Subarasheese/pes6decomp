/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_0022C140(s32);
extern u8 func_0022BC60(s32);
extern s32 func_0022BAC0(s32);
s8 func_00225940(u8);                               /* extern */
void *func_0022BFF0(s32, s32);                      /* extern */
M2C_UNK func_00B19B50(void *);                      /* extern */
M2C_UNK func_00B19C20(void *);                      /* extern */
M2C_UNK func_00B19D80(void *);                      /* extern */
M2C_UNK func_00B19DF0(void *);                      /* extern */
M2C_UNK func_00B19EC0(void *);                      /* extern */

void func_00B19FD0(void *arg0, s8 arg1, s32 arg2) {
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_s1;
    s32 temp_s2;
    s32 temp_s7;
    s32 var_s3;
    void *temp_v0;

    temp_s0 = func_00225820() & 0xFF;
    if (arg0 != NULL) {
        temp_s1 = temp_s0 & 0xFF;
        temp_s7 = func_0022C140(arg2);
        var_s3 = 0;
        temp_s2 = arg1 & 0xFF;
loop_28:
        if ((var_s3 & 0xFF) < (s32) M2C_FIELD(temp_s7, u8 *, 5)) {
            if (M2C_FIELD(arg0, u16 *, 0) == 0xFFFF) {
                temp_v0 = func_0022BFF0(arg2, var_s3);
                if (M2C_FIELD(temp_v0, u8 *, 0) == temp_s2) {
                    if ((temp_s1 == (func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 6)) & 0xFF)) || (temp_s1 == (func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 5)) & 0xFF))) {
                        if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x17) << 0x3C) >> 0x3F) == 1) {
                            M2C_FIELD(arg0, s8 *, 0x46) = 1;
                        }
                        if (M2C_FIELD(arg0, s32 *, 0x38) == 3) {
                            M2C_FIELD(arg0, u16 *, 0) = func_0022BAC0((s32) M2C_FIELD(temp_v0, u8 *, 6));
                            M2C_FIELD(arg0, s16 *, 2) = func_0022BAC0((s32) M2C_FIELD(temp_v0, u8 *, 5));
                            if (temp_s1 == (func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 6)) & 0xFF)) {
                                M2C_FIELD(arg0, s16 *, 4) = func_0022BAC0((s32) M2C_FIELD(temp_v0, u8 *, 5));
                            } else {
                                M2C_FIELD(arg0, s16 *, 4) = func_0022BAC0((s32) M2C_FIELD(temp_v0, u8 *, 6));
                            }
                            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(temp_v0, u8 *, 0x10) + M2C_FIELD(temp_v0, u8 *, 0x11));
                            M2C_FIELD(arg0, s32 *, 0x10) = (s32) (M2C_FIELD(temp_v0, u8 *, 0x12) + M2C_FIELD(temp_v0, u8 *, 0x13));
                            M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(temp_v0, u8 *, 0x14);
                            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(temp_v0, u8 *, 0xB) + M2C_FIELD(temp_v0, u8 *, 0xC));
                            M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_v0, u8 *, 0xD) + M2C_FIELD(temp_v0, u8 *, 0xE));
                            M2C_FIELD(arg0, s32 *, 0x20) = (s32) M2C_FIELD(temp_v0, u8 *, 0xF);
                            M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(temp_v0, u8 *, 9) + M2C_FIELD(temp_v0, u8 *, 0xA));
                            M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(temp_v0, u8 *, 7) + M2C_FIELD(temp_v0, u8 *, 8));
                            if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x16) << 0x38) >> 0x3F) != 0) {
                                M2C_FIELD(arg0, s32 *, 8) = 1;
                            } else {
                                M2C_FIELD(arg0, s32 *, 8) = 0;
                            }
                            M2C_FIELD(arg0, s8 *, 0x44) = func_00225940(func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 6)));
                            M2C_FIELD(arg0, s8 *, 0x45) = func_00225940(func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 5)));
                        } else {
                            M2C_FIELD(arg0, u16 *, 0) = func_0022BAC0((s32) M2C_FIELD(temp_v0, u8 *, 5));
                            M2C_FIELD(arg0, s16 *, 2) = func_0022BAC0((s32) M2C_FIELD(temp_v0, u8 *, 6));
                            if (temp_s1 == (func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 6)) & 0xFF)) {
                                M2C_FIELD(arg0, s16 *, 4) = func_0022BAC0((s32) M2C_FIELD(temp_v0, u8 *, 5));
                            } else {
                                M2C_FIELD(arg0, s16 *, 4) = func_0022BAC0((s32) M2C_FIELD(temp_v0, u8 *, 6));
                            }
                            M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(temp_v0, u8 *, 7) + M2C_FIELD(temp_v0, u8 *, 8));
                            M2C_FIELD(arg0, s32 *, 0x10) = 0;
                            M2C_FIELD(arg0, s32 *, 0x14) = 0;
                            M2C_FIELD(arg0, s32 *, 0x18) = (s32) (M2C_FIELD(temp_v0, u8 *, 9) + M2C_FIELD(temp_v0, u8 *, 0xA));
                            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
                            M2C_FIELD(arg0, s32 *, 0x20) = 0;
                            if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x16) << 0x39) >> 0x3F) != 0) {
                                M2C_FIELD(arg0, s32 *, 8) = 1;
                            } else {
                                M2C_FIELD(arg0, s32 *, 8) = 0;
                            }
                            M2C_FIELD(arg0, s8 *, 0x44) = func_00225940(func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 5)));
                            M2C_FIELD(arg0, s8 *, 0x45) = func_00225940(func_0022BC60((s32) M2C_FIELD(temp_v0, u8 *, 6)));
                        }
                    } else {
                        M2C_FIELD(arg0, u16 *, 0) = 0xFFFFU;
                        M2C_FIELD(arg0, s16 *, 2) = 0xFFFF;
                        M2C_FIELD(arg0, s16 *, 4) = 0xFFFF;
                    }
                }
                var_s3 = (var_s3 + 1) & 0xFF;
                goto loop_28;
            }
        }
        M2C_FIELD(arg0, s8 *, 0x34) = arg1;
        M2C_FIELD(arg0, s8 *, 0x35) = (s8) ((s32) (temp_s2 + 1) % 2);
        if (arg0 != NULL) {
            temp_a0 = M2C_FIELD(arg0, s32 *, 0x38);
            switch (temp_a0) {                      /* irregular */
            case 3:
                func_00B19C20(arg0);
                break;
            case 2:
                func_00B19D80(arg0);
                break;
            case 1:
                func_00B19DF0(arg0);
                break;
            case 4:
            case 0:
                func_00B19EC0(arg0);
                break;
            }
            func_00B19B50(arg0);
        }
    }
}
