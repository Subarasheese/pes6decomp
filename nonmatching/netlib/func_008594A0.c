/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s16 func_008440F0(void);
void *func_008472C0();                              /* extern */
s16 *func_008472D0(void *, void *, s16);            /* extern */
extern char D_008B144E[];

void func_008594A0(void *arg0) {
    s16 temp_a2;
    s16 temp_a2_2;
    s16 temp_s4;
    s16 temp_s4_2;
    s32 var_s3;
    s8 temp_v0;
    s8 temp_v0_2;
    s8 temp_v1;
    u8 temp_v1_2;
    u8 temp_v1_3;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a1;
    void *temp_a1_2;
    void *var_s1;
    void *var_s2;

    if (M2C_FIELD(arg0, s8 *, 0xFD) == 0) {
        M2C_FIELD(arg0, s8 *, 0xFA) = 0;
        M2C_FIELD(arg0, s8 *, 0xFC) = 0;
        M2C_FIELD(arg0, s8 *, 0xF8) = 0;
        M2C_FIELD(arg0, s8 *, 0xF9) = 0;
    }
    M2C_FIELD(arg0, s8 *, 0xFB) = 0;
    var_s1 = func_008472C0();
    var_s3 = 1;
    var_s2 = arg0;
    do {
        M2C_FIELD(var_s2, s8 *, 0xC) = 0;
        M2C_FIELD(var_s2, s8 *, 0xD) = 0;
        M2C_FIELD(var_s2, s8 *, 0xE) = 0;
        M2C_FIELD(var_s2, s8 *, 0xF) = 0;
        M2C_FIELD(var_s2, s8 *, 0x10) = 0;
        M2C_FIELD(var_s2, s8 *, 0x11) = 0;
        M2C_FIELD(var_s2, s8 *, 0x12) = 0;
        M2C_FIELD(var_s2, s8 *, 0x13) = 0;
        M2C_FIELD(var_s2, s8 *, 0x14) = 0;
        M2C_FIELD(var_s2, s8 *, 0x15) = 0;
        M2C_FIELD(var_s2, s8 *, 0x16) = 0;
        M2C_FIELD(var_s2, s8 *, 0x17) = 0;
        M2C_FIELD(var_s2, s8 *, 0x18) = 0;
        temp_v1 = M2C_FIELD(var_s2, s8 *, 8);
        switch (temp_v1) {                          /* irregular */
        case 0:
            break;
        case 1:
            if (M2C_FIELD(arg0, s8 *, 0xFD) == 0) {
                M2C_FIELD(var_s2, s32 *, 4) = (s32) M2C_FIELD(var_s1, s32 *, 4);
                M2C_FIELD(var_s2, u8 *, 0xB) = 0U;
                temp_v1_2 = M2C_FIELD(var_s2, u8 *, 0xB);
                temp_a2 = M2C_FIELD(var_s2, s16 *, 0);
                temp_a0 = arg0 + temp_v1_2;
                temp_a1 = arg0 + (temp_v1_2 * 8);
                temp_v0 = M2C_FIELD(temp_a0, s8 *, 0xF8);
                M2C_FIELD(temp_a0, s8 *, 0xF8) = (s8) (temp_v0 + 1);
                M2C_FIELD((temp_a1 + (temp_v0 * 2)), s16 *, 0xE0) = temp_a2;
                M2C_FIELD(arg0, s8 *, 0xFA) = (s8) (M2C_FIELD(arg0, s8 *, 0xFA) + 1);
                temp_s4 = M2C_FIELD(var_s2, s16 *, 0);
                if (temp_s4 == *func_008472D0(temp_a0, temp_a1, temp_a2)) {
                    (*(u8 *)D_008B144E) = M2C_FIELD(var_s2, u8 *, 0xB);
                }
            }
            break;
        case 2:
            if (M2C_FIELD(arg0, s8 *, 0xFD) == 0) {
                M2C_FIELD(var_s2, s32 *, 4) = (s32) M2C_FIELD(var_s1, s32 *, 4);
                M2C_FIELD(var_s2, u8 *, 0xB) = 1U;
                temp_v1_3 = M2C_FIELD(var_s2, u8 *, 0xB);
                temp_a2_2 = M2C_FIELD(var_s2, s16 *, 0);
                temp_a0_2 = arg0 + temp_v1_3;
                temp_a1_2 = arg0 + (temp_v1_3 * 8);
                temp_v0_2 = M2C_FIELD(temp_a0_2, s8 *, 0xF8);
                M2C_FIELD(temp_a0_2, s8 *, 0xF8) = (s8) (temp_v0_2 + 1);
                M2C_FIELD((temp_a1_2 + (temp_v0_2 * 2)), s16 *, 0xE0) = temp_a2_2;
                M2C_FIELD(arg0, s8 *, 0xFA) = (s8) (M2C_FIELD(arg0, s8 *, 0xFA) + 1);
                temp_s4_2 = M2C_FIELD(var_s2, s16 *, 0);
                if (temp_s4_2 == *func_008472D0(temp_a0_2, temp_a1_2, temp_a2_2)) {
                    (*(u8 *)D_008B144E) = M2C_FIELD(var_s2, u8 *, 0xB);
                }
            }
            break;
        case 3:
            M2C_FIELD(var_s2, s32 *, 4) = (s32) M2C_FIELD(var_s1, s32 *, 4);
            M2C_FIELD(arg0, s8 *, 0xFB) = (s8) (M2C_FIELD(arg0, s8 *, 0xFB) + 1);
            break;
        }
        var_s3 += 1;
        var_s1 += 0x88;
        var_s2 += 0x1C;
    } while (var_s3 < 9);
    M2C_FIELD(arg0, s8 *, 0xFC) = (s8) (M2C_FIELD(arg0, s8 *, 0xFA) + M2C_FIELD(arg0, s8 *, 0xFB));
    M2C_FIELD(arg0, s16 *, 0xF4) = func_008440F0();
    M2C_FIELD(arg0, s8 *, 0xFD) = 1;
    M2C_FIELD(arg0, s8 *, 0xFE) = 0;
}
