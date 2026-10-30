/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001DF4F0(void *, s8);
extern s32 func_001F3D10(s32, u8);
extern void func_002D5630(void *, s32);
extern int func_002D55B0(void *);
extern void func_001F0A40(void *, s8);
extern void func_001DF420(void *, u8);
extern void func_002D5610(void *);
extern void func_001F1EA0(void *);
M2C_UNK func_001DF7B0(void *);                      /* extern */
M2C_UNK func_00C886D0();                            /* extern */
extern void *D_00CCCDF0;
extern void *D_00CCCDF4;
extern char D_00CCCDF8[];
extern char D_00CCCDFC[];
extern char D_00CCCE00[];
extern char D_00CCCE04[];
extern char D_00CCCE08[];
extern char D_00CCCE0C[];
extern char D_00CCCE10[];

void func_00C88390(void) {
    s32 temp_s0;
    s32 var_s1;
    s32 var_s2;

    var_s1 = (*(s32 *)D_00CCCE00);
    if (!((*(u8 *)D_00CCCE04) & 1)) {
        var_s2 = 0;
    } else {
        var_s2 = (*(s32 *)D_00CCCDFC);
    }
    temp_s0 = (*(s32 *)D_00CCCE08);
    if (temp_s0 != (*(s32 *)D_00CCCE0C)) {
        if (((u64) ((s64) (*(u8 *)D_00CCCE04) << 0x3C) >> 0x3F) != 0) {
            func_001F1EA0(D_00CCCDF4);
            D_00CCCDF4 = NULL;
            (*(s32 *)D_00CCCDF8) = 0;
            if (D_00CCCDF0 != NULL) {
                func_001DF7B0(D_00CCCDF0);
                D_00CCCDF0 = NULL;
            }
            (*(s32 *)D_00CCCE0C) = 3;
            (*(u8 *)D_00CCCE04) = ((*(u8 *)D_00CCCE04) & ~8) | ((0 & 1) * 8);
            (*(s32 *)D_00CCCE08) = 3;
            func_002D5610(((void *)D_00CCCE10));
        }
        if (temp_s0 < 3) {
            func_00C886D0();
            func_001DF4F0(D_00CCCDF0, 1);
            func_001F3D10((*(s32 *)D_00CCCDF8), 1U);
            func_002D5630(((void *)D_00CCCE10), 0xB4);
        }
        (*(s32 *)D_00CCCE0C) = temp_s0;
    }
    if (func_002D55B0(((void *)D_00CCCE10)) == 1) {
        if (((u64) ((s64) (*(u8 *)D_00CCCE04) << 0x3D) >> 0x3F) != 0) {
            (*(u8 *)D_00CCCE04) = ((*(u8 *)D_00CCCE04) & ~1) | (0 & 1);
        }
        func_002D5610(((void *)D_00CCCE10));
    }
    if (var_s2 >= var_s1) {
        if (var_s1 < var_s2) {
            var_s1 += 0x20;
            if (var_s2 < var_s1) {
                goto block_23;
            }
        }
    } else {
        var_s1 -= 0x20;
        if (var_s1 < var_s2) {
block_23:
            var_s1 = var_s2;
        }
    }
    (*(s32 *)D_00CCCE00) = var_s1;
    if (((u64) ((s64) (*(u8 *)D_00CCCE04) << 0x3C) >> 0x3F) != 0) {
        func_001DF420(D_00CCCDF0, var_s1 & 0xFF);
        func_001F0A40((void *) (*(s32 *)D_00CCCDF8), var_s1 & 0xFF);
    }
    if ((((u64) ((s64) (*(u8 *)D_00CCCE04) << 0x3C) >> 0x3F) != 0) && !((*(u8 *)D_00CCCE04) & 1) && (var_s2 == 0) && (var_s1 == 0)) {
        func_001F1EA0(D_00CCCDF4);
        D_00CCCDF4 = NULL;
        (*(s32 *)D_00CCCDF8) = 0;
        if (D_00CCCDF0 != NULL) {
            func_001DF7B0(D_00CCCDF0);
            D_00CCCDF0 = NULL;
        }
        (*(s32 *)D_00CCCE0C) = 3;
        (*(u8 *)D_00CCCE04) = ((*(u8 *)D_00CCCE04) & ~8) | ((0 & 1) * 8);
        (*(s32 *)D_00CCCE08) = 3;
        func_002D5610(((void *)D_00CCCE10));
    }
}
