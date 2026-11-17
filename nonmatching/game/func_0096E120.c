/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
f32 fabsf(f32 x);
s64 func_00288670(s32, M2C_UNK, u8);                /* extern */
u8 func_002AE670(s16);                              /* extern */
s32 func_0090B8B0(void *, M2C_UNK);                 /* extern */
s32 func_009142F0(void *, u8);                      /* extern */
M2C_UNK func_00914430(void *, M2C_UNK, void *, void *, s16); /* extern */
M2C_UNK func_0092AA00(void *);                      /* extern */
M2C_UNK func_0096B500(void *);                      /* extern */
M2C_UNK func_0096B650(void *, void *, s32);          /* extern */
M2C_UNK func_0096BF00(void *);                      /* extern */
M2C_UNK func_0096D1A0(void *);                      /* extern */
f32 func_00983610(f32, f32, f32, M2C_UNK);          /* extern */
M2C_UNK func_009840C0(void *, f32, f32);            /* extern */
s32 func_0098F410(void *);                          /* extern */
s32 func_00990900(void *, M2C_UNK);                 /* extern */
s32 func_009B3070(u16, u16);                        /* extern */
s32 func_009B30B0(u16, s32);                        /* extern */
u64 func_009B33A0(s32, s32, s32);                   /* extern */
s32 func_009B33F0(void *, void *);                  /* extern */
s32 func_009B3480(void *, f32, f32);                /* extern */
s32 func_009B34C0(void *, f32, f32, f32, f32);
s32 func_00AFBAB0(u8);                              /* extern */
M2C_UNK func_00B798F0(void *, void *, u8);            /* extern */
s32 func_00BBB780(s64);                             /* extern */
s16 func_00BBB8C0(u32);                             /* extern */
s32 func_00BBB990(u16, M2C_UNK);                    /* extern */
s32 func_00BBB9C0(u16, M2C_UNK);                    /* extern */
s32 func_00BDB8B0(void *);                          /* extern */
s32 func_00BF0520(void *);                       /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];
extern char Pes6MatchContext_FrameCounter[];
extern char D_00591E4D[];
extern char D_00591E4E[];
extern char D_00591E80[];
extern char D_00591EEE[];
extern char D_00592374[];
extern char D_005926DC[];
extern char D_005926E0[];
extern char D_005926E2[];
extern char D_005926F2[];
extern char D_005926FC[];
extern char Pes6MatchSquads[];
extern char D_00CA9DC0[];
extern char D_00CB531C[];
extern char D_00CB5320[];
extern char D_00CB5324[];
extern char D_00CBBE50[];

