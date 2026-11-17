/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00592980[];
extern u8 D_003E7AD4;
extern u8 D_003E7AD5;
extern u8 D_003E7AD6;
extern u8 D_003E7AD7;
extern s32 func_002937A0();
extern s32 func_0028F230(s32 a0, void *a1, s32 a2, void *a3, s32 a4);
extern void func_0028F9E0(void *a0, void *a1, void *a2, void *a3);
extern s32 func_00C32010(u8 *a0, void *a1);
extern s32 func_009A0270(void);
extern void func_00277220(void *a0, s32 a1);

s32 func_00C282B0(u8 *p, s32 ctx, s32 team)
{
    u8 *fp = (u8 *)D_00592980 + team * 26880;
    u8 *tb;
    s32 cnt[4];
    s32 arr[33];
    u8 gpb[4];
    u8 tmpB[11];
    u8 tmpC[11];
    s32 best, bestIdx, i, k, r, v, a4, x, y, d;
    u8 *q;

    cnt[0] = 0; cnt[1] = 0; cnt[2] = 0; cnt[3] = 0;
    gpb[0] = D_003E7AD4;
    gpb[1] = D_003E7AD5;
    gpb[2] = D_003E7AD6;
    gpb[3] = D_003E7AD7;

    for (i = 0; i < 11; i++) {
        if (fp[p[0x8C + i] * 840 + 0xD4] != 0) {
            v = func_002937A0(p[0xC0 + i], gpb[2], gpb[1], gpb[0]) & 0xFF;
            if (v == 6) cnt[3]++;
            else if (v == 8) cnt[2]++;
            else if (v == 7) cnt[1]++;
            else if (v == 9) cnt[0]++;
        }
    }
    if (cnt[0] + cnt[1] + cnt[2] + cnt[3] == 0) return -1;

    tb = (u8 *)D_00592980 + p[0] * 26880;
    bestIdx = -1;
    best = 0x7FFFFFFF;
    for (i = 0; i < 11; i++) {
        tmpB[i] = p[0xC0 + i];
        q = tb + p[0x8C + i] * 840;
        if (q[0xD6] != 0 || q[0xD5] >= 2) tmpC[i] = 0;
        else tmpC[i] = 1;
    }
    func_0028F9E0(arr, tmpC, tmpB, p + 0xAC);

    if (cnt[0] != 0) {
        for (i = 0; i < 11; i++) {
            k = p[0x8C + i] * 840;
            if (fp[k + 0xD4] != 0) {
                if (gpb[0] == (func_002937A0(p[0xC0 + i]) & 0xFF)) {
                    x = *(s32 *)(fp + k + 0x18);
                    y = *(s32 *)(fp + k + 0xD8);
                    a4 = y / (x / 100);
                    if (a4 >= 0x3D) a4 = 100;
                    q = (u8 *)D_00592980 + p[0] * 26880 + k;
                    v = func_0028F230(ctx, q + 0x68, p[0xC0 + i], &arr[i * 3], a4);
                    if (func_00C32010(p, (void *)(s32)p[0x8C + i]) != 0) {
                        if (q[0xF8] == 0 && q[0xF9] == 0) {
                            u8 s = q[0x102];
                            if (!((s32)((func_009A0270() & 0xFF) - 5) < s)) {
                                func_00277220(q + 0xF0, 1);
                            }
                        }
                    }
                    if (!(best < v)) {
                        best = v;
                        bestIdx = i;
                    }
                }
            }
        }
        if (bestIdx >= 0) return bestIdx;
    }

    for (k = 1; k < 4; k++) {
        if (cnt[k] != 0) {
            s32 sc = -0x19;
            s32 first;
            for (i = 0; i < 11; i++) {
                s32 idx = p[0x8C + i];
                s32 off = idx * 840;
                if (fp[off + 0xD4] != 0) {
                    s32 want = gpb[k];
                    if (want == (func_002937A0(p[0xC0 + i]) & 0xFF)) {
                        s32 v3 = (want == 6 || want == 8 || want == 7) ? 1 : 0;
                        if (v3 < sc) continue;
                        first = 0;
                        if (sc < v3) {
                            sc = v3;
                            bestIdx = i;
                            first = 1;
                        }
                        x = *(s32 *)(fp + off + 0x18);
                        y = *(s32 *)(fp + off + 0xD8);
                        a4 = y / (x / 100);
                        if (a4 >= 0x3D) a4 = 100;
                        q = (u8 *)D_00592980 + p[0] * 26880 + off;
                        r = func_0028F230(ctx, q + 0x68, p[0xC0 + i], &arr[i * 3], a4);
                        if (func_00C32010(p, (void *)idx) != 0) {
                            if (q[0xF8] == 0 && q[0xF9] == 0) {
                                u8 s = q[0x102];
                                if (!((s32)((func_009A0270() & 0xFF) - 5) < s)) {
                                    func_00277220(q + 0xF0, 1);
                                }
                            }
                        }
                        if (first || !(best < r)) {
                            best = r;
                            bestIdx = i;
                        }
                    }
                }
            }
            if (bestIdx >= 0) return bestIdx;
        }
    }
    return -1;
}
