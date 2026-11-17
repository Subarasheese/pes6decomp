/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_00C73390(void);
void func_00C72D00(void);
void func_00C72940(s32);
f32 func_00C76ED0(void);
void func_001EE630(s32, void *);
void func_001F6FC0(s32, void *, s32, s32);
void func_001EF370(s32, void *);

extern s32 D_003EA820;
extern char D_00591DCC[];
extern char D_00591EEE[];
extern char D_00CCBD6C[];
extern char D_00CCBD30[];
extern char D_00CCBD74[];
extern char D_00CCBD57[];
extern char D_00CCBD58[];
extern char D_00CCBD7C[];
extern char D_00CCCE4C[];
extern char D_00CA8660[];
extern char D_00CA8664[];
extern char D_00CA8666[];
extern char D_00CA8700[];
extern char D_00CA8704[];
extern char D_00CA8708[];
extern char D_00CA870C[];
extern char D_00CA86B0[];

void func_00C72620(void) {
    union { f32 f[2]; s32 i[2]; } tmpA;
    union { f32 f[2]; s32 i[2]; } tmpB;
    s16 v1[4];
    f32 w1[4];
    f32 w2[4];
    s32 i, s1, s2, s3, s0, a5, flag;
    f32 f;

    func_00C73390();
    func_00C72D00();
    func_00C72940(0);
    i = D_003EA820;
    s1 = *(u8 *)(D_00591EEE + (i ^ *(u8 *)D_00591DCC));
    if (s1 != *(s32 *)(D_00CCBD6C + i * 80)) {
        *(s32 *)(D_00CCBD6C + i * 80) = s1;
        tmpA.f[0] = *(f32 *)D_00CA8700;
        tmpA.f[1] = *(f32 *)D_00CA8704;
        s0 = s1 << 3;
        s2 = *(s32 *)(D_00CCBD30 + i * 80);
        s3 = *(s32 *)(D_00CCCE4C + tmpA.i[i] * 4);
        func_001EE630(s3, D_00CA8660 + s0);
        func_001F6FC0(s2, w1, (u16)(s1 + 5), 2);
        w1[2] = (f32)*(s16 *)(D_00CA8664 + s0);
        w1[3] = (f32)*(s16 *)(D_00CA8666 + s0);
        func_001EF370(s3, w1);
    }
    f = func_00C76ED0();
    a5 = (s32)(132.0f * f);
    flag = (f <= 0.2f);
    flag = (s8)flag;
    i = D_003EA820;
    if (a5 != *(s32 *)(D_00CCBD74 + i * 80)) {
        if (*(s8 *)(D_00CCBD57 + i * 80) != 1) return;
        if (*(s8 *)(D_00CCBD58 + i * 80) == 1) {
            *(s32 *)(D_00CCBD74 + i * 80) = a5;
            tmpB.f[0] = *(f32 *)D_00CA8708;
            tmpB.f[1] = *(f32 *)D_00CA870C;
            s0 = *(s32 *)(D_00CCCE4C + tmpB.i[i] * 4);
            *(s8 *)(D_00CCBD7C + i * 80) = flag;
            if (flag == 1) {
                v1[0] = *(s16 *)(D_00CA86B0 + 8);
                v1[1] = *(s16 *)(D_00CA86B0 + 10);
                v1[2] = *(s16 *)(D_00CA86B0 + 12);
                v1[3] = *(s16 *)(D_00CA86B0 + 14);
            } else {
                v1[0] = *(s16 *)(D_00CA86B0 + 0);
                v1[1] = *(s16 *)(D_00CA86B0 + 2);
                v1[2] = *(s16 *)(D_00CA86B0 + 4);
                v1[3] = *(s16 *)(D_00CA86B0 + 6);
            }
            func_001EE630(s0, v1);
            func_001F6FC0(*(s32 *)(D_00CCBD30 + D_003EA820 * 80), w2, 0, 2);
            w2[3] = 2.0f;
            w2[2] = (f32)*(s32 *)(D_00CCBD74 + D_003EA820 * 80);
            func_001EF370(s0, w2);
        }
    }
}