void func_0096E120(char *arg0) {
    f32 sp70;
    f32 sp68;
    f32 sp78;
    f32 sp7C;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 var_f0;
    f32 var_f21;
    s16 temp_a4;
    s32 temp_a0;
    s32 temp_a2_2;
    s32 temp_v1;
    s32 temp_v1_3;
    s32 temp_v1_5;
    s32 var_a0;
    s32 var_a0_2;
    s32 var_a0_3;
    s32 var_a0_4;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v0_3;
    s32 var_v1;
    s32 var_v1_2;
    s32 var_v1_3;
    s32 var_v1_4;
    s8 var_v0_4;
    u16 temp_s1;
    u16 temp_s1_4;
    u16 temp_s3;
    u64 temp_s1_3;
    u8 temp_a2;
    u8 temp_a2_3;
    u8 temp_s1_2;
    u8 temp_v1_2;
    u8 var_s1_2;
    u8 var_v1_5;
    char *temp_s2;
    char *temp_v1_4;
    char *var_s3;

    if (M2C_FIELD(arg0, u8 *, 0) == (*(u8 *)D_00591E4D)) {
        goto block_161;
    }
    func_009B33A0((s32) arg0, (s32) M2C_FIELD(arg0, f32 *, 0x6C), (s32) M2C_FIELD(arg0, f32 *, 0x70));
    func_00B798F0(&sp7C, &sp78, (*(u8 *)D_00591E4D));
    if (((s32) M2C_FIELD(arg0, u8 *, 0) % (s32) (*(u8 *)D_005926F2)) != ((u32) (*(u32 *)Pes6MatchContext_FrameCounter) % (u8) (*(u8 *)D_005926F2))) {
        goto block_133;
    }
block_2:
    var_v1 = 1;
block_3:
    if (var_v1 == 0) {
        goto block_6;
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x1E0);
    if (temp_v1 <= 0) {
        goto block_6;
    }
    M2C_FIELD(arg0, s32 *, 0x1E0) = (s32) (temp_v1 - 1);
block_6:
    temp_v1_2 = M2C_FIELD(arg0, u8 *, 0x1DE);
    if (temp_v1_2 >= 0xAU) {
        goto block_123;
    }
    if (temp_v1_2 == 0) {
        goto block_17;
    }
    if (temp_v1_2 == 1) {
        goto block_26;
    }
    if (temp_v1_2 == 2) {
        goto block_27;
    }
    if (temp_v1_2 == 3) {
        goto block_79;
    }
    if (temp_v1_2 == 4) {
        goto block_110;
    }
    if (temp_v1_2 == 5) {
        goto block_121;
    }
    if (temp_v1_2 == 6) {
        goto block_44;
    }
    if (temp_v1_2 == 7) {
        goto block_17;
    }
    if (temp_v1_2 == 8) {
        goto block_24;
    }
    goto block_111;
block_17:
    if ((*(u8 *)D_00591E4D) == 0xFF) {
        goto block_19;
    }
    var_a0 = (s32) (*(u8 *)D_00591E4D) % 23;
    goto block_20;
block_19:
    var_a0 = 1;
block_20:
    M2C_FIELD(arg0, s32 *, 0x1E0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F0) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1EC) = 0;
    M2C_FIELD(arg0, s32 *, 0x1F4) = 0;
    if (M2C_FIELD(arg0, u8 *, 0x1DE) == 7) {
        goto block_136;
    }
    if (*(((u8 *)D_00592374) + M2C_FIELD(arg0, u8 *, 0x12)) != 0) {
        goto block_23;
    }
    M2C_FIELD(arg0, u8 *, 0x1DE) = 2U;
    goto block_123;
block_23:
    M2C_FIELD(arg0, u8 *, 0x1DE) = 1U;
    goto block_123;
block_24:
    temp_s1 = func_009B34C0(((char *)D_00CA9DC0), sp7C, sp78, 10649.0f * (f32) -M2C_FIELD(arg0, s16 *, 0x14), 0.0f) & 0xFFFF;
    (*(f32 *)D_00CB531C) = sp7C + (f32) func_00BBB990(temp_s1, 0xD00);
    (*(f32 *)D_00CB5320) = sp78 + (f32) func_00BBB9C0(temp_s1, 0xD00);
    if (M2C_FIELD(arg0, s32 *, 0x1E0) == 0) {
        goto block_137;
    }
block_25:
    return;
block_26:
    func_0096D1A0(arg0);
    goto block_123;
block_27:
    if (M2C_FIELD(arg0, s32 *, 0x1E0) != 0) {
        goto block_43;
    }
    if ((func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) == 0xFF) {
        goto block_30;
    }
    var_a0_2 = (s32) (func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) % 23;
    goto block_31;
block_30:
    var_a0_2 = 1;
block_31:
    var_s2 = 0;
    var_s1 = 0;
    var_s3 = ((char *)Pes6MatchPlayers) + (var_a0_2 * 0x240);
loop_32:
    if (func_00BDB8B0(var_s3) == 0) {
        goto block_36;
    }
    if (M2C_FIELD(var_s3, u8 *, 0x1DD) != 3) {
        goto block_36;
    }
    if (M2C_FIELD(var_s3, u8 *, 0x1DE) != 6) {
        goto block_36;
    }
    var_s1 = (var_s1 + 1) & 0xFF;
