/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
M2C_UNK func_008227B0();                            /* extern */
s32 func_00827450(M2C_UNK);                         /* extern */
s32 func_0082B4C0(M2C_UNK);                         /* extern */
s32 func_0082C5B0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0082C7C0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C840(M2C_UNK);                     /* extern */
s32 func_0082C8A0(M2C_UNK);                         /* extern */
M2C_UNK func_0082C980(M2C_UNK);                     /* extern */
s32 func_0082CA10(M2C_UNK);                         /* extern */
M2C_UNK func_0082CA50(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00832A40();                                /* extern */
s32 func_00832BC0();                                /* extern */
M2C_UNK func_0083C4D0();                            /* extern */
s32 func_00862110(s32, M2C_UNK);                    /* extern */
s32 func_008769A0(s32, M2C_UNK *);                  /* extern */
s32 func_00D0BAF0();                                /* extern */
extern char D_008A8394[];
extern char D_008AA104[];
extern char D_008AA108[];
extern char D_008AA65C[];

s32 func_00832670(void) {
    M2C_UNK *var_v0_3;
    M2C_UNK *var_v0_5;
    s32 temp_s1;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;
    s32 var_v0;
    s32 var_v0_2;
    s32 var_v1;
    u16 var_v0_4;
    u16 var_v0_6;

    temp_s1 = func_0082C2A0();
    var_s0 = 0;
    if (func_0082B4C0(5) == 1) {
        var_s0 = 1;
    }
    if (temp_s1 == 0) {
        func_0082CA50(0x8C, -1);
    }
    temp_v0 = func_0082CA10(0x8C);
    switch (temp_v0) {                              /* irregular */
    case 4:
        func_0082CA50(0x8C, 0);
        func_0082C690(0x9B, 0);
        var_v1 = 1;
        if (func_00827450(5) == 1) {
            var_v1 = 3;
        }
        return var_v1;
    case 3:
        func_0082CA50(0x8C, 0);
        func_0082C690(0x9B, 0);
        if (func_00827450(5) != 1) {
            var_v0 = 4;
        } else {
            var_v0 = 3;
        }
        return var_v0;
    case 2:
        if (func_0082C8A0(0x9B) != 1) {
            if (func_00862110(temp_s1, 5) == 0) {
                func_0082CA50(0x8C, -1);
            }
            if (func_0082C5B0(0x9B) >= 0x1C21) {
                func_0082CA50(0x8C, 4);
            }
            if (var_s0 == 1) {
                func_0082CA50(0x8C, -1);
            }
        } else if (func_0082C7C0(0x9B) != 0) {
            func_0082C980(0x8C);
            func_0082C980(0x8C);
        } else {
            func_0082C980(0x8C);
        }
block_89:
        return 0;
    case 1:
        if (func_00862110(temp_s1, 5) != 1) {
            func_0082CA50(0x8C, -1);
        } else {
            if (func_008769A0(temp_s1 + 0xB4, ((void *)D_008AA65C)) != 0) {
                func_0082CA50(0x8C, -1);
            } else {
                func_0082C840(0x9B);
                func_0082C690(0x9B, 0);
                func_0082C980(0x8C);
            }
            if (var_s0 == 1) {
                func_0082CA50(0x8C, -1);
            }
        }
        goto block_89;
    case 0:
        func_0083C4D0();
        if (((void *)D_008AA65C) != NULL) {
            M2C_FIELD(((void *)D_008AA65C), u8 *, 1) = (u8) (*(u8 *)D_008AA104);
        }
        if (((void *)D_008AA65C) != NULL) {
            M2C_FIELD(((void *)D_008AA65C), u8 *, 0) = (u8) (*(u8 *)D_008AA108);
        }
        if (func_00D0BAF0() == 0) {
            var_v0_3 = NULL;
        } else {
            var_v0_3 = ((void *)D_008A8394);
        }
        if (var_v0_3 == NULL) {
            var_v0_3 = NULL;
        }
        if (var_v0_3 != NULL) {
            var_v0_4 = M2C_FIELD(var_v0_3, u16 *, 0x10);
            if ((s32) var_v0_4 >= 0x29) {
                goto block_32;
            }
        } else {
block_32:
            var_v0_4 = 0;
        }
        if (((void *)D_008AA65C) != NULL) {
            M2C_FIELD(((void *)D_008AA65C), s8 *, 2) = (s8) (var_v0_4 & 0xFF);
        }
        if (func_00D0BAF0() == 0) {
            var_v0_5 = NULL;
        } else {
            var_v0_5 = ((void *)D_008A8394);
        }
        if (var_v0_5 == NULL) {
            var_v0_5 = NULL;
        }
        if (var_v0_5 != NULL) {
            var_v0_6 = M2C_FIELD(var_v0_5, u16 *, 0x8C);
        } else {
            var_v0_6 = 0;
        }
        if (((void *)D_008AA65C) != NULL) {
            M2C_FIELD(((void *)D_008AA65C), s16 *, 4) = (s16) (var_v0_6 & 0xFFFF);
        }
        temp_v0_2 = func_00832BC0();
        if (((void *)D_008AA65C) != NULL) {
            M2C_FIELD(((void *)D_008AA65C), s32 *, 8) = temp_v0_2;
        }
        temp_v0_3 = func_00832A40();
        if (((void *)D_008AA65C) != NULL) {
            M2C_FIELD(((void *)D_008AA65C), s32 *, 0xC) = temp_v0_3;
        }
        func_008227B0();
        func_0082C980(0x8C);
        goto block_89;
    default:
        func_0082CA50(0x8C, 0);
        func_0082C690(0x9B, 0);
        if (func_00827450(5) != 1) {
            var_v0_2 = 2;
        } else {
            var_v0_2 = 3;
        }
        return var_v0_2;
    }
}
