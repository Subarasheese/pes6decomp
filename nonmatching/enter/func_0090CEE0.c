/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AC470(void);
extern void func_001AC550(void *);
extern s32 func_0017F900(void);
M2C_UNK func_001A6630(void *);                      /* extern */
M2C_UNK func_001A7250(void *);                      /* extern */
M2C_UNK func_001A9970(void *);                      /* extern */
M2C_UNK func_001AB650(void *);                      /* extern */
M2C_UNK func_001B10C0(void *, M2C_UNK);             /* extern */
extern s32 D_003EA534;
extern s32 D_003EA538;
extern char Pes6MatchPlayers[];
extern char D_0092F040[];
extern char D_0092F042[];
extern char D_0092F04C[];
extern char D_0092F1B0[];
extern char D_0092F1B1[];
extern char D_0092F1B2[];
extern char D_0092F1B3[];
extern char D_0092F1B4[];
extern char D_0092F1B5[];
extern char D_0092F1B6[];
extern char D_0092F1B7[];
extern char D_0092F1B8[];
extern char D_0092F1B9[];
extern char D_0092F1BA[];
extern char D_0092F1BB[];
extern char D_0092F1BC[];
extern char D_0092F1BD[];
extern char D_0092F1BE[];
extern char D_0092F1BF[];
extern char D_0092F1C0[];
extern char D_0092F1C1[];
extern char D_0092F1C2[];
extern char D_0092F1C3[];
extern char D_0092F1C4[];
extern char D_0092F1C5[];

