/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_001E81B0(void);
extern s32 func_001E6C50(void *);
extern void * func_001E6E10(s32);
M2C_UNK func_001C4730(u8 *, u8 *, M2C_UNK);         /* extern */
M2C_UNK func_001C48E8(u8 *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_001E8350(u32, M2C_UNK, s16 *, u8 *, u8 *); /* extern */
u8 *func_002F7F80(s16, s16);                        /* extern */
extern u32 D_003EAF68;
extern s32 D_003EAF6C;
extern char D_00CB5BB0[];
extern char D_00CB5BB2[];
extern char D_00CB5BB4[];
extern char D_00CB5BB6[];
extern char D_00CB5BD0[];

u32 func_00BA4170(M2C_UNK arg0, u32 arg1, s32 arg2) {
    u8 sp70;
    u8 spB0;
    s16 sp2B8;
    s16 sp2BA;
    s16 sp2BC;
    s16 sp2BE;
    s32 var_a0;
    s32 var_s0_2;
    s32 var_s2;
    u8 *temp_v0;
    u8 *var_s0;
    u8 *var_s1;
    void *temp_v0_2;
    void *temp_v0_3;

    sp2B8 = (*(s16 *)D_00CB5BB0);
    sp2BA = (*(s16 *)D_00CB5BB2);
    sp2BC = (*(s16 *)D_00CB5BB4);
    sp2BE = (*(s16 *)D_00CB5BB6);
    temp_v0 = func_002F7F80((*(s16 *)D_00CB5BB2), (*(s16 *)D_00CB5BB0));
    if (*temp_v0 == 0) {
        func_001C48E8(temp_v0 + 0x60, 0x11, 0x200);
        var_s2 = 0;
        var_s1 = ((void *)D_00CB5BD0);
        var_s0 = temp_v0;
        do {
            if (var_s2 < 0xF) {
                func_001C4730(var_s0 + 0x20, var_s1, 4);
            } else {
                M2C_FIELD(var_s0, s8 *, 0x20) = 0xFF;
                M2C_FIELD(var_s0, s8 *, 0x21) = 0xFF;
                M2C_FIELD(var_s0, s8 *, 0x22) = 0xFF;
                M2C_FIELD(var_s0, s8 *, 0x23) = 0;
            }
            var_s2 += 1;
            var_s1 += 4;
            var_s0 += 4;
        } while (var_s2 < 0x10);
    }
    func_001C4730(&spB0, temp_v0 + 0x60, 0x200);
    func_001C4730(&sp70, temp_v0 + 0x20, 0x40);
    switch (arg2) {                                 /* irregular */
    case 1:
        func_001E8350(arg1, 1, &sp2B8, &spB0, &sp70);
block_29:
        return arg1;
    case 2:
        var_a0 = 0;
loop_15:
        if (((u32) D_003EAF68 >> var_a0) & 1) {
            var_a0 += 1;
            if (var_a0 >= 0x20) {
                var_s0_2 = 0x7346;
            } else {
                goto loop_15;
            }
        } else {
            var_s0_2 = var_a0 + 0x7346;
            D_003EAF68 |= 1 << var_a0;
            temp_v0_2 = func_001E6E10(var_s0_2);
            if (temp_v0_2 != NULL) {
                func_001E6C50(temp_v0_2);
            }
            D_003EAF6C += 1;
        }
        func_001E8350((u32) var_s0_2, 1, &sp2B8, &spB0, &sp70);
        func_001E81B0();
        if (((u32) var_s0_2 >= 0x7346U) && ((u32) var_s0_2 < 0x7367U) && (((u32) D_003EAF68 >> (var_s0_2 - 0x7346)) & 1)) {
            D_003EAF6C -= 1;
            temp_v0_3 = func_001E6E10(var_s0_2);
            if (temp_v0_3 != NULL) {
                func_001E6C50(temp_v0_3);
            }
            D_003EAF68 &= ~(1 << (var_s0_2 - 0x7346));
        }
        goto block_29;
    default:
        return 0U;
    }
}
