/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00278C20(int);
extern int func_0013E2B0(void);
extern void func_002BB8F0(float);
extern void func_0013E2D0(int);
extern int func_0013E280(void);
extern void func_0027A880(int);
extern void func_001A3800(int);
extern void func_0013E2A0(int);
M2C_UNK func_002BC2B0();                            /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_009E1CB0(M2C_UNK);                     /* extern */
M2C_UNK func_00BA9280();                            /* extern */
s32 func_00C3A1A0();                                /* extern */
extern u8 D_003EA7F4;
extern u8 D_003EA7F5;
extern u8 D_003EA7F6;
extern M2C_UNK (*D_00CBCAB8)(s32);
extern char D_00CBCABC[];
extern char D_00CBCAC0[];
extern s32 (*D_00CCB900)();

s32 func_00C394C0(void) {
    s32 temp_v1;
    s32 var_v0;

    temp_v1 = func_009E1C90(4) & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 2:
        D_003EA7F6 = D_003EA7F5;
        func_0013E2D0((s32) D_003EA7F6);
        func_0013E2A0((s32) D_003EA7F4);
        D_00CBCAB8((*(s32 *)D_00CBCABC));
        func_001A3800(1);
        func_0027A880(1);
        return 1;
    case 0:
        D_003EA7F4 = func_0013E280();
        D_003EA7F5 = func_0013E2B0();
        D_003EA7F6 = func_0013E2B0() * 2;
        func_0013E2D0((s32) D_003EA7F6);
        func_0013E2A0(2);
        D_00CBCAB8((*(s32 *)D_00CBCAC0));
        func_00BA9280();
        func_001A3800(0);
        func_0027A880(0);
        func_00278C20(0);
        func_002BC2B0();
        func_002BB8F0(20.0f);
        D_00CCB900 = func_00C3A1A0;
        func_009E1CB0(4);
        /* fallthrough */
    case 1:
        if (((D_00CCB900() & 0xFF) == 1) && (D_00CCB900 == NULL)) {
            var_v0 = 1 & 0xFF;
        } else {
            var_v0 = 0;
        }
        if (var_v0 != 0) {
            func_009E1CB0(4);
        }
        /* fallthrough */
    default:
        return 0;
    }
}
