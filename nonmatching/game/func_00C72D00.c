/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 D_003EA820;
extern s32 func_00C8B210(void);
extern void func_00C72940(s32 a, s32 b, s32 c);
extern void func_001EF900(s32 a, s32 b);
extern void func_001EE630(s32 a, void *b);
extern void func_001F6FC0(s32 a, void *b, s32 c, s32 d);
extern void func_001EF370(s32 a, void *b);
extern f32 func_00C76ED0(void);
extern char D_00CCBD30[];
extern char D_00CCBD4C[];
extern char D_00CCCE4C[];
extern char D_00CA85D8[], D_00CA85DC[], D_00CA8610[], D_00CA8614[];
extern char D_00CA8700[], D_00CA8704[], D_00CA86E0[], D_00CA86E4[];
extern char D_00CA8708[], D_00CA870C[], D_00CA86C0[], D_00CA86C4[];
extern char D_00CA8650[], D_00CA8654[], D_00CA8660[], D_00CA8664[], D_00CA8666[];
extern char D_00CA86B0[], D_00CA86B8[];
extern char D_00591DCC[], D_00591EEE[];

void func_00C72D00(void)
{
    s32 z, f, s0, s1, s4, s5, s6, s7, fp, i, idx, s3;
    s32 tA[2], tD[2], tE[2], tG[2], tB[2], tC[2], tF[2];
    s32 *arr = (s32 *)D_00CCCE4C;
    s32 *p;
    u8 *b;
    s32 b1d;

    z = func_00C8B210() == 0;
    b = (u8 *)D_00CCBD30 + D_003EA820 * 80;
    f = b[0x29] & 1;
    s4 = f & (z & (((s8 *)b)[0x1F] & ((s8 *)b)[0x1E]));
    s6 = ((s8 *)b)[0x20];
    s1 = f & (z & (((s8 *)b)[0x22] & ((s8 *)b)[0x21]));
    s7 = ((s8 *)b)[0x23];
    s5 = f & (z & (((s8 *)b)[0x25] & ((s8 *)b)[0x24]));
    fp = ((s8 *)b)[0x26];
    s0 = f & (z & (((s8 *)b)[0x28] & ((s8 *)b)[0x27]));
    b1d = ((s8 *)b)[0x1D];

    if (b1d != s4) {
        func_00C72940(1, D_003EA820 * 80, D_003EA820);
        tA[0] = *(s32 *)D_00CA85D8; tA[1] = *(s32 *)D_00CA85DC;
        idx = tA[D_003EA820];
        for (i = 0; i < 8; i++)
            func_001EF900(arr[idx + i], s4 & 0xFF);
        tB[0] = *(s32 *)D_00CA8610; tB[1] = *(s32 *)D_00CA8614;
        idx = tB[D_003EA820];
        func_001EF900(arr[idx], ((D_00CCBD4C[0] & 1) ? 0 : s4) & 0xFF);
        D_00CCBD30[D_003EA820 * 80 + 0x1D] = s4;
    }
    if (s6 != s1) {
        f32 v[4];
        tC[0] = *(s32 *)D_00CA8700; tC[1] = *(s32 *)D_00CA8704;
        s3 = ((u8 *)D_00591EEE)[D_003EA820 ^ *(u8 *)D_00591DCC];
        b = (u8 *)D_00CCBD30 + D_003EA820 * 80;
        *(s32 *)(b + 0x3C) = s3;
        s6 = *(s32 *)b;
        s4 = arr[tC[D_003EA820]];
        func_001EE630(s4, D_00CA8660 + s3 * 8);
        func_001F6FC0(s6, v, (s3 + 5) & 0xFFFF, 2);
        v[2] = (f32)*(s16 *)(D_00CA8664 + s3 * 8);
        v[3] = (f32)*(s16 *)(D_00CA8666 + s3 * 8);
        func_001EF370(s4, v);
        tD[0] = *(s32 *)D_00CA8650; tD[1] = *(s32 *)D_00CA8654;
        idx = tD[D_003EA820];
        for (i = 0; i < 2; i++)
            func_001EF900(arr[idx + i], s1 & 0xFF);
        D_00CCBD30[D_003EA820 * 80 + 0x20] = s1;
    }
    if (s7 != s5) {
        tE[0] = *(s32 *)D_00CA86E0; tE[1] = *(s32 *)D_00CA86E4;
        func_001EF900(arr[tE[D_003EA820]], s5 & 0xFF);
        D_00CCBD30[D_003EA820 * 80 + 0x23] = s5;
    }
    if (fp != s0) {
        f32 r = func_00C76ED0();
                s32 a4 = (s32)(132.0f * r);
        s8 a3 = (r <= 0.2f);
        b = (u8 *)D_00CCBD30 + D_003EA820 * 80;
        if (((s8 *)b)[0x27] == 1 && ((s8 *)b)[0x28] == 1) {
            s16 h[4];
            s32 w[4];
            *(s32 *)(b + 0x44) = a4;
            b[0x4C] = a3;
            tF[0] = *(s32 *)D_00CA8708; tF[1] = *(s32 *)D_00CA870C;
            s1 = arr[tF[D_003EA820]];
            if (a3 == 1) {
                h[0] = ((s16 *)D_00CA86B8)[0]; h[1] = ((s16 *)D_00CA86B8)[1];
                h[2] = ((s16 *)D_00CA86B8)[2]; h[3] = ((s16 *)D_00CA86B8)[3];
            } else {
                h[0] = ((s16 *)D_00CA86B0)[0]; h[1] = ((s16 *)D_00CA86B0)[1];
                h[2] = ((s16 *)D_00CA86B0)[2]; h[3] = ((s16 *)D_00CA86B0)[3];
            }
            func_001EE630(s1, h);
            func_001F6FC0(*(s32 *)(D_00CCBD30 + D_003EA820 * 80), w, 0, 2);
            w[3] = 0x40000000;
            *(f32 *)&w[2] = (f32)*(s32 *)(D_00CCBD30 + D_003EA820 * 80 + 0x44);
            func_001EF370(s1, w);
        }
        tG[0] = *(s32 *)D_00CA86C0; tG[1] = *(s32 *)D_00CA86C4;
        idx = tG[D_003EA820];
        for (i = 0; i < 4; i++)
            func_001EF900(arr[idx + i], s0 & 0xFF);
        D_00CCBD30[D_003EA820 * 80 + 0x26] = s0;
    }
}
