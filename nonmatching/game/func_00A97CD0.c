/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB8C0(s32);
extern void func_00284EA0(s32);
extern u32 func_00288670(u32, u32);
extern s32 func_009B32D0(s32, s32, s32);
extern s32 func_00BC3950(void *);
M2C_UNK func_00284E60(void *, u16, s32, s32);       /* extern */
M2C_UNK func_00287120(void *);                      /* extern */
M2C_UNK func_00995020(void *);                      /* extern */
u16 func_0099DFF0(void *);                          /* extern */
s32 func_009C1230(M2C_UNK, u16, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_00AA2C30(void *, u16, s32);                /* extern */
M2C_UNK func_00BC3A80(void *);                      /* extern */
extern void *Pes6Ball_Current;
extern char D_00591E4C[];
extern char D_00591E7C[];
extern char D_005926DE[];
extern char D_005926F4[];
extern char Pes6MatchSquads[];

void func_00A97CD0(void *arg0, s32 arg1) {
    s32 temp_a0;
    s32 temp_a1_2;
    s32 temp_a1_3;
    s32 temp_v1_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_s4;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    u16 temp_a1;
    u16 temp_v1;
    u16 var_v0;

    var_s1 = arg1;
    if ((M2C_FIELD(arg0, s32 *, 0x1C) != 0) && ((*(u8 *)D_00591E4C) == M2C_FIELD(arg0, u8 *, 0))) {
        temp_a1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
        if ((temp_a1 != 0x18A) && (temp_a1 != 0x32F) && (M2C_FIELD(Pes6Ball_Current, u8 *, 0x67) == 0) && (((u32) M2C_FIELD(arg0, u32 *, 0x114) < 0x41U) || (func_009C1230(0x18, M2C_FIELD(arg0, u16 *, 0x26), 0, 0, 0xFF, 0) != 0))) {
            var_s0 = 0;
            if (func_00BC3950(arg0) == 0) {
                func_00BC3A80(arg0);
            }
            temp_a1_2 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
            if (!(M2C_FIELD(Pes6Ball_Current, f32 *, 0x7FC) <= (f32) (((temp_a1_2 * -0x30) / 183) + ((u32) (temp_a1_2 * -0x30) >> 0x1F)))) {
                var_v1 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x30);
                if (var_v1 > 0) {

                } else {
                    var_v1 = -var_v1;
                }
                if (var_v1 < 0x2F1) {
                    var_s4 = func_00BBB8C0(3) + 2;
                } else {
                    goto block_14;
                }
            } else {
block_14:
                var_s4 = (s32) (-M2C_FIELD(Pes6Ball_Current, f32 *, 0x30) / 188.0f);
            }
            temp_v1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
            switch (temp_v1) {                      /* irregular */
            case 0x344:
            case 0x2E9:
            case 0x312:
            case 0x1E6:
            case 0x313:
            case 0x311:
            case 0x30F:
            case 0x30C:
            case 0x30E:
                var_s1 = (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58);
                break;
            case 0x60:
            case 0x310:
                var_s1 = (s32) M2C_FIELD(arg0, u16 *, 0x2C);
                var_s0 = 0x400;
                break;
            case 0x49:
                var_s0 = 0x200;
                break;
            default:
                if ((*(s32 *)D_00591E7C) != 0) {
                    var_v0 = func_0099DFF0(arg0);
                } else {
                    var_v0 = M2C_FIELD(Pes6Ball_Current, u16 *, 0x58);
                }
                var_s1 = func_009B32D0(var_v0 & 0xFFFF, var_s1, 0x1000) & 0xFFFF;
                break;
            }
            temp_a0 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x72) & 0x7F, 0x28U) * 2;
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x54);
            var_v0_2 = temp_v1_2 >> 1;
            if (temp_v1_2 < 0) {
                var_v0_2 = (s32) (temp_v1_2 + 1) >> 1;
            }
            var_v0_3 = func_00AA2C30(arg0, (u16) var_s1, var_s0 + (((var_v0_2 + 0xA00) - temp_a0) + (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x73) & 0x7F, 0x28U) * 2)));
            temp_a1_3 = ((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x8C) << 0x38) >> 0x3A) + 0x94;
            if (M2C_FIELD(Pes6Ball_Current, f32 *, 0x14) < (f32) (((temp_a1_3 * -0x90) / 183) + ((u32) (temp_a1_3 * -0x90) >> 0x1F))) {
                var_v0_3 = ((var_v0_3 * 7) / 10) + ((u32) (var_v0_3 * 7) >> 0x1F);
            }
            func_00284E60(arg0, (u16) var_s1, var_v0_3, var_s4);
            (*(u8 *)D_00591E4C) = M2C_FIELD(arg0, u8 *, 0);
            func_00995020(arg0);
            func_00287120(arg0);
            M2C_FIELD(Pes6Ball_Current, s32 *, 0x74) = (s32) (-0xC00 - func_00BBB8C0(0x400));
            M2C_FIELD(Pes6Ball_Current, u8 *, 0) = (u8) (*(u8 *)D_005926DE);
            func_00284EA0((s32) (*(u8 *)D_005926F4));
        }
    }
}
