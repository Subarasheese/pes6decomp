/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB7F0(s32);
extern s32 func_00BBB8C0(s32);
extern s32 func_009B30B0(s32, s32);
extern void func_00BC8C30(s8);
M2C_UNK func_00284AB0(void *, s32, s32, s32, M2C_UNK, void *); /* extern */
M2C_UNK func_00994AC0(void *, s32);                 /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E79[];
extern char D_00591F30[];
extern char D_005926D8[];
extern char D_005926E4[];

void func_009BECB0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    f32 var_f0;
    f32 var_f0_2;
    f32 var_f0_3;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_a0_4;
    s32 temp_a0_5;
    s32 temp_a1;
    s32 temp_a1_2;
    s32 temp_a2;
    s32 temp_s0;
    s32 temp_s4;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s32 temp_v0_5;
    s32 temp_v0_6;
    s32 temp_v0_7;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 var_a0;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s1;
    s32 var_s4_2;
    s32 var_s4_3;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1_2;
    s32 var_v1_3;
    s8 var_a0_2;
    u16 temp_v0;
    u32 var_v1;
    u8 temp_v0_2;
    void *var_s4;

    var_s1 = arg2;
    if ((M2C_FIELD(arg0, u8 *, 0x10) == 0) && (M2C_FIELD(arg0, u8 *, 0) != 0) && ((s32) M2C_FIELD(arg0, u8 *, 0x16) >= 0x80)) {
        temp_a1 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
        if (temp_a1 >= 0x4001) {
            var_a0 = 0x1B;
            if ((*(u8 *)D_00591E79) == 8) {
                var_a0 = 0x25 & 0xFF;
            }
            var_a0_2 = (var_a0 + ((((temp_a1 - 0x4000) / 1536) + ((u32) (temp_a1 - 0x4000) >> 0x1F)) & 0xFF)) & 0xFF;
            if (var_a0_2 >= 0x29) {
                var_a0_2 = 0x28;
            }
            temp_v0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
            if ((temp_v0 != 0x273) && (temp_v0 != 0x272) && (temp_v0 != 0x271) && (temp_v0 != 0x270) && (temp_v0 != 0x26F) && (temp_v0 != 0x26E) && (temp_v0 != 0x26D) && (temp_v0 != 0x26C) && (temp_v0 != 0x26B) && (temp_v0 != 0x26A) && (temp_v0 != 0x25C) && (temp_v0 != 0x3E5) && (temp_v0 != 0x3E4) && (temp_v0 != 0x3E3) && (temp_v0 != 0x3E2) && (temp_v0 != 0x3E1) && (temp_v0 != 0x3E0) && (temp_v0 != 0x3DF) && (temp_v0 != 0x3DE) && (temp_v0 != 0x3DD) && (temp_v0 != 0x3DC) && (temp_v0 != 0x3DB) && (temp_v0 != 0x3DA) && (temp_v0 != 0x3D9) && (temp_v0 != 0x3D8) && (temp_v0 != 0x3D1) && (temp_v0 != 0x3D0) && (temp_v0 != 0x3CF) && (temp_v0 != 0x3CE) && (temp_v0 != 0x3CD) && (temp_v0 != 0x3CC) && (temp_v0 != 0x3CB) && (temp_v0 != 0x3CA) && (temp_v0 != 0x3C9) && (temp_v0 != 0x3C8) && (temp_v0 != 0x3C7) && (temp_v0 != 0x3C6) && (temp_v0 != 0x3C5) && (temp_v0 != 0x3C4) && (temp_v0 != 0x3C3)) {

            } else {
                var_a0_2 = 0x46;
            }
            func_00BC8C30(var_a0_2);
        }
    }
    if (var_s1 >= 0x51) {
        var_s1 = 0x50;
    } else if (var_s1 < -0x50) {
        var_s1 = -0x50;
    }
    if ((arg4 != 0x11) && (arg4 != 0x12) && (arg4 != 0) && (arg4 != 6)) {
        temp_v0_2 = *(u8 *)0x5926E4;
        if ((s32) temp_v0_2 >= 0) {
            var_f0 = (f32) temp_v0_2;
        } else {
            var_f0 = 2.0f * (f32) ((temp_v0_2 >> 1) | (temp_v0_2 & 1));
        }
        if ((*(f32 *)D_005926D8) <= var_f0) {
            var_s4 = Pes6Ball_Current;
            temp_v1 = func_00BBB8C0(0xA) + 0x50;
            temp_v0_3 = M2C_FIELD(var_s4, s32 *, 0x50);
            var_v1 = (u32) (temp_v0_3 * temp_v1) >> 0x1F;
            var_v0 = (temp_v0_3 * temp_v1) / 100;
        } else {
            var_s4 = Pes6Ball_Current;
            temp_a0 = M2C_FIELD(var_s4, s32 *, 0x50);
            var_v1 = (u32) (temp_a0 * 0x50) >> 0x1F;
            var_v0 = (temp_a0 * 0x50) / 100;
        }
    } else {
        if ((s32) (*(u8 *)D_005926E4) >= 0) {
            var_f0_2 = (f32) (*(u8 *)D_005926E4);
        } else {
            var_f0_2 = 2.0f * (f32) (((u8) (*(u8 *)D_005926E4) >> 1) | ((*(u8 *)D_005926E4) & 1));
        }
        if ((*(f32 *)D_005926D8) <= var_f0_2) {
            var_s4 = Pes6Ball_Current;
            temp_v1_2 = func_00BBB8C0(0xA) + 0x50;
            temp_v0_4 = M2C_FIELD(var_s4, s32 *, 0x50);
            var_v1 = (u32) (temp_v0_4 * temp_v1_2) >> 0x1F;
            var_v0 = (temp_v0_4 * temp_v1_2) / 100;
        } else {
            var_s4 = Pes6Ball_Current;
            if (M2C_FIELD(var_s4, f32 *, 0x30) < 6016.0f) {
                temp_v1_3 = func_00BBB8C0(0x1E) + 0x32;
                temp_v0_5 = M2C_FIELD(var_s4, s32 *, 0x50);
                var_v1 = (u32) (temp_v0_5 * temp_v1_3) >> 0x1F;
                var_v0 = (temp_v0_5 * temp_v1_3) / 100;
            } else {
                temp_a0_2 = M2C_FIELD(var_s4, s32 *, 0x50);
                var_v1 = (u32) (temp_a0_2 * 0x50) >> 0x1F;
                var_v0 = (temp_a0_2 * 0x50) / 100;
            }
        }
    }
    temp_a0_3 = var_v0 + var_v1;
    temp_s4 = ((temp_a0_3 * 0x5A) / 100) + ((u32) (temp_a0_3 * 0x5A) >> 0x1F);
    temp_v1_4 = (func_009B30B0(arg1, (s32) M2C_FIELD(var_s4, u16 *, 0x58)) & 0xFFFF) + 0x80;
    var_v0_2 = temp_v1_4 >> 1;
    if (temp_v1_4 < 0) {
        var_v0_2 = (s32) (temp_v1_4 + 1) >> 1;
    }
    temp_v0_6 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
    if (temp_v0_6 < 0x3000) {
        var_a1 = 0xB4;
    } else {
        temp_a0_4 = temp_v0_6 - 0x3000;
        var_a1_2 = temp_a0_4 >> 8;
        if (temp_a0_4 < 0) {
            var_a1_2 = (s32) (temp_a0_4 + 0xFF) >> 8;
        }
        var_a1 = 0xB4 - var_a1_2;
    }
    temp_a0_5 = var_v0_2 & 0xFFFF & 0xFFFF;
    temp_a2 = (((temp_a0_5 * var_a1) / 100) + ((u32) (temp_a0_5 * var_a1) >> 0x1F)) & 0xFFFF;
    if (temp_v0_6 >= 0x2001) {
        if ((s32) (*(u8 *)D_005926E4) >= 0) {
            var_f0_3 = (f32) (*(u8 *)D_005926E4);
        } else {
            var_f0_3 = 2.0f * (f32) (((u8) (*(u8 *)D_005926E4) >> 1) | ((*(u8 *)D_005926E4) & 1));
        }
        if (!((*(f32 *)D_005926D8) <= var_f0_3)) {
            var_s4_2 = (s32) (temp_s4 << 7) / (s32) ((temp_a2 & 0xFFFF) + 0x80);
        } else {
            goto block_92;
        }
    } else {
block_92:
        var_s4_2 = (s32) (temp_s4 << 7) / (s32) (((u32) (temp_a2 & 0xFFFF) >> 1) + 0x80);
    }
    var_a0_3 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
    if (var_a0_3 <= 0) {
        var_a0_3 = -var_a0_3;
    }
    var_v1_2 = var_s1 * 0xBC;
    if (var_v1_2 <= 0) {
        var_v1_2 = -var_v1_2;
    }
    temp_a1_2 = var_v1_2 - var_a0_3;
    var_s4_3 = (var_s4_2 - (((temp_a1_2 * 7) / 10) + ((u32) (temp_a1_2 * 7) >> 0x1F))) + arg3;
    if (var_s4_3 >= 0x5801) {
        var_s4_3 = 0x5800;
    }
    if (temp_v0_6 >= 0xC0) {
        if (var_s4_3 < 0xC0) {
            var_s4_3 = 0xC0;
        }
    } else {
        var_v1_3 = temp_v0_6 >> 1;
        if (temp_v0_6 < 0) {
            var_v1_3 = (s32) (temp_v0_6 + 1) >> 1;
        }
        if (var_s4_3 < var_v1_3) {
            var_s4_3 = var_v1_3;
        }
    }
    M2C_FIELD(Pes6Ball_Current, s8 *, 0x6C) = (s8) ((((M2C_FIELD(Pes6Ball_Current, u16 *, 0x58) - (arg1 & 0xFFFF)) + 0x10000) & 0xFFFF) < 0x8001);
    M2C_FIELD(Pes6Ball_Current, s16 *, 0x6A) = (s16) (func_00BBB8C0(0x22) + 0x22);
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = (s32) (-0x400 - func_00BBB8C0(0x400));
    temp_v0_7 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x74);
    var_a0_4 = temp_v0_7 >> 2;
    if (temp_v0_7 < 0) {
        var_a0_4 = (s32) (temp_v0_7 + 3) >> 2;
    }
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = (s32) (M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) + func_00BBB7F0(var_a0_4));
    temp_s0 = M2C_FIELD(Pes6Ball_Current, s32 *, 0x50);
    func_00284AB0(arg0, arg1, var_s4_3, var_s1, 0, Pes6Ball_Current);
    func_00994AC0(arg0, temp_s0);
    if (var_s1 < 0x10) {
        (*(s32 *)D_00591F30) = 0x7FFF;
    }
}