s32 func_0090CEE0(s32 arg0) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s0_2;
    M2C_UNK *var_s0_3;
    M2C_UNK *var_s0_4;
    M2C_UNK *var_s0_5;
    M2C_UNK *var_s0_6;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s1_2;
    s32 var_s1_3;
    s32 var_s1_4;
    s32 var_s1_5;
    s32 var_s1_6;
    s32 var_v1;
    u8 var_v1_2;
    void *temp_a0;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_a0_5;

    switch ((*(u8 *)D_0092F042)) {                           /* irregular */
    case 3:
        return 1;
    case 0:
        D_003EA534 = 0;
        var_v1 = 0;
        if (arg0 & 4) {
            var_v1 = 0 | (1 << (*(u8 *)D_0092F1B0)) | (1 << (*(u8 *)D_0092F1B1)) | (1 << (*(u8 *)D_0092F1B2));
            D_003EA534 = var_v1;
        }
        if (arg0 & 8) {
            var_v1 = ((s64) ((s64) var_v1 << 0x20) >> 0x20) | (1 << (*(u8 *)D_0092F1B3)) | (1 << (*(u8 *)D_0092F1B4)) | (1 << (*(u8 *)D_0092F1B5)) | (1 << (*(u8 *)D_0092F1B6));
            D_003EA534 = var_v1;
        }
        if (arg0 & 0x10) {
            var_v1 = ((s64) ((s64) var_v1 << 0x20) >> 0x20) | (1 << (*(u8 *)D_0092F1B7)) | (1 << (*(u8 *)D_0092F1B8)) | (1 << (*(u8 *)D_0092F1B9)) | (1 << (*(u8 *)D_0092F1BA));
            D_003EA534 = var_v1;
        }
        if (arg0 & 0x20) {
            var_v1 = ((s64) ((s64) var_v1 << 0x20) >> 0x20) | (1 << (*(u8 *)D_0092F1BB)) | (1 << (*(u8 *)D_0092F1BC)) | (1 << (*(u8 *)D_0092F1BD));
            D_003EA534 = var_v1;
        }
        if (arg0 & 0x40) {
            var_v1 = ((s64) ((s64) var_v1 << 0x20) >> 0x20) | (1 << (*(u8 *)D_0092F1BE)) | (1 << (*(u8 *)D_0092F1BF)) | (1 << (*(u8 *)D_0092F1C0)) | (1 << (*(u8 *)D_0092F1C1));
            D_003EA534 = var_v1;
        }
        if (arg0 & 0x80) {
            D_003EA534 = ((s64) ((s64) var_v1 << 0x20) >> 0x20) | (1 << (*(u8 *)D_0092F1C2)) | (1 << (*(u8 *)D_0092F1C3)) | (1 << (*(u8 *)D_0092F1C4)) | (1 << (*(u8 *)D_0092F1C5));
        }
        var_v1_2 = 1;
        D_003EA538 = arg0;
block_59:
        (*(u8 *)D_0092F042) = var_v1_2;
block_60:
    default:
        return 0;
    case 1:
        var_s1 = 0;
        var_s0 = ((void *)Pes6MatchPlayers);
        do {
            if (D_003EA534 & (1 << var_s1)) {
                temp_a0 = *M2C_FIELD(var_s0, void ***, 4);
                if (M2C_FIELD(temp_a0, u8 *, 1) != 0) {
                    func_001A6630(temp_a0);
                }
            }
            var_s1 += 1;
            var_s0 += 0x240;
        } while (var_s1 < 0x17);
        var_s1_2 = 0;
        var_s0_2 = ((void *)Pes6MatchPlayers);
        do {
            if (D_003EA534 & (1 << var_s1_2)) {
                temp_a0_2 = *M2C_FIELD(var_s0_2, void ***, 4);
                if (M2C_FIELD(temp_a0_2, u8 *, 1) != 0) {
                    func_001A7250(temp_a0_2);
                }
            }
            var_s1_2 += 1;
            var_s0_2 += 0x240;
        } while (var_s1_2 < 0x17);
        var_s1_3 = 0;
        var_s0_3 = ((void *)Pes6MatchPlayers);
        do {
            if (D_003EA534 & (1 << var_s1_3)) {
                temp_a0_3 = *M2C_FIELD(var_s0_3, void ***, 4);
                if (M2C_FIELD(temp_a0_3, u8 *, 1) != 0) {
                    func_001A9970(temp_a0_3);
                }
            }
            var_s1_3 += 1;
            var_s0_3 += 0x240;
        } while (var_s1_3 < 0x17);
        var_s1_4 = 0;
        var_s0_4 = ((void *)Pes6MatchPlayers);
        do {
            if (D_003EA534 & (1 << var_s1_4)) {
                temp_a0_4 = *M2C_FIELD(var_s0_4, void ***, 4);
                if (M2C_FIELD(temp_a0_4, u8 *, 1) != 0) {
                    temp_v0 = M2C_FIELD(temp_a0_4, s32 *, 0xC);
                    if (temp_v0 != 0) {
                        if (temp_v0 == 1) {
                            goto block_43;
                        }
                    } else {
block_43:
                        func_001B10C0(temp_a0_4, 1);
                    }
                }
            }
            var_s1_4 += 1;
            var_s0_4 += 0x240;
        } while (var_s1_4 < 0x17);
        var_v1_2 = (*(u8 *)D_0092F042) + 1;
        goto block_59;
    case 2:
        if (func_0017F900() != 0) {
            var_s1_5 = 0;
            var_s0_5 = ((void *)Pes6MatchPlayers);
            do {
                if (D_003EA534 & (1 << var_s1_5)) {
                    temp_a0_5 = *M2C_FIELD(var_s0_5, void ***, 4);
                    if (M2C_FIELD(temp_a0_5, u8 *, 1) != 0) {
                        func_001AB650(temp_a0_5);
                    }
                }
                var_s1_5 += 1;
                var_s0_5 += 0x240;
            } while (var_s1_5 < 0x17);
            var_s1_6 = 0;
            var_s0_6 = ((void *)Pes6MatchPlayers);
            do {
                if (D_003EA534 & (1 << var_s1_6)) {
                    func_001AC550(*M2C_FIELD(var_s0_6, void ***, 4));
                }
                var_s1_6 += 1;
                var_s0_6 += 0x240;
            } while (var_s1_6 < 0x17);
            if ((((*(s32 *)D_0092F04C) | D_003EA538) & 0xFC) == 0xFC) {
                func_001AC470();
            }
            (*(u8 *)D_0092F040) |= 4;
            var_v1_2 = (*(u8 *)D_0092F042) + 1;
            goto block_59;
        }
        goto block_60;
    }
}