block_36:
    var_s2 = (var_s2 + 1) & 0xFF;
    var_s3 += 0x240;
    if (var_s2 < 0xB) {
        goto loop_32;
    }
    if ((var_s1 & 0xFF) >= (s32) ((u8) *(((u8 *)D_00591EEE) + M2C_FIELD(arg0, u8 *, 0x12)) >> 1)) {
        goto block_43;
    }
    if (func_0098F410(arg0) == 0) {
        goto block_43;
    }
    temp_f20 = fabsf(M2C_FIELD(arg0, f32 *, 0xE0) - *(f32 *)(((char *)D_00591E80) + (M2C_FIELD(arg0, u8 *, 0x13) * 4)));
    temp_s1_2 = M2C_FIELD(arg0, u8 *, 0x12);
    if (temp_f20 < (2048.0f + (f32) (*(((u8 *)D_00591EEE) + temp_s1_2) * 0x300) + (f32) ((func_0090B8B0(arg0, 0) & 0xFF) * 0x600))) {
        goto block_138;
    }
    if ((s32) M2C_FIELD(arg0, u8 *, 0x10) < 0x11) {
        goto block_43;
    }
    temp_a2 = M2C_FIELD(arg0, u8 *, 0x11);
    if (func_00BBB780((s64) (func_00288670(M2C_FIELD(((temp_a2 * 0x348) + (((char *)Pes6MatchSquads) + (temp_s1_2 * 0x6900))), u8 *, 0x81) & 0x7F, 0x28, temp_a2) << 0x30) >> 0x30) == 0) {
        goto block_43;
    }
    M2C_FIELD(arg0, u8 *, 0x1DE) = 6U;
    M2C_FIELD(arg0, s32 *, 0x1E0) = (s32) (*(u8 *)D_005926FC);
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    goto block_123;
block_43:
    func_0096D1A0(arg0);
    goto block_123;
block_44:
    func_0092AA00(arg0);
    temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_v1_3 == 3) {
        goto block_52;
    }
    if (temp_v1_3 == 2) {
        goto block_51;
    }
    if (temp_v1_3 == 1) {
        goto block_50;
    }
    if (temp_v1_3 == 0) {
        goto block_49;
    }
    goto block_54;
block_49:
    (*(f32 *)D_00CB531C) = (0.0f + sp7C + (13465.0f * (*(f32 *)D_00CB5324))) / 2.0f;
    goto block_54;
block_50:
    (*(f32 *)D_00CB531C) = ((13465.0f * (*(f32 *)D_00CB5324)) + (2.0f * sp7C)) / 3.0f;
    var_f0 = func_00983610(3.0f, (*(f32 *)D_00CB5320), sp78, 0x40000000);
    goto block_53;
block_51:
    (*(f32 *)D_00CB531C) = (0.0f + sp7C + (2.0f * (13465.0f * (*(f32 *)D_00CB5324)))) / 3.0f;
    var_f0 = func_00983610(0.0f, (*(f32 *)D_00CB5320), sp78 / 2.0f, 3.0f);
    goto block_53;
block_52:
    (*(f32 *)D_00CB531C) = (0.0f + sp7C + (13465.0f * (*(f32 *)D_00CB5324))) / 2.0f;
    var_f0 = func_00983610(2.0f, (*(f32 *)D_00CB5320), sp78 / 5.0f, 0x40A00000);
block_53:
    (*(f32 *)D_00CB5320) = var_f0;
block_54:
    if (!(sp78 < 0.0f)) {
        goto block_56;
    }
    var_v1_2 = -1;
    goto block_57;
block_56:
    var_v1_2 = 1;
block_57:
    if (!((*(f32 *)D_00CB5320) < 0.0f)) {
        goto block_59;
    }
    var_v0 = -1;
    goto block_60;
block_59:
    var_v0 = 1;
