/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5630(void *, s32);
extern s32 func_002F9370(void *);
extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern s32 func_002D5870(void *);
extern void func_001D78B0(void *, u8);
extern void func_002D5960(void *, s16);
extern void func_002D55F0(void *);
extern int func_002D55B0(void *);
extern void func_002D5980(void *, s16);
extern int func_002D5850(int);
extern void func_002D5610(void *);
extern s32 func_00B25A90(void);
s32 func_002D58A0(M2C_UNK *);                       /* extern */
M2C_UNK func_00B25B60();                            /* extern */
M2C_UNK func_00B25B70(s32, s32, u8);                /* extern */
s32 func_00C8B210();                                /* extern */
extern void *D_00CCBFA0;
extern char D_00CCBFA4[];
extern char D_00CCBFB0[];
extern char D_00CCBFB4[];
extern char D_00CCBFBC[];
extern char D_00CCBFC4[];
extern char D_00CCBFC8[];
extern char D_00CCBFC9[];
extern char D_00CCBFCC[];
extern char D_00CCBFD0[];

void func_00C7D110(void) {
    s32 temp_a0;
    s32 temp_a1;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 var_s0;
    s32 var_v1;
    u8 temp_a2;

    if ((*(u8 *)D_00CCBFC9) & 1) {
        temp_s0 = (*(s32 *)D_00CCBFCC);
        if (temp_s0 < 7) {
            func_001D7D80(func_002F9370(D_00CCBFA0), (s16) ((s64) ((s64) temp_s0 << 0x30) >> 0x30));
            (*(u8 *)D_00CCBFC9) = ((*(u8 *)D_00CCBFC9) & ~2) | 2;
            func_002D5630(((void *)D_00CCBFBC), (*(s32 *)D_00CCBFC4));
            func_002D5980(((void *)D_00CCBFA4), 0xFF);
            func_002D5960(((void *)D_00CCBFA4), 8);
        } else {
            func_002D55F0(((void *)D_00CCBFBC));
        }
        (*(u8 *)D_00CCBFC9) = ((*(u8 *)D_00CCBFC9) & ~1) | (0 & 1);
    }
    if (func_002D55B0(((void *)D_00CCBFBC)) != 0) {
        func_002D5980(((void *)D_00CCBFA4), 0);
        func_002D5960(((void *)D_00CCBFA4), 0x10);
        func_002D5610(((void *)D_00CCBFBC));
    }
    if ((func_002D5870(((void *)D_00CCBFA4)) == 1) || ((*(s32 *)D_00CCBFB4) != (*(s32 *)D_00CCBFB0))) {
        temp_s0_2 = func_002D58A0(((void *)D_00CCBFA4));
        if ((*(u8 *)D_00CCBFC8) & 1) {
            temp_v0 = func_002F9370(D_00CCBFA0);
            temp_a0 = temp_s0_2 * (*(s32 *)D_00CCBFB4);
            var_v1 = temp_a0 >> 8;
            if (temp_a0 < 0) {
                var_v1 = (s32) (temp_a0 + 0xFF) >> 8;
            }
            func_001D78B0((void *) temp_v0, var_v1 & 0xFF);
        }
        (*(s32 *)D_00CCBFB0) = (*(s32 *)D_00CCBFB4);
    }
    if (func_002D5850((s32) ((void *)D_00CCBFA4)) == 0) {
        (*(s32 *)D_00CCBFD0) = 7;
        (*(u8 *)D_00CCBFC9) = ((*(u8 *)D_00CCBFC9) & ~2) | ((0 & 1) * 2);
    }
    var_s0 = ((u64) ((s64) (*(u8 *)D_00CCBFC9) << 0x3E) >> 0x3F) != 0;
    if (var_s0 != 0) {
        var_s0 = func_00C8B210() == 0;
    }
    if (var_s0 != ((u64) ((s64) (*(u8 *)D_00CCBFC9) << 0x3D) >> 0x3F)) {
        if ((*(u8 *)D_00CCBFC8) & 1) {
            func_001D7D60(func_002F9370(D_00CCBFA0), var_s0 & 0xFF);
        }
        temp_a2 = (*(u8 *)D_00CCBFC9);
        temp_a1 = (var_s0 & 1) * 4;
        (*(u8 *)D_00CCBFC9) = (temp_a2 & ~4) | temp_a1;
        if (var_s0 == 0) {
            (*(s32 *)D_00CCBFD0) = func_00B25A90();
            func_00B25B60();
            return;
        }
        if ((u32) ((*(s32 *)D_00CCBFD0) - 3) < 2U) {
            func_00B25B70((*(s32 *)D_00CCBFD0), temp_a1, temp_a2);
            (*(s32 *)D_00CCBFD0) = 7;
        }
    }
}
