/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001F08B0(s32);
extern u32 func_009AB630(void);
M2C_UNK sprintf(s8 *, M2C_UNK *, s32, s32, s32); /* extern */
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
s32 func_00B011C0();                                /* extern */
s32 func_00B01400(u8);                              /* extern */
extern s32 D_003E77B4;
extern char D_009C8960[];

void func_009AA320(s32 arg0) {
    s8 sp50;
    s32 sp74;
    s32 sp78;
    u16 sp7C;
    u8 sp7E;
    u8 sp7F;
    s32 var_v0;
    s8 *var_v1;
    u32 temp_v0;

    var_v0 = 0x20;
    var_v1 = &sp50;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    temp_v0 = func_009AB630();
    if (temp_v0 != 0) {
        func_009AC430(M2C_FIELD(temp_v0, u8 *, 0x568), arg0, &sp7C, &sp7E, &sp7F);
        func_00956A90(M2C_FIELD(temp_v0, s32 *, 0x14), 4, sp7C, 0);
        func_00957080(M2C_FIELD(temp_v0, s32 *, 0x18), 4, sp7C, 0);
        if (func_00B011C0() != 1) {
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x1C), 0);
        } else {
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x1C), 1, ((func_00B01400(sp7E) & 0xFF) + 1) & 0xFF);
        }
        if (func_009ABD00(sp7F, &sp78, &sp74) != 1) {
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x20), 0);
        } else {
            sprintf(&sp50, ((void *)D_009C8960), sp78, sp74, func_001F08B0(0x1A004C));
            func_009738A0(M2C_FIELD(temp_v0, s32 *, 0x20), &sp50);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x20), 1);
        }
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x28), 3, func_0095C4A0(sp7C));
        func_009AB890(1, sp7F, M2C_FIELD(temp_v0, s32 *, 0x2C), M2C_FIELD(temp_v0, s32 *, 0x30), M2C_FIELD(temp_v0, s32 *, 0x34), M2C_FIELD(temp_v0, s32 *, 0x38), M2C_FIELD(temp_v0, s32 *, 0x3C), 4, 5, 7, 9, 0xB);
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x40), 0xD, M2C_FIELD(((sp7F * 0xC) + D_003E77B4), u8 *, 0x4BAA));
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x44), 0xF, M2C_FIELD(((sp7F * 0xC) + D_003E77B4), u8 *, 0x4BAC));
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x48), 0x11, M2C_FIELD(((sp7F * 0xC) + D_003E77B4), u8 *, 0x4BAB));
        func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x50), 0x13, func_009ABFA0(M2C_FIELD(temp_v0, u8 *, 0x568), sp7F) & 0xFF);
        if (M2C_FIELD(temp_v0, u8 *, 0x568) == 0xD) {
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x20), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x2C), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x30), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x34), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x38), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x3C), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x40), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x44), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x48), 0);
            func_009737C0(M2C_FIELD(temp_v0, s32 *, 0x50), 0);
        }
    }
}