block_60:
    if (var_v0 != var_v1_2) {
        goto block_66;
    }
    if (fabsf((*(f32 *)D_00CB5320)) <= 5160.0f) {
        goto block_66;
    }
    if (!((*(f32 *)D_00CB5320) < 0.0f)) {
        goto block_64;
    }
    var_v0_2 = -1;
    goto block_65;
block_64:
    var_v0_2 = 1;
block_65:
    (*(f32 *)D_00CB5320) = (0.0f + (*(f32 *)D_00CB5320) + (5160.0f * (f32) var_v0_2)) / 2.0f;
block_66:
    temp_a4 = M2C_FIELD(arg0, s16 *, 0x1CE);
    (*(f32 *)D_00CB531C) += (f32) temp_a4;
    (*(f32 *)D_00CB5320) += (f32) M2C_FIELD(arg0, s16 *, 0x1D0);
    func_00914430(arg0, 0x600, arg0 + 0x1EC, ((char *)D_00CB531C), temp_a4);
    if (func_009B33A0((s32) arg0, (s32) (*(f32 *)D_00CB531C), (s32) (*(f32 *)D_00CB5320)) >= 0x10000U) {
        goto block_78;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        goto block_78;
    }
    M2C_FIELD(arg0, s16 *, 0x1CE) = func_00BBB8C0(0x200U);
    M2C_FIELD(arg0, s16 *, 0x1D0) = func_00BBB8C0(0x200U);
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    if ((func_00990900(arg0, 0x400000) & 0xFF) < 2) {
        goto block_72;
    }
    if (((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((char *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x80) << 0x38) >> 0x3F) != 0) {
        goto block_139;
    }
block_70:
    if (((u64) ((s64) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((char *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7B) << 0x38) >> 0x3F) == 0) {
        goto block_72;
    }
    M2C_FIELD(arg0, s32 *, 0x1E8) = 2;
block_72:
    if (func_0098F410(arg0) != 0) {
        goto block_140;
    }
block_73:
    M2C_FIELD(arg0, s32 *, 0x1E0) = (s32) (*(u8 *)D_005926E0);
    if ((*(u8 *)D_00591E4D) == 0xFF) {
        goto block_75;
    }
    var_a0_3 = (s32) (*(u8 *)D_00591E4D) % 23;
    goto block_76;
block_75:
    var_a0_3 = 1;
block_76:
    temp_v1_4 = ((char *)Pes6MatchPlayers) + (var_a0_3 * 0x240);
    if ((func_009B3070(M2C_FIELD(temp_v1_4, u16 *, 0x26), M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0) * 2) + temp_v1_4), u16 *, 0x128)) & 0xFFFF) < 0x801) {
        goto block_78;
    }
    M2C_FIELD(arg0, u8 *, 0x1DE) = 2U;
block_78:
    func_009840C0(arg0, (*(f32 *)D_00CB531C), (*(f32 *)D_00CB5320));
    goto block_123;
block_79:
    temp_a0 = func_00BF0520(((char *)D_00CA9DC0)) & 0xFF;
    if (temp_a0 == 0xFF) {
        goto block_81;
    }
    var_a1 = (s32) (func_00BF0520((M2C_UNK *) temp_a0) & 0xFF) % 23;
    goto block_82;
block_81:
    var_a1 = 1;
block_82:
    M2C_FIELD(arg0, s8 *, 0x201) = 6;
    temp_s2 = ((char *)Pes6MatchPlayers) + (var_a1 * 0x240);
    if (!((*(u8 *)D_00CBBE50) & 1)) {
        goto block_84;
    }
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) M2C_FIELD(arg0, f32 *, 0xE0);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg0, f32 *, 0xE8);
    goto block_123;
block_84:
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) M2C_FIELD(arg0, f32 *, 0x74);
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) M2C_FIELD(arg0, f32 *, 0x78);
    if ((*(u8 *)D_00591E4D) == 0xFF) {
        goto block_86;
    }
    var_a1_2 = (s32) (*(u8 *)D_00591E4D) % 23;
    goto block_87;
