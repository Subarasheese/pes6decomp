/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00591E00[];
extern char D_00591E19[];
extern char D_00591E24[];
extern char D_00592378[];
extern char D_005926D5[];

void func_0027D4E0(s8 arg0) {
    s32 temp_a5;
    s32 temp_a5_2;
    s32 temp_a5_3;
    s32 temp_a5_4;
    s32 temp_a5_5;
    s32 temp_a6;
    s32 temp_a6_2;
    s32 temp_a6_3;
    s32 temp_a7;
    s32 temp_t1;
    s32 temp_v1;
    s32 var_a4;
    u8 temp_t1_2;
    void *temp_a7_2;
    void *temp_t0;
    void *temp_t2;
    void *temp_t3;
    void *temp_t8;

    var_a4 = 0;
    do {
        temp_a5 = var_a4 & 0xFF;
        temp_a7 = 8 - temp_a5;
        temp_a6 = (var_a4 + 1) & 0xFF;
        temp_a5_2 = 9 - temp_a5;
        M2C_FIELD((((void *)D_00591E00) + temp_a5_2), u8 *, 0x19) = (u8) M2C_FIELD((((void *)D_00591E00) + temp_a7), u8 *, 0x19);
        temp_a5_3 = 8 - temp_a6;
        temp_a6_2 = 9 - temp_a6;
        temp_t8 = ((void *)D_00591E00) + temp_a6_2;
        temp_t3 = ((void *)D_00591E00) + (temp_a5_3 * 4);
        temp_t2 = ((void *)D_00591E00) + (temp_a6_2 * 4);
        M2C_FIELD((((void *)D_00591E00) + (temp_a5_2 * 4)), s32 *, 0x24) = (s32) M2C_FIELD((((void *)D_00591E00) + (temp_a7 * 4)), s32 *, 0x24);
        temp_a6_3 = (var_a4 + 2) & 0xFF;
        temp_t1 = 9 - temp_a6_3;
        temp_a5_4 = 8 - temp_a6_3;
        temp_a7_2 = ((void *)D_00591E00) + temp_t1;
        temp_v1 = temp_t1 * 4;
        temp_t1_2 = M2C_FIELD((((void *)D_00591E00) + temp_a5_3), u8 *, 0x19);
        temp_t0 = ((void *)D_00591E00) + temp_a5_4;
        temp_a5_5 = temp_a5_4 * 4;
        var_a4 = (var_a4 + 3) & 0xFF;
        M2C_FIELD(temp_t8, u8 *, 0x19) = temp_t1_2;
        M2C_FIELD(temp_t2, s32 *, 0x24) = (s32) M2C_FIELD(temp_t3, s32 *, 0x24);
        M2C_FIELD(temp_a7_2, u8 *, 0x19) = (u8) M2C_FIELD(temp_t0, u8 *, 0x19);
        M2C_FIELD((((void *)D_00591E00) + temp_v1), s32 *, 0x24) = (s32) M2C_FIELD((((void *)D_00591E00) + temp_a5_5), s32 *, 0x24);
    } while (var_a4 < 9);
    (*(s8 *)D_00591E19) = arg0;
    (*(s32 *)D_00591E24) = 0;
    (*(s8 *)D_005926D5) = 0;
    (*(s8 *)D_00592378) = 0;
}
