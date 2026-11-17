/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { s64 lo, hi; } Q128 __attribute__((aligned(16)));

extern f32 D_003E7604;
extern s32 D_003E9D88;
extern s32 *D_003E9D8C;
extern s32 D_003E9D7C;
extern s32 D_003E9D80;
extern char D_005E5D60[];
extern char D_005E5D61[];
extern char D_005E5D70[];
extern char D_005E5D74[];
extern char D_005E5D78[];
extern char D_005E5D7C[];
extern char D_003B20A0[];
s32 func_001D5A10(s32);
s32 func_00154060(s32, s32, s32);
s32 func_001D7F90(s32);
void func_001D7E40(s32, s32);
void func_001D7840(s32, s32);
s32 func_001D7A20(s32, void *, s32);
s32 func_001EE0D0(void);
void func_001EDAE0(s32, s32);
void func_001EDA30(s32, s32);
void func_001EDA50(s32, void *);
void func_001ED880(s32, f32);
void func_001ED840(s32, s32);
s32 func_001EDD00(s32);
void func_001EF900(s32, s32);
void func_001EF920(s32, s32);
void func_001EF860(s32, void *);
void func_001EF370(s32, void *);
void func_001EEE60(s32, void *);

void func_002D3EB0(void) {
    f32 v8c;
    Q128 v70;
    f32 v60[4];
    f32 v50[4];
    f32 v40[4];
    s32 i;
    u8 t;
    f32 x, y, z;

    *(u8 *)D_005E5D60 = *(u8 *)D_005E5D60 & 0xFE;
    v8c = D_003E7604;
    *(u8 *)D_005E5D60 = *(u8 *)D_005E5D60 & 0xFD;
    v70 = *(Q128 *)D_003B20A0;
    *(u8 *)D_005E5D60 = *(u8 *)D_005E5D60 | 4;
    D_003E9D88 = func_001D5A10(0x1024F);
    if (D_003E9D88 == 0) return;
    t = *(u8 *)D_005E5D60;
    *(u8 *)D_005E5D61 = 0x11;
    *(u8 *)D_005E5D60 = t | 2;
    D_003E9D8C = (s32 *)func_00154060(0x11, 4, t);
    if (D_003E9D8C == 0) {
        D_003E9D88 = 0;
        return;
    }
    for (i = 0; i < 0x11; i++) {
        D_003E9D8C[i] = func_001D7F90(D_003E9D88);
        func_001D7E40(D_003E9D8C[i], i);
        func_001D7840(D_003E9D8C[i], 3);
    }
    func_001D7A20(*(s32 *)((char *)D_003E9D8C + 0x38), v60, 0);
    func_001D7A20(*(s32 *)((char *)D_003E9D8C + 0x38), v50, 1);
    y = v50[1] - v60[1];
    *(s32 *)D_005E5D70 = 0;
    *(s32 *)D_005E5D74 = 0;
    x = v50[0] - v60[0];
    *(s32 *)&v50[2] = 0;
    *(s32 *)&v50[1] = 0;
    *(s32 *)&v50[0] = 0;
    v50[3] = y;
    *(f32 *)D_005E5D7C = y;
    *(f32 *)D_005E5D78 = x;
    D_003E9D7C = func_001EE0D0();
    func_001EDAE0(D_003E9D7C, 1);
    func_001EDA30(D_003E9D7C, 0);
    x = v60[0];
    y = v60[1];
    *(s32 *)&v40[2] = 0;
    v40[0] = x;
    *(s32 *)&v40[3] = 0;
    v40[1] = y;
    func_001EDA50(D_003E9D7C, v40);
    func_001ED880(D_003E9D7C, -200.0f);
    func_001ED840(D_003E9D7C, 3);
    D_003E9D80 = func_001EDD00(D_003E9D7C);
    func_001EF900(D_003E9D80, 0);
    func_001EF920(D_003E9D80, 0);
    func_001EF860(D_003E9D80, &v70);
    func_001EF370(D_003E9D80, v50);
    func_001EEE60(D_003E9D80, &v8c);
}