block_86:
    var_a1_2 = 1;
block_87:
    if (M2C_FIELD((((char *)Pes6MatchPlayers) + (var_a1_2 * 0x240)), u8 *, 0x16) != 0x2C) {
        goto block_123;
    }
    if ((*(u8 *)D_00591E4E) != M2C_FIELD(arg0, u8 *, 0)) {
        goto block_95;
    }
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(temp_s2, f32 *, 0xE0) + (f32) func_00BBB990(M2C_FIELD(temp_s2, u16 *, 0x26), 0x760));
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) (M2C_FIELD(temp_s2, f32 *, 0xE8) + (f32) func_00BBB9C0(M2C_FIELD(temp_s2, u16 *, 0x26), 0x760));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x6C);
    if (fabsf(temp_f1) < 12697.0f) {
        goto block_94;
    }
    if (!(temp_f1 < 0.0f)) {
        goto block_92;
    }
    var_v0_3 = -1;
    goto block_93;
block_92:
    var_v0_3 = 1;
block_93:
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (12697.0f * (f32) var_v0_3);
block_94:
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) M2C_FIELD(arg0, f32 *, 0x6C);
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) M2C_FIELD(arg0, f32 *, 0x70);
block_95:
    temp_s3 = func_009B3480(arg0, M2C_FIELD(arg0, f32 *, 0x6C), M2C_FIELD(arg0, f32 *, 0x70)) & 0xFFFF;
    temp_s1_3 = (u64) (func_009B33A0((s32) arg0, (s32) M2C_FIELD(arg0, f32 *, 0x6C), (s32) M2C_FIELD(arg0, f32 *, 0x70)) << 0x20) >> 0x20;
    if (temp_s1_3 >= 0x100000U) {
        goto block_142;
    }
block_96:
    func_0096BF00(arg0);
    if ((*(u8 *)D_00591E4E) == M2C_FIELD(arg0, u8 *, 0)) {
        goto block_123;
    }
    if ((*(u8 *)D_00CBBE50) & 1) {
        goto block_123;
    }
    if ((func_009B30B0(M2C_FIELD(temp_s2, u16 *, 0x26), func_009B3480(temp_s2, M2C_FIELD(arg0, f32 *, 0x74), M2C_FIELD(arg0, f32 *, 0x78)) & 0xFFFF) & 0xFFFF) >= 0x11) {
        goto block_106;
    }
    if ((*(u8 *)D_00591E4E) == 0xFF) {
        goto block_105;
    }
    if ((*(u8 *)D_00591E4E) == 0xFF) {
        goto block_102;
    }
    var_a0_4 = (s32) (*(u8 *)D_00591E4E) % 23;
    goto block_103;
block_102:
    var_a0_4 = 1;
block_103:
    if ((func_009B30B0(M2C_FIELD(temp_s2, u16 *, 0x26), func_009B33F0(temp_s2, ((char *)Pes6MatchPlayers) + (var_a0_4 * 0x240)) & 0xFFFF) & 0xFFFF) < 0x18) {
        goto block_105;
    }
    (*(u8 *)D_00591E4E) = M2C_FIELD(arg0, u8 *, 0);
    goto block_123;
block_105:
    M2C_FIELD(arg0, u8 *, 0x1DE) = 4U;
    goto block_123;
block_106:
    if (temp_s1_3 >= 0x24000U) {
        goto block_123;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        goto block_123;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1E0) <= 0) {
        goto block_143;
    }
    M2C_FIELD(arg0, s32 *, 0x1E0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1E0) - 1);
    goto block_123;
block_110:
    func_0096B500(arg0);
    M2C_FIELD(arg0, u8 *, 0x1DE) = 3U;
    goto block_123;
block_111:
    if ((func_00BF0520(((char *)D_00CA9DC0)) & 0xFF) != 0xFF) {
        goto block_152;
    }
