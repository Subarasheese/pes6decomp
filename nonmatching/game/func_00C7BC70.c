/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D5960(void *, s16);
extern void func_002D55F0(void *);
extern void func_002D5630(void *, s32);
extern s32 func_002F9370(void *);
extern int func_002D55B0(void *);
extern void func_002D5980(void *, s16);
extern void func_002D5610(void *);
extern int func_002D5850(int);
extern s32 func_002D5870(void *);
extern void func_001D7D80(void *, s16);
extern void func_001D7D60(void *, s8);
extern void func_001D78B0(void *, u8);
s32 func_002D58A0(M2C_UNK *);                       /* extern */
extern s32 D_003EA84C;
extern s8 D_003EA850;
extern void *D_00CCBF20;
extern char D_00CCBF24[];
extern char D_00CCBF2C[];
extern char D_00CCBF30[];
extern char D_00CCBF3C[];
extern char D_00CCBF44[];
extern char D_00CCBF48[];
extern char D_00CCBF49[];
extern char D_00CCBF4C[];

void func_00C7BC70(void) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 var_s0;

    if ((*(u8 *)D_00CCBF49) & 1) {
        if (((*(s32 *)D_00CCBF4C) >= 0) && ((*(s32 *)D_00CCBF4C) < 0xA)) {
            D_003EA84C = 0x46;
            D_003EA850 = 1;
        } else {
            func_002D55F0(((void *)D_00CCBF3C));
            D_003EA84C = 0;
            D_003EA850 = 0;
        }
        (*(u8 *)D_00CCBF49) = ((*(u8 *)D_00CCBF49) & ~1) | (0 & 1);
    }
    if (D_003EA850 != 0) {
        temp_v0 = D_003EA84C - 1;
        D_003EA84C = temp_v0;
        if (temp_v0 == 0) {
            temp_s0 = (*(s32 *)D_00CCBF4C);
            D_003EA850 = 0;
            func_001D7D80(func_002F9370(D_00CCBF20), (s16) ((s64) ((s64) temp_s0 << 0x30) >> 0x30));
            if ((*(u8 *)D_00CCBF48) & 1) {
                func_001D7D60(func_002F9370(D_00CCBF20), 1);
            }
            func_002D5630(((void *)D_00CCBF3C), (*(s32 *)D_00CCBF44));
            func_002D5980(((void *)D_00CCBF24), 0xFF);
            func_002D5960(((void *)D_00CCBF24), 8);
        }
    }
    if (func_002D55B0(((void *)D_00CCBF3C)) != 0) {
        func_002D5980(((void *)D_00CCBF24), 0);
        func_002D5960(((void *)D_00CCBF24), 0x10);
        func_002D5610(((void *)D_00CCBF3C));
    }
    if ((func_002D5870(((void *)D_00CCBF24)) == 1) || ((*(s32 *)D_00CCBF30) != (*(s32 *)D_00CCBF2C))) {
        temp_v0_2 = func_002D58A0(((void *)D_00CCBF24));
        if ((*(u8 *)D_00CCBF48) & 1) {
            temp_v0_3 = temp_v0_2 * (*(s32 *)D_00CCBF30);
            var_s0 = temp_v0_3 >> 8;
            if (temp_v0_3 < 0) {
                var_s0 = (s32) (temp_v0_3 + 0xFF) >> 8;
            }
            func_001D78B0(func_002F9370(D_00CCBF20), var_s0 & 0xFF);
        }
        (*(s32 *)D_00CCBF2C) = (*(s32 *)D_00CCBF30);
    }
    if ((func_002D5850((s32) ((void *)D_00CCBF24)) == 0) && ((*(u8 *)D_00CCBF48) & 1)) {
        func_001D7D60(func_002F9370(D_00CCBF20), 0);
    }
}
