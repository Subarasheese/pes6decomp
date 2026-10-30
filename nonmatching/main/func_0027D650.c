/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern void *Pes6Ball_Current;
extern char D_00591E19[];

void func_0027D650(s8 arg0) {
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_a3;
    s32 temp_a3_2;
    s32 temp_a3_3;
    s32 temp_a3_4;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_a4_3;
    s32 temp_a5;
    s32 temp_a5_3;
    s32 temp_a5_4;
    s32 temp_a6;
    s32 temp_a6_2;
    s32 temp_a6_3;
    s32 temp_a6_4;
    s32 temp_a6_5;
    s32 temp_a7;
    s32 temp_a7_2;
    s32 temp_a7_3;
    s32 temp_t0_2;
    s32 temp_t1_2;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t3;
    s32 temp_t3_2;
    s32 temp_t8;
    s32 temp_t9;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_a2;
    s32 var_a2_2;
    s32 var_a4;
    u16 temp_a1;
    u16 temp_s1;
    u8 temp_a5_2;
    u8 temp_t1;
    void *temp_a4_4;
    void *temp_s0;
    void *temp_t0;

    if (M2C_FIELD(Pes6Ball_Current, u8 *, 0x96) != (*(u8 *)D_00591E19)) {
        var_a2 = 0;
        do {
            temp_a3 = var_a2 & 0xFF;
            temp_a4 = (var_a2 + 1) & 0xFF;
            temp_a3_2 = (var_a2 + 2) & 0xFF;
            temp_a7 = 8 - temp_a4;
            temp_a6 = 9 - temp_a4;
            temp_a5 = 8 - temp_a3_2;
            temp_a4_2 = 9 - temp_a3_2;
            temp_t1 = M2C_FIELD((Pes6Ball_Current + (8 - temp_a3)), u8 *, 0xE0);
            temp_t0 = Pes6Ball_Current + (9 - temp_a3);
            var_a2 = (var_a2 + 3) & 0xFF;
            M2C_FIELD(temp_t0, u8 *, 0xE0) = temp_t1;
            M2C_FIELD((Pes6Ball_Current + temp_a6), u8 *, 0xE0) = (u8) M2C_FIELD((Pes6Ball_Current + temp_a7), u8 *, 0xE0);
            M2C_FIELD((Pes6Ball_Current + temp_a4_2), u8 *, 0xE0) = (u8) M2C_FIELD((Pes6Ball_Current + temp_a5), u8 *, 0xE0);
        } while (var_a2 < 9);
        M2C_FIELD(Pes6Ball_Current, s8 *, 0xE0) = arg0;
    }
    if (M2C_FIELD(Pes6Ball_Current, u8 *, 0x96) == (*(u8 *)D_00591E19)) {
        if (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) != (arg0 & 0xFF)) {
            goto block_7;
        }
    } else {
block_7:
        var_a2_2 = 0;
        do {
            temp_a3_3 = var_a2_2 & 0xFF;
            temp_t3 = 8 - temp_a3_3;
            temp_t2 = 9 - temp_a3_3;
            temp_a4_3 = (var_a2_2 + 1) & 0xFF;
            temp_t1_2 = 8 - temp_a4_3;
            temp_a3_4 = (var_a2_2 + 2) & 0xFF;
            temp_t0_2 = 9 - temp_a4_3;
            temp_a7_2 = 8 - temp_a3_4;
            temp_a6_2 = 9 - temp_a3_4;
            temp_a4_4 = Pes6Ball_Current + temp_t2;
            temp_a5_2 = M2C_FIELD((Pes6Ball_Current + temp_t3), u8 *, 0x8C);
            var_a2_2 = (var_a2_2 + 3) & 0xFF;
            M2C_FIELD(temp_a4_4, u8 *, 0x8C) = temp_a5_2;
            M2C_FIELD((Pes6Ball_Current + temp_t2), u8 *, 0x96) = (u8) M2C_FIELD((Pes6Ball_Current + temp_t3), u8 *, 0x96);
            M2C_FIELD((Pes6Ball_Current + temp_t0_2), u8 *, 0x8C) = (u8) M2C_FIELD((Pes6Ball_Current + temp_t1_2), u8 *, 0x8C);
            M2C_FIELD((Pes6Ball_Current + temp_t0_2), u8 *, 0x96) = (u8) M2C_FIELD((Pes6Ball_Current + temp_t1_2), u8 *, 0x96);
            M2C_FIELD((Pes6Ball_Current + temp_a6_2), u8 *, 0x8C) = (u8) M2C_FIELD((Pes6Ball_Current + temp_a7_2), u8 *, 0x8C);
            M2C_FIELD((Pes6Ball_Current + temp_a6_2), u8 *, 0x96) = (u8) M2C_FIELD((Pes6Ball_Current + temp_a7_2), u8 *, 0x96);
        } while (var_a2_2 < 9);
        M2C_FIELD(Pes6Ball_Current, s8 *, 0x8C) = arg0;
        M2C_FIELD(Pes6Ball_Current, u8 *, 0) = (u8) (*(u8 *)D_00591E19);
    }
    temp_a1 = arg0 & 0xFF;
    if (M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) != temp_a1) {
        if (M2C_FIELD(Pes6Ball_Current, s32 *, 0x88) == 0) {
            M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) = temp_a1;
            return;
        }
        var_a4 = 0;
        do {
            temp_v1 = var_a4 & 0xFF;
            temp_a1_2 = 8 - temp_v1;
            temp_v1_2 = 9 - temp_v1;
            temp_a1_3 = temp_a1_2 * 4;
            temp_v1_3 = temp_v1_2 * 4;
            temp_a6_3 = (var_a4 + 1) & 0xFF;
            temp_s0 = Pes6Ball_Current + (temp_v1_2 * 2);
            temp_s1 = M2C_FIELD((Pes6Ball_Current + (temp_a1_2 * 2)), u16 *, 0xA4);
            temp_a7_3 = 8 - temp_a6_3;
            temp_a6_4 = 9 - temp_a6_3;
            temp_t9 = temp_a7_3 * 2;
            temp_t8 = temp_a6_4 * 2;
            temp_t3_2 = temp_a7_3 * 4;
            temp_t2_2 = temp_a6_4 * 4;
            temp_a5_3 = (var_a4 + 2) & 0xFF;
            temp_a6_5 = 8 - temp_a5_3;
            var_a4 = (var_a4 + 3) & 0xFF;
            temp_a5_4 = 9 - temp_a5_3;
            M2C_FIELD(temp_s0, u16 *, 0xA4) = temp_s1;
            M2C_FIELD((Pes6Ball_Current + temp_v1_3), s32 *, 0xB8) = (s32) M2C_FIELD((Pes6Ball_Current + temp_a1_3), s32 *, 0xB8);
            M2C_FIELD((Pes6Ball_Current + temp_t8), u16 *, 0xA4) = (u16) M2C_FIELD((Pes6Ball_Current + temp_t9), u16 *, 0xA4);
            M2C_FIELD((Pes6Ball_Current + temp_t2_2), s32 *, 0xB8) = (s32) M2C_FIELD((Pes6Ball_Current + temp_t3_2), s32 *, 0xB8);
            M2C_FIELD((Pes6Ball_Current + (temp_a5_4 * 2)), u16 *, 0xA4) = (u16) M2C_FIELD((Pes6Ball_Current + (temp_a6_5 * 2)), u16 *, 0xA4);
            M2C_FIELD((Pes6Ball_Current + (temp_a5_4 * 4)), s32 *, 0xB8) = (s32) M2C_FIELD((Pes6Ball_Current + (temp_a6_5 * 4)), s32 *, 0xB8);
        } while (var_a4 < 9);
        M2C_FIELD(Pes6Ball_Current, s16 *, 0xA4) = (s16) (u8) M2C_FIELD(Pes6Ball_Current, u16 *, 0x84);
        M2C_FIELD(Pes6Ball_Current, s32 *, 0xB8) = (s32) M2C_FIELD(Pes6Ball_Current, s32 *, 0x88);
        M2C_FIELD(Pes6Ball_Current, u16 *, 0x84) = (u16) (arg0 & 0xFF);
        M2C_FIELD(Pes6Ball_Current, s32 *, 0x88) = 0;
    }
}
