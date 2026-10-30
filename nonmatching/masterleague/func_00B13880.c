/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F3A00(void *);
extern u32 func_00B15370(void);
extern void func_00B13F70(u8);
extern void func_002F4E10(void *);
extern u32 func_00B0A1E0(void);
extern void func_00B20ED0(u16);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002F3F30(void *, M2C_UNK, M2C_UNK, s8 *); /* extern */
s32 func_0094C7B0();                                /* extern */
u16 func_009566B0(u16);                             /* extern */
M2C_UNK func_00956900(u16);                         /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
void *func_0095F420(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_0096F7D0(u16);                             /* extern */
M2C_UNK func_009BD930(M2C_UNK);                     /* extern */
M2C_UNK func_009BE2E0(u16, s32 *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00B07B10(u16);                         /* extern */
M2C_UNK func_00B08380(s32);                         /* extern */
s32 func_00B0A110(u16);                             /* extern */
M2C_UNK func_00B0A460();                            /* extern */
M2C_UNK func_00B0A490();                            /* extern */
M2C_UNK func_00B0D690(u8, s32, u16, s32);           /* extern */
M2C_UNK func_00B0E4C0(u8, s32);                     /* extern */
M2C_UNK func_00B0E9C0(u8);                          /* extern */
M2C_UNK func_00B13F90(s32);                         /* extern */
M2C_UNK func_00B13FB0();                            /* extern */
M2C_UNK func_00B13FC0();                            /* extern */
s32 func_00B15250(u8, s32);                         /* extern */
M2C_UNK func_00B16420(s32, u8);                     /* extern */
M2C_UNK func_00B16590(u16, M2C_UNK);                /* extern */
s32 func_00B18E30(u16);                             /* extern */
M2C_UNK func_00B24B10();                            /* extern */
s32 func_00B26F40(void *);                          /* extern */
extern char D_00B7FA38[];

s32 func_00B13880(void) {
    s32 sp30;
    s32 sp34;
    s32 sp38;
    s32 sp3C;
    s8 sp4C;
    s8 sp4D;
    s8 sp4E;
    s8 sp4F;
    M2C_UNK var_a1;
    s32 temp_v1;
    u16 temp_s1;
    u32 temp_v0;
    void *temp_a0;

    temp_v0 = func_00B15370();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0xC16) == 0) {
            temp_a0 = M2C_FIELD(temp_v0, void **, 0xC04);
            if (temp_a0 == NULL) {
                temp_v1 = M2C_FIELD(temp_v0, s32 *, 0xC28);
                switch (temp_v1) {                  /* irregular */
                case 0:
                    temp_s1 = func_00B15250(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) & 0xFFFF;
                    if (M2C_FIELD(temp_v0, u8 *, 0xC24) != 1) {
                        if (!(temp_s1 & 0xFFFF) && (func_0094C7B0() == 0x12) && (M2C_FIELD(temp_v0, s32 *, 0xC34) == 4)) {
                            func_00B13FC0();
                            func_00B13F90((M2C_FIELD(temp_v0, u8 *, 0xC1A) + M2C_FIELD(temp_v0, u8 *, 0xC0E)) & 0xFF);
                            M2C_FIELD(temp_v0, s32 *, 0xC28) = 7;
                            func_0026E840(0x84028400);
                        } else {
                            func_00B20ED0(temp_s1);
                            if (func_00B0A110(temp_s1) < 0) {
                                var_a1 = 1;
                            } else if ((func_0094C7B0() == 0x12) && (M2C_FIELD(temp_v0, s32 *, 0xC34) == 4)) {
                                var_a1 = 5;
                            } else {
                                var_a1 = 3;
                            }
                            func_00B16590(temp_s1, var_a1);
                            func_00B0A490();
                            M2C_FIELD(func_00B0A1E0(), u16 *, 0x488) = temp_s1;
                            if (func_0096F7D0(temp_s1) != 1) {
                                M2C_FIELD(temp_v0, u16 *, 0xADC) = temp_s1;
                            } else {
                                M2C_FIELD(temp_v0, u16 *, 0xADC) = func_009566B0(temp_s1);
                                func_00956900(M2C_FIELD(temp_v0, u16 *, 0xADC));
                            }
                            func_00B0A460();
                            func_00B08380(M2C_FIELD(temp_v0, s32 *, 0xC28));
                            func_00B07B10(temp_s1);
                            sp30 = 0x42200000;
                            sp34 = 0xC2960000;
                            sp38 = 0;
                            sp3C = 0;
                            func_009BE2E0(temp_s1, &sp30, 0, 1);
                            func_009BD930(0);
                            func_00958000(0x32);
                            func_0026E840(0x84028400);
                            M2C_FIELD(temp_v0, s32 *, 0xC28) = 1;
                        }
                    } else if (((func_0094C7B0() != 0x12) || (M2C_FIELD(temp_v0, s32 *, 0xC34) != 4)) && ((func_00B18E30(temp_s1) & 0xFF) == 0xFF)) {
                        func_0026E840(0x8C008005);
                    } else {
                        func_00B16420(M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A), M2C_FIELD(temp_v0, u8 *, 0xC25));
                        func_00B24B10();
                        M2C_FIELD(temp_v0, s16 *, 0xC22) = 0;
                        M2C_FIELD(temp_v0, u8 *, 0xC24) = 0U;
                        func_00B0E9C0(M2C_FIELD(temp_v0, u8 *, 0xC0A));
                        func_00B0E4C0(M2C_FIELD(temp_v0, u8 *, 0xC0A), M2C_FIELD(temp_v0, s32 *, 0xC30));
                        func_00B0D690(M2C_FIELD(temp_v0, u8 *, 0xC0C), func_00B15250(M2C_FIELD(temp_v0, u8 *, 0xC0A), (M2C_FIELD(temp_v0, u8 *, 0xC0E) + M2C_FIELD(temp_v0, u8 *, 0xC1A)) & 0xFF) & 0xFFFF, M2C_FIELD(temp_v0, u16 *, 0xC1E), M2C_FIELD(temp_v0, s32 *, 0xC2C));
                        func_0026E840(0x84028400);
                    }
                    break;
                case 5:
                    if (func_00B26F40(temp_a0) >= 0x10) {
                        func_00B13FB0();
                        M2C_FIELD(temp_v0, s32 *, 0xC28) = 8;
                        func_0026E840(0x84028400);
                    } else {
                        M2C_FIELD(temp_v0, void **, 0xC04) = func_0095F420(((void *)D_00B7FA38), 1, 0, 0);
                        sp4C = 0xFF;
                        sp4D = 0xDC;
                        sp4F = 0xFF;
                        sp4E = 0x28;
                        func_002F3F30(M2C_FIELD(temp_v0, void **, 0xC04), 0, 0, &sp4C);
                        func_002F3A00(M2C_FIELD(temp_v0, void **, 0xC04));
                        func_00958000(0x81);
                        func_0026E840(0x8C008005);
                    }
                    break;
                }
            } else {
                func_002F4E10(temp_a0);
                M2C_FIELD(temp_v0, void **, 0xC04) = NULL;
                if ((func_0094C7B0() == 0x12) && (M2C_FIELD(temp_v0, s32 *, 0xC48) < 0x12C)) {
                    M2C_FIELD(temp_v0, s32 *, 0xC48) = 0x12D;
                    func_00B13F70(0U);
                }
                if (M2C_FIELD(temp_v0, s32 *, 0xC34) != 4) {
                    func_00958000(0x24);
                } else if (M2C_FIELD(temp_v0, s32 *, 0xC28) != 5) {
                    func_00958000(0x2F);
                } else {
                    func_00958000(0x27);
                }
                func_0026E840(0x84028400);
            }
        }
    }
    return 0;
}
