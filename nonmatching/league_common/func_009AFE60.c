/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern u32 func_009B0FD0(void);
extern s32 func_001F08B0(s32);
M2C_UNK sprintf(s8 *, M2C_UNK *, s32, s32, s32); /* extern */
u8 func_00225520(u8);                               /* extern */
s32 func_00225940(u8);                              /* extern */
M2C_UNK func_00956A90(s32, M2C_UNK, u16, M2C_UNK);  /* extern */
M2C_UNK func_00957080(s32, M2C_UNK, u16, M2C_UNK);  /* extern */
u8 func_0095C4A0(u16);                              /* extern */
M2C_UNK func_009737C0(s32, M2C_UNK);                /* extern */
M2C_UNK func_009737E0(s32, M2C_UNK, u8);            /* extern */
M2C_UNK func_009738A0(s32, s8 *);                   /* extern */
M2C_UNK func_009AB890(M2C_UNK, u8, s32, s32, s32, s32, s32, M2C_UNK, s64, s64, s64, s64); /* extern */
s32 func_009ABD00(u8, s32 *, s32 *);                /* extern */
s32 func_009ABFA0(u8, u8);                          /* extern */
M2C_UNK func_009AC430(u8, s32, u16 *, u8 *, u8 *);  /* extern */
extern s32 D_003E77B4;
extern char D_00591C09[];
extern char D_009C8AC0[];

void func_009AFE60(s32 arg0) {
    s8 sp70;
    s32 sp94;
    s32 sp98;
    u16 sp9C;
    u8 sp9E;
    u8 sp9F;
    s32 temp_s0;
    s32 var_s2;
    s32 var_v0;
    s8 *var_v1;
    u32 temp_v0;
    u32 var_s1;
    u8 var_v0_2;

    var_v0 = 0x20;
    var_v1 = &sp70;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_v0 = func_009B0FD0();
    if (temp_v0 != 0) {
        func_009AC430(M2C_FIELD(temp_v0, u8 *, 0x5B0), arg0, &sp9C, &sp9E, &sp9F);
        temp_s0 = func_00225940(sp9F) & 0xFF;
        if ((*(u8 *)D_00591C09) != 0xE) {
            var_s2 = 0;
            var_s1 = temp_v0;
            do {
                if ((var_s2 == (temp_s0 - 1)) && (temp_s0 != 0)) {
                    func_001D7D60(M2C_FIELD(var_s1, void **, 0x558), 1);
                } else {
                    func_001D7D60(M2C_FIELD(var_s1, void **, 0x558), 0);
                }
                var_s2 += 1;
                var_s1 += 4;
            } while (var_s2 < 0x14);
        }
        func_00956A90(M2C_FIELD(temp_v0, s32 *, 0x10), 4, sp9C, 0);
        func_00957080(M2C_FIELD(temp_v0, s32 *, 0x14), 4, sp9C, 0);
        if (func_009ABD00(sp9F, &sp98, &sp94) != 1) {
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x1C), 0);
        } else {
            sprintf(&sp70, ((void *)D_009C8AC0), sp98, sp94, func_001F08B0(0x1A004C));
            func_009738A0(M2C_FIELD(temp_v0, s32 *, 0x1C), &sp70);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x1C), 1);
        }
        if ((u32) ((*(u8 *)D_00591C09) - 1) >= 2U) {
            var_v0_2 = func_0095C4A0(sp9C);
        } else {
            var_v0_2 = func_00225520(sp9E);
        }
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x24), 1, var_v0_2);
        func_009AB890(1, sp9F, M2C_FIELD(temp_v0, s32 *, 0x28), M2C_FIELD(temp_v0, s32 *, 0x2C), M2C_FIELD(temp_v0, s32 *, 0x30), M2C_FIELD(temp_v0, s32 *, 0x34), M2C_FIELD(temp_v0, s32 *, 0x38), 2, 3, 5, 7, 9);
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x3C), 0xB, M2C_FIELD(((sp9F * 0xC) + D_003E77B4), u8 *, 0x4BAA));
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x40), 0xD, M2C_FIELD(((sp9F * 0xC) + D_003E77B4), u8 *, 0x4BAC));
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x44), 0xF, M2C_FIELD(((sp9F * 0xC) + D_003E77B4), u8 *, 0x4BAB));
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x4C), 0x11, func_009ABFA0(M2C_FIELD(temp_v0, u8 *, 0x5B0), sp9F) & 0xFF);
    }
}
