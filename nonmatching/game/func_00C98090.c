/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AAF40(void *, signed char);
extern void func_002BB820(int, int);
M2C_UNK func_001AAF50(void *, M2C_UNK);             /* extern */
M2C_UNK func_002BB870(u8, M2C_UNK);                 /* extern */
M2C_UNK func_002BBF20(M2C_UNK *);                   /* extern */
M2C_UNK func_002BC2B0(s16, u8);                     /* extern */
M2C_UNK func_00B24A80(M2C_UNK);                     /* extern */
M2C_UNK func_00B25220();                            /* extern */
M2C_UNK func_00B25C50(M2C_UNK);                     /* extern */
void *func_00B2A420(u8);                            /* extern */
extern char D_003B91B0[];
extern char D_00592740[];
extern void *D_00CB3300;
extern char D_00CBBDF6[];
extern char D_00CBBDF7[];
extern char D_00CBBDFD[];
extern char D_00CBBE05[];

void func_00C98090(void) {
    s16 temp_v1;
    s16 temp_v1_2;
    s16 var_a0;
    s32 var_s1;
    u16 temp_a1;
    u8 var_a1;
    void *temp_s0;

    var_s1 = 0;
    temp_s0 = func_00B2A420((*(u8 *)D_00CBBE05));
    if (((s32) (*(u8 *)D_00CBBDFD) >= 0xA) && ((temp_a1 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u16 *, 0x18), (temp_a1 == 0xD)) || (temp_a1 == 0xF) || (temp_a1 == 0x12) || (temp_a1 == 0x16))) {
        var_a1 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u8 *, 0x4C);
        if ((var_a1 != 0x22) && (var_a1 != 0x2B) && (var_a1 != 0x2A) && (var_a1 != 0x29) && (var_a1 != 0x27) && (var_a1 != 6) && (var_a1 != 0xF) && (var_a1 != 8) && (var_a1 != 0x2C) && (var_a1 != 0x2D) && (var_a1 != 0x2F) && (var_a1 != 0x2E)) {
            var_a0 = 0;
        } else {
            var_a0 = 1;
        }
        if (var_a0 != 0) {
            var_s1 = 1;
        } else {
            goto block_21;
        }
    } else {
block_21:
        var_a1 = (u8) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u16 *, 0x18);
        if ((var_a1 == 0xD) || (var_a1 == 0xF) || (var_a1 == 0x12) || (var_a0 = 0x16, (var_a1 == 0x16))) {
            var_a1 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u8 *, 0x4C);
            if ((var_a1 != 0x22) && (var_a1 != 0x2B) && (var_a1 != 0x2A) && (var_a1 != 0x29) && (var_a1 != 0x27) && (var_a1 != 6) && (var_a1 != 0xF) && (var_a1 != 8) && (var_a1 != 0x2C) && (var_a1 != 0x2D) && (var_a1 != 0x2F) && (var_a1 != 0x2E)) {
                var_a0 = 0;
            } else {
                var_a0 = 1;
            }
            if (var_a0 != 0) {
                if (!((*(u8 *)D_00CBBDFD) & 1)) {
                    var_a0 = M2C_FIELD(D_00CB3300, s16 *, 0x300);
                    temp_v1 = M2C_FIELD(D_00CB3300, s16 *, 0xC);
                    if (var_a0 < temp_v1) {
                        var_s1 = 1;
                    }
                    if (temp_v1 == var_a0) {
                        var_a0 = 2;
                        if ((*(u8 *)D_00CBBDF6) == 2) {
                            var_s1 = 1;
                            (*(u8 *)D_00CBBDF6) = 0;
                        }
                    }
                } else {
                    var_a0 = M2C_FIELD(D_00CB3300, s16 *, 0x300);
                    temp_v1_2 = M2C_FIELD(D_00CB3300, s16 *, 0xC);
                    if (temp_v1_2 < var_a0) {
                        var_s1 = 1;
                    }
                    if (temp_v1_2 == var_a0) {
                        var_a0 = 2;
                        if ((*(u8 *)D_00CBBDF7) == 2) {
                            var_s1 = 1;
                            (*(u8 *)D_00CBBDF7) = 0;
                        }
                    }
                }
            }
        }
    }
    if (var_s1 != 0) {
        func_002BC2B0(var_a0, var_a1);
        func_002BB870(M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u8 *, 0), 0x64);
        func_002BB820((s32) M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), u8 *, 0), 0x1D);
        func_002BBF20(((void *)D_003B91B0));
        func_001AAF50(*M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), void ***, 4), 0);
        func_001AAF40(*M2C_FIELD(M2C_FIELD(temp_s0, void **, 0), void ***, 4), 1);
        func_00B25220();
        func_00B24A80(0);
        func_00B25C50(0);
        (*(s8 *)D_00592740) = 3;
    }
}