block_112:
    temp_a2_2 = M2C_FIELD(arg0, s32 *, 0x1E8);
    if (temp_a2_2 == 4) {
        goto block_116;
    }
    if (temp_a2_2 == 3) {
        goto block_115;
    }
    M2C_FIELD(arg0, s32 *, 0x1E8) = 3;
block_115:
    func_0096B650(&sp68, arg0, M2C_FIELD(arg0, s32 *, 0x1E8));
    var_v0_4 = 6;
    M2C_FIELD(arg0, f32 *, 0x74) = sp68;
    M2C_FIELD(arg0, f32 *, 0x6C) = sp68;
    M2C_FIELD(arg0, f32 *, 0x78) = sp70;
    M2C_FIELD(arg0, f32 *, 0x70) = sp70;
    goto block_117;
block_116:
    func_0096B650(&sp68, arg0, temp_a2_2);
    var_v0_4 = 2;
    M2C_FIELD(arg0, f32 *, 0x74) = sp68;
    M2C_FIELD(arg0, f32 *, 0x6C) = sp68;
    M2C_FIELD(arg0, f32 *, 0x78) = sp70;
    M2C_FIELD(arg0, f32 *, 0x70) = sp70;
block_117:
    M2C_FIELD(arg0, s8 *, 0x201) = var_v0_4;
    if ((u64) ((u64) (func_009B33A0((s32) arg0, (s32) M2C_FIELD(arg0, f32 *, 0x6C), (s32) M2C_FIELD(arg0, f32 *, 0x70)) << 0x20) >> 0x20) >= 0x6401U) {
        goto block_123;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        goto block_123;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1E0) == 0) {
        goto block_153;
    }
    M2C_FIELD(arg0, s32 *, 0x1E0) = (s32) (M2C_FIELD(arg0, s32 *, 0x1E0) - 1);
    goto block_123;
block_121:
    temp_s1_4 = func_009B3480(arg0, 10649.0f * (f32) M2C_FIELD(arg0, s16 *, 0x14), 0.0f) & 0xFFFF;
    var_f21 = M2C_FIELD(arg0, f32 *, 0xE0) + (f32) func_00BBB990(temp_s1_4, 0x580);
    temp_f20_2 = M2C_FIELD(arg0, f32 *, 0xE8) + (f32) func_00BBB9C0(temp_s1_4, 0x580);
    if (fabsf(M2C_FIELD(arg0, f32 *, 0xE0)) < 8729.0f) {
        goto block_154;
    }
block_122:
    M2C_FIELD(arg0, f32 *, 0x6C) = var_f21;
    M2C_FIELD(arg0, f32 *, 0x70) = temp_f20_2;
    M2C_FIELD(arg0, s8 *, 0x201) = 5;
block_123:
    temp_f1_2 = M2C_FIELD(arg0, f32 *, 0x6C);
    if (fabsf(temp_f1_2) <= 13209.0f) {
        goto block_128;
    }
    if (!(temp_f1_2 < 0.0f)) {
        goto block_126;
    }
    var_v1_3 = -1;
    goto block_127;
block_126:
    var_v1_3 = 1;
block_127:
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (13209.0f * (f32) var_v1_3);
block_128:
    temp_f1_3 = M2C_FIELD(arg0, f32 *, 0x70);
    if (fabsf(temp_f1_3) <= 8473.0f) {
        goto block_161;
    }
    if (!(temp_f1_3 < 0.0f)) {
        goto block_131;
    }
    var_v1_4 = -1;
    goto block_132;
block_131:
    var_v1_4 = 1;
block_132:
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) (8473.0f * (f32) var_v1_4);
    return;
block_133:
    if (func_009142F0(arg0, (*(u8 *)D_005926F2)) == 0) {
        goto block_135;
    }
    goto block_2;
block_135:
    var_v1 = 0;
    goto block_3;
