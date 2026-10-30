/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_006586A0[];
extern char D_006586A1[];
extern char D_006586A2[];
extern char D_00658740[];
extern char D_00658741[];
extern char D_00658742[];
extern char D_006587C0[];
extern char D_006587C1[];
extern char D_006587C2[];
extern char D_00658840[];
extern char D_00658841[];
extern char D_00658842[];
extern char D_006588C0[];
extern char D_006588C1[];
extern char D_006588C2[];
extern char D_00658940[];
extern char D_00658941[];
extern char D_00658942[];
extern char D_00658960[];
extern char D_00658961[];
extern char D_00658962[];
extern char D_00658970[];
extern char D_006589E0[];
extern char D_006589E1[];
extern char D_006589E2[];
extern char D_00658A00[];
extern char D_00658A01[];
extern char D_00658A02[];

void func_00639EA0(s32 arg0) {
    M2C_UNK *var_a5;
    s32 temp_v1;
    s32 var_a6;
    s8 temp_v1_2;
    s8 temp_v1_3;

    temp_v1 = arg0 & 0xFF;
    if (temp_v1 >= 0x23) {
        (*(s8 *)D_00658940) = 0x4F;
        (*(s8 *)D_00658941) = 0x50;
        (*(s8 *)D_00658942) = 0x54;
        (*(s8 *)D_00658960) = 0x4F;
        (*(s8 *)D_00658961) = 0x50;
        (*(s8 *)D_00658962) = 0x54;
        (*(s8 *)D_00658A00) = 0x4F;
        (*(s8 *)D_00658A01) = 0x50;
        (*(s8 *)D_00658A02) = 0x54;
        (*(s8 *)D_006589E0) = 0x4F;
        (*(s8 *)D_006589E1) = 0x50;
        (*(s8 *)D_006589E2) = 0x54;
        (*(s8 *)D_00658740) = 0x4F;
        (*(s8 *)D_006586A0) = 0x4F;
        (*(s8 *)D_006587C0) = 0x4F;
        (*(s8 *)D_00658741) = 0x50;
        (*(s8 *)D_006586A1) = 0x50;
        (*(s8 *)D_006587C1) = 0x50;
        (*(s8 *)D_00658742) = 0x54;
        (*(s8 *)D_006586A2) = 0x54;
        (*(s8 *)D_006587C2) = 0x54;
        return;
    }
    var_a6 = 2;
    var_a5 = ((void *)D_00658970);
    do {
        if (var_a6 != 6) {
            M2C_FIELD(var_a5, s8 *, 0x10) = (s8) (((arg0 & 0xFF) / 10) + ((u32) temp_v1 >> 0x1F) + 0x30);
            M2C_FIELD(var_a5, s8 *, 0x11) = (s8) ((temp_v1 % 10) + 0x30);
            M2C_FIELD(var_a5, s8 *, 0x12) = 0x30;
        }
        var_a6 += 1;
        var_a5 += 0x20;
    } while (var_a6 < 8);
    (*(s8 *)D_006588C2) = 0x30;
    (*(s8 *)D_00658842) = 0x30;
    (*(s8 *)D_006587C2) = 0x30;
    temp_v1_2 = ((arg0 & 0xFF) / 10) + ((u32) temp_v1 >> 0x1F) + 0x30;
    (*(s8 *)D_006588C0) = temp_v1_2;
    (*(s8 *)D_00658840) = temp_v1_2;
    (*(s8 *)D_006587C0) = temp_v1_2;
    temp_v1_3 = (temp_v1 % 10) + 0x30;
    (*(s8 *)D_006588C1) = temp_v1_3;
    (*(s8 *)D_00658841) = temp_v1_3;
    (*(s8 *)D_006587C1) = temp_v1_3;
}
