/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 D_003EA820;
extern char D_00591DCC[];
extern char D_00CCBD5C[];
extern char D_00CCBD60[];
extern char D_00CCBD64[];
extern char D_00CCBD4C[];
extern char D_00CCBD4D[];
extern char D_00CCBD30[];
extern char D_00CCCE4C[];
extern char D_00CA86F0[];
extern char D_00CA86F4[];
extern char D_00CA86F8[];
extern char D_00CA86FC[];
extern char D_00CA8610[];
extern char D_00CA8614[];
extern s32 func_00C8B370(s32);
extern s32 func_00C77020(s32);
extern s32 func_00C76F90(void);
extern s32 func_00C76F60(void);
extern s32 func_001B97C0(s32);
extern s32 func_0020D080(s32, s32);
extern void func_001F6FC0(s32, void *, s32, s32);
extern void func_001B4F60(s32, void *, s32, s32, s32);
extern void func_001EF900(s32, s32);
extern void func_001EE630(s32, void *);

void func_00C72940(s32 arg0) {
    struct { f32 v40[4]; f32 v50[4]; f32 v60[4]; s16 h[4]; s32 c[2]; s32 b[2]; s32 a[2]; } L;
    s32 s0, s1, s2, v0;

    s1 = D_003EA820 ^ *(u8 *)D_00591DCC;
    v0 = func_00C77020(func_00C8B370(D_003EA820));
    s0 = func_00C76F90();
    v0 = func_001B97C0(func_00C76F60());
    if (s0 == *(s32 *)(D_00CCBD5C + D_003EA820 * 80)
        && s1 == *(s32 *)(D_00CCBD60 + D_003EA820 * 80)
        && v0 == *(s32 *)(D_00CCBD64 + D_003EA820 * 80)
        && arg0 != 1) {
        return;
    }
    *(s32 *)(D_00CCBD5C + D_003EA820 * 80) = s0;
    *(s32 *)(D_00CCBD60 + D_003EA820 * 80) = s1;
    *(s32 *)(D_00CCBD64 + D_003EA820 * 80) = v0;
    L.a[0] = *(s32 *)D_00CA86F0;
    L.a[1] = *(s32 *)D_00CA86F4;
    s1 = *(s32 *)(D_00CCCE4C + L.a[D_003EA820] * 4);
    if (*(u8 *)D_00CCBD4C & 1) {
        s0 = func_0020D080(*(s32 *)(D_00CCBD60 + D_003EA820 * 80), *(s32 *)(D_00CCBD5C + D_003EA820 * 80));
        s2 = *(s32 *)(D_00CCBD30 + D_003EA820 * 80);
        func_001F6FC0(s2, L.v60, 3, 2);
        func_001F6FC0(s2, L.v50, 4, 2);
        L.v60[2] = (L.v60[0] + L.v60[2]) - L.v50[0];
        L.v60[0] = L.v50[0];
        func_001B4F60(s1, L.v60, s0, 5, 5);
        func_001EF900(s1, *(u8 *)(D_00CCBD4D + D_003EA820 * 80));
    } else {
        s0 = func_0020D080(*(s32 *)(D_00CCBD60 + D_003EA820 * 80), *(s32 *)(D_00CCBD5C + D_003EA820 * 80));
        func_001F6FC0(*(s32 *)(D_00CCBD30 + D_003EA820 * 80), L.v40, 3, 2);
        func_001B4F60(s1, L.v40, s0, 5, 5);
        func_001EF900(s1, *(u8 *)(D_00CCBD4D + D_003EA820 * 80));
    }
    L.b[0] = *(s32 *)D_00CA86F8;
    L.b[1] = *(s32 *)D_00CA86FC;
    {
        s32 a1 = L.b[D_003EA820];
        s0 = *(s32 *)(D_00CCCE4C + a1 * 4);
        if (*(u8 *)D_00CCBD4C & 1) {
            L.c[0] = *(s32 *)D_00CA8610;
            L.c[1] = *(s32 *)D_00CA8614;
            func_001EF900(*(s32 *)(D_00CCCE4C + L.c[D_003EA820] * 4), 0);
            return;
        }
    }
    {
        s32 a1 = *(s32 *)(D_00CCBD64 + D_003EA820 * 80);
        if (a1 >= 0) {
            if (a1 < 24 && a1 != 23) {
                L.h[0] = (a1 / 8) * 29 + 1;
                L.h[2] = 0x1C;
                L.h[1] = (a1 % 8) * 16 + 1;
                L.h[3] = 0xF;
                func_001EE630(s0, L.h);
            }
        }
        func_001EF900(s0, *(u8 *)(D_00CCBD4D + D_003EA820 * 80));
    }
}
