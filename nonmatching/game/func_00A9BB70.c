/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00BBB8C0(s32);
extern s32 func_00BBB780(s64);
extern s32 func_00A1B4A0(void *);
extern u32 func_00288670(u32, u32);
extern s32 func_009B30B0(s32, s32);
f32 func_001CD9E0(f32);                             /* extern */
M2C_UNK func_00207390(void *, M2C_UNK);             /* extern */
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_00A1B990(void *, M2C_UNK, void *);         /* extern */
M2C_UNK func_00A9D570(void *, M2C_UNK, u8);         /* extern */
M2C_UNK func_00AEEA40(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_00B21B30(void *, void *, M2C_UNK);     /* extern */
extern void *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591DC4[];
extern char D_005926DE[];
extern char D_005926E4[];
extern char D_005926EC[];
extern char Pes6MatchSquads[];

void func_00A9BB70(void *arg0) {
    f32 var_f12;
    s32 temp_a0_3;
    s32 temp_a0_6;
    s32 temp_a1_3;
    s32 temp_a1_4;
    s32 temp_s3;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 var_a0;
    s32 var_a2;
    s32 var_s1_2;
    s32 var_s4;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 temp_a0_4;
    u16 temp_a0_5;
    u16 temp_s1;
    u16 temp_v1;
    u16 var_v1_2;
    u32 temp_ret;
    u32 temp_s1_2;
    u32 temp_s1_3;
    u64 temp_a0_2;
    u8 temp_a1_2;
    u8 temp_a2_2;
    u8 temp_v1_2;
    u8 var_s1;
    void *temp_a0;
    void *temp_a1;
    void *temp_a2;
    void *temp_s0;

    temp_a1 = M2C_FIELD(arg0, void **, 4);
    temp_v1 = M2C_FIELD(temp_a1, u16 *, 0x30);
    switch (temp_v1) {                              /* switch 1; irregular */
    case 0x345:                                     /* switch 1 */
    case 0x34B:                                     /* switch 1 */
        if (M2C_FIELD(temp_a1, f32 *, 0x38) <= (f32) (M2C_FIELD(M2C_FIELD(temp_a1, void **, 4), u16 *, 8) * 2)) {
        default:                                    /* switch 1 */
            temp_a1_2 = M2C_FIELD((((M2C_FIELD(arg0, u8 *, 0x13) ^ 1) * 0xB) + arg0), u8 *, 0x1B4);
            if (temp_a1_2 != 0xFF) {
                var_a2 = (s32) temp_a1_2 % 23;
            } else {
                var_a2 = 1;
            }
            temp_s0 = ((void *)Pes6MatchPlayers) + (var_a2 * 0x240);
            if (((temp_v1 == 0x2FA) || (temp_v1 == 0x16E) || ((u32) (M2C_FIELD(temp_s0, u32 *, 0x114) + 0x40) >= (u32) M2C_FIELD(arg0, u32 *, 0x114))) && ((temp_a0 = M2C_FIELD(temp_s0, void **, 4), (M2C_FIELD(temp_a0, u16 *, 0x30) == 0x2FE)) || (M2C_FIELD(temp_s0, s32 *, 0x1C) != 0))) {
                temp_v1_2 = M2C_FIELD(temp_s0, u8 *, 0x16);
                if (temp_v1_2 != 0xC) {
                    goto block_14;
                }
                if (M2C_FIELD(temp_s0, u16 *, 0x18) == 0x51) {
                    return;
                }
block_14:
                temp_a2 = (M2C_FIELD(arg0, u8 *, 0) * 2) + temp_s0;
                temp_s1 = M2C_FIELD(temp_a2, u16 *, 0x128);
                if ((temp_v1_2 != 0xC) && (temp_v1_2 != 0x2A) && (temp_v1_2 != 0x26) && (temp_v1_2 != 0x24) && (temp_v1_2 != 6) && (temp_v1_2 != 5) && (temp_v1_2 != 0xA) && (temp_v1_2 != 0x18) && (temp_v1_2 != 0x43) && (temp_v1_2 != 0xF) && (temp_v1_2 != 0x1B) && (temp_v1_2 != 0xE) && (temp_v1_2 != 0x40) && (temp_v1_2 != 1) && (temp_v1_2 != 0) && (temp_v1_2 != 7)) {
                    if (func_00A1B990(temp_s0, 7, temp_a2) != 0) {
                        return;
                    }
                    goto block_38;
                }
                temp_a0_2 = (u64) ((s64) M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u8 *, 0xD) << 0x38) >> 0x39;
                if ((temp_a0_2 != 0xE) && (temp_a0_2 != 0xF) && (temp_a0_2 != 0xB) && (temp_a0_2 != 2) && (temp_a0_2 != 1) && (temp_a0_2 != 0)) {
                    return;
                }
block_38:
                if (((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x10C), (s32) temp_s1) & 0xFFFF) < 0x11) && (M2C_FIELD(temp_s0, s32 *, 0x1C) < 0x400)) {
                    return;
                }
                temp_v0 = M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0) * 4) + arg0), s32 *, 0x158);
                if (temp_v0 >= 0) {
                    var_f12 = (f32) temp_v0;
                } else {
                    var_f12 = 2.0f * (f32) (((u32) temp_v0 >> 1) | (temp_v0 & 1));
                }
                temp_s3 = (s32) func_001CD9E0(var_f12);
                var_s4 = 0;
                if ((func_009B30B0((s32) M2C_FIELD(temp_s0, u16 *, 0x26), (s32) temp_s1) & 0xFFFF) >= 0x21) {
                    var_s4 = 1;
                }
                if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) temp_s1) & 0xFFFF) >= 0x49) {
                    var_s4 += 2;
                }
                if (temp_s3 < 0x10000) {
                    if ((func_009B30B0((s32) temp_s1, (s32) M2C_FIELD(temp_s0, u16 *, 0x10C)) & 0xFFFF) >= 0x21) {
                        goto block_56;
                    }
                } else if ((func_009B30B0((s32) temp_s1, (s32) M2C_FIELD(temp_s0, u16 *, 0x10C)) & 0xFFFF) >= 0x19) {
block_56:
                    var_s4 += 4;
                }
                if ((func_009B30B0((s32) M2C_FIELD(arg0, u16 *, 0x26), (s32) M2C_FIELD(temp_s0, u16 *, 0x26)) & 0xFFFF) >= 0x31) {
                    var_s4 += 8;
                }
                temp_a0_3 = M2C_FIELD(temp_s0, s32 *, 0x1C);
                var_v1 = temp_a0_3 >> 5;
                if (temp_a0_3 < 0) {
                    var_v1 = (s32) (temp_a0_3 + 0x1F) >> 5;
                }
                if ((var_v1 + 0x140) < temp_s3) {
                    var_s4 += 0x10;
                }
                temp_a0_4 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30);
                switch (temp_a0_4) {                /* switch 2; irregular */
                case 0x314:                         /* switch 2 */
                case 0x30E:                         /* switch 2 */
                case 0x310:                         /* switch 2 */
                    var_s4 &= 0x15;
                    break;
                case 0x49:                          /* switch 2 */
                case 0x4F:                          /* switch 2 */
                    if (((u32) M2C_FIELD(arg0, u32 *, 0x114) < (u32) M2C_FIELD(temp_s0, u32 *, 0x114)) && ((func_009B30B0((s32) M2C_FIELD(temp_s0, u16 *, 0x10C), (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x21)) {
                        var_s4 &= 5;
                    }
                    break;
                case 0x10B:                         /* switch 2 */
                case 0x4D:                          /* switch 2 */
                case 0x89:                          /* switch 2 */
                case 0x47:                          /* switch 2 */
                case 0x37:                          /* switch 2 */
                case 0x36:                          /* switch 2 */
                case 0x2FA:                         /* switch 2 */
                case 0x16E:                         /* switch 2 */
                    if ((func_009B30B0((s32) temp_s1, (s32) M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) < 0x31) {
                        var_s4 = 0;
                    }
                    break;
                }
                if (var_s4 == 0) {
                    temp_a0_5 = M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), u16 *, 0x30);
                    switch (temp_a0_5) {            /* switch 3; irregular */
                    case 0x2FE:                     /* switch 3 */
                        temp_s1_2 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U);
                        if ((func_00288670(M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_s0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U) + 0x14) >= (s32) temp_s1_2) {
                            if (!(M2C_FIELD(M2C_FIELD(temp_s0, void **, 4), f32 *, 0x38) < 10.0f)) {
                                temp_s1_3 = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U);
                                temp_a1_3 = temp_s1_3 - func_00288670(M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_s0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U);
                                var_s1 = M2C_FIELD(arg0, u8 *, 0x61);
                                if (((u32) (*(u32 *)D_00591DC4) % (u8) (*(u8 *)D_005926DE)) == 0) {
                                    if (temp_a1_3 > 0) {
                                        var_v0 = temp_a1_3;
                                    } else {
                                        var_v0 = -temp_a1_3;
                                    }
                                    if (var_v0 >= 6) {
                                        if (temp_a1_3 > 0) {
                                            var_s1_2 = var_s1 - 2;
                                        } else {
                                            var_s1_2 = var_s1 - 6;
                                        }
                                    } else {
                                        var_s1_2 = var_s1 - 4;
                                    }
                                    if (temp_a1_3 >= 0) {
                                        temp_ret = func_00288670(M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_s0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U);
                                        var_v0_2 = func_00BBB8C0((temp_ret / 10) + (temp_ret >> 0x1F));
                                    } else {
                                        temp_v0_2 = func_00288670(M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_s0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U);
                                        var_a0 = temp_v0_2 >> 1;
                                        if (temp_v0_2 < 0) {
                                            var_a0 = (s32) (temp_v0_2 + 1) >> 1;
                                        }
                                        var_v0_2 = func_00BBB8C0(var_a0);
                                    }
                                    var_s1 = var_s1_2 - var_v0_2;
                                    if ((s32) var_s1 <= 0) {
                                        var_s1 = 0;
                                    }
                                }
                                M2C_FIELD(arg0, u8 *, 0x61) = var_s1;
                            }
                            if ((M2C_FIELD(arg0, u8 *, 0x61) == 0) && (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0x30) == 0x6F)) {
                                func_00B21B30(temp_s0, arg0, (func_00BBB780((s64) (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6B) & 0x7F, 0x14U) << 0x30) >> 0x30) == 0) ? 0 : 2);
                                M2C_FIELD(arg0, s8 *, 0x5F) = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6A) & 0x7F, 0x14U);
                                M2C_FIELD(arg0, u8 *, 0x61) = func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x6C) & 0x7F, 0x32U);
                                func_00209A00(M2C_FIELD(temp_s0, void **, 4), 0x2FD, 0);
                                func_00207390(M2C_FIELD(temp_s0, void **, 4), 6);
                                var_v1_2 = 0xB;
                                M2C_FIELD(temp_s0, u8 *, 0x16) = 0xCU;