block_136:
    M2C_FIELD(arg0, s32 *, 0x1F0) = (s32) M2C_FIELD((((char *)Pes6MatchPlayers) + (var_a0 * 0x240)), u8 *, 0x48);
    M2C_FIELD(arg0, u8 *, 0x1DE) = 8U;
    M2C_FIELD(arg0, s32 *, 0x1E0) = (s32) (*(u8 *)D_005926FC);
    goto block_123;
block_137:
    M2C_FIELD(arg0, u8 *, 0x1DE) = 1U;
    goto block_25;
block_138:
    M2C_FIELD(arg0, u8 *, 0x1DE) = 6U;
    M2C_FIELD(arg0, s32 *, 0x1E0) = (s32) (*(u8 *)D_005926FC);
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    goto block_123;
block_139:
    M2C_FIELD(arg0, s32 *, 0x1E8) = 1;
    goto block_70;
block_140:
    temp_a2_3 = M2C_FIELD(arg0, u8 *, 0x12);
    if (func_00BBB780((s64) (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((char *)Pes6MatchSquads) + (temp_a2_3 * 0x6900))), u8 *, 0x6A) & 0x7F, 0x14, temp_a2_3 * 0x69) << 0x30) >> 0x30) == 0) {
        goto block_73;
    }
    M2C_FIELD(arg0, s32 *, 0x1E8) = 3;
    goto block_73;
block_142:
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (M2C_FIELD(arg0, f32 *, 0xE0) + (f32) func_00BBB990(temp_s3, 0x400));
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) (M2C_FIELD(arg0, f32 *, 0xE8) + (f32) func_00BBB9C0(temp_s3, 0x400));
    goto block_96;
block_143:
    if (func_00BBB8C0(0x64U) >= 0x19) {
        goto block_145;
    }
    M2C_FIELD(arg0, u8 *, 0x1DE) = 4U;
    goto block_123;
block_145:
    if (func_00BBB8C0(3U) >= 0x21) {
        goto block_147;
    }
    var_s1_2 = *(((u8 *)D_005926DC) + func_00BBB8C0(3U));
    goto block_148;
block_147:
    var_s1_2 = func_002AE670(func_00BBB8C0(3U));
block_148:
    if ((s32) (*(u8 *)D_00591BE4) >= 0x21) {
        goto block_150;
    }
    var_v1_5 = *(((u8 *)D_005926DC) + (*(u8 *)D_00591BE4));
    goto block_151;
block_150:
    var_v1_5 = func_002AE670((s16) (*(u8 *)D_00591BE4));
block_151:
    M2C_FIELD(arg0, s32 *, 0x1E0) = (s32) (var_v1_5 + var_s1_2);
    goto block_123;
block_152:
    func_00BF0520((M2C_UNK *) arg0);
    goto block_112;
block_153:
    M2C_FIELD(arg0, s32 *, 0x1E8) = (s32) (M2C_FIELD(arg0, s32 *, 0x1E8) + 1);
    M2C_FIELD(arg0, s32 *, 0x1E0) = (s32) ((*(u8 *)D_005926E2) + func_00BBB8C0((u8) (*(u8 *)D_00591BE4) >> 1));
    goto block_123;
block_154:
    temp_v1_5 = func_009B3070(M2C_FIELD(arg0, u16 *, 0x28), M2C_FIELD(arg0, u16 *, 0x2A)) & 0xFFFF;
    if (temp_v1_5 < 0x1801) {
        goto block_159;
    }
    if (temp_v1_5 < 0x6800) {
        goto block_122;
    }
    goto block_159;
block_157:
    var_f21 += (f32) (M2C_FIELD(arg0, s16 *, 0x14) << 0xA);
    goto block_122;
block_158:
    var_f21 += (f32) (M2C_FIELD(arg0, s16 *, 0x14) << 0xB);
    goto block_122;
block_159:
    if ((0x1300 - (M2C_FIELD(arg0, u8 *, 0x5C) * 0xC)) < M2C_FIELD(arg0, s32 *, 0x1C)) {
        goto block_158;
    }
    goto block_157;
block_161:
    return;
}