block_112:
                                M2C_FIELD(temp_s0, u16 *, 0x18) = var_v1_2;
                                return;
                            }
                        }
                        break;
                    default:                        /* switch 3 */
                        if ((func_00A1B4A0(temp_s0) == 0) && (temp_a1_4 = func_009B30B0((s32) M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0) * 2) + temp_s0), u16 *, 0x128), (s32) M2C_FIELD(temp_s0, u16 *, 0x28)) & 0xFFFF, temp_a0_6 = M2C_FIELD(((M2C_FIELD(temp_s0, u8 *, 0) * 4) + arg0), s32 *, 0x158), ((temp_a1_4 < 0x20) != 0)) && ((temp_a0_6 < 0x10000) || ((M2C_FIELD(temp_s0, s32 *, 0x1C) >= 0xC00) && (temp_a1_4 < 0x10)))) {
                            if (M2C_FIELD(temp_s0, s32 *, 0x1C) < 0x1501) {
                                if (temp_a0_6 < 0xC400) {
                                    func_00209A00(M2C_FIELD(temp_s0, void **, 4), 0x2FE, 4);
                                    func_00207390(M2C_FIELD(temp_s0, void **, 4), 6);
                                    M2C_FIELD(temp_s0, s16 *, 0x38) = 0;
                                    M2C_FIELD(temp_s0, s8 *, 0x66) = 0;
                                    M2C_FIELD(temp_s0, s8 *, 0x4A) = 0;
                                    temp_a2_2 = M2C_FIELD(arg0, u8 *, 0);
                                    M2C_FIELD(temp_s0, s16 *, 0x36) = (s16) temp_a2_2;
                                    M2C_FIELD(temp_s0, s32 *, 0x94) = 1;
                                    M2C_FIELD(temp_s0, s32 *, 0x9C) = 0;
                                    M2C_FIELD(temp_s0, u16 *, 0x2C) = temp_s1;
                                    M2C_FIELD(temp_s0, s16 *, 0x3C) = 0;
                                    M2C_FIELD(temp_s0, u8 *, 0x62) = (u8) (*(u8 *)D_005926EC);
                                    M2C_FIELD(temp_s0, u8 *, 0x4E) = (u8) (*(u8 *)D_005926E4);
                                    func_00A9D570(temp_s0, 1, temp_a2_2);
                                    var_v1_2 = 0x50;
                                    M2C_FIELD(temp_s0, u8 *, 0x16) = 0xCU;
                                    goto block_112;
                                }
                            } else {
                                func_00AEEA40(temp_s0, arg0, 1);
                            }
                        }
                        break;
                    }
                }
            }
        } else {
        case 0x18A:                                 /* switch 1 */
        case 0x170:                                 /* switch 3 */
            return;
        }
        break;
    }
}
