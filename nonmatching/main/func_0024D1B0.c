/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern char D_00592800[];
extern char D_00591F2C[];
extern char D_0053C9D0[];
extern char D_003AA200[];
extern char D_003AA3A0[];
extern void func_0024DC40(u8 a0, s8 *a1);
extern void func_001C4730(void *dst, void *src, s32 n);
extern void func_00278400(void);

void func_0024D1B0(s8 *p)
{
    u8 *g = (u8 *)D_00592800;
    s32 i, j, k, a, b;
    s32 sa = 0, sb = 0;

    for (i = 0; i < 8; i++) {
        g[i * 0x28 + 0] = 0xFF;
        g[i * 0x28 + 1] = 0xFF;
        g[i * 0x28 + 2] = 0xFF;
    }
    for (i = 0; i < 8; i++) {
        s32 v = p[i * 0x34 + 1];
        if (v >= -3 && v <= 3) {
            if (v < 0) sa = 1;
            else if (v > 0) sb = 2;
        }
    }
    *(u8 *)D_00591F2C = sa + sb;

    for (i = 0; i < 2; i++) {
        s32 t = -3 + i * 6;
        g[0x15B + i] = 0xFF;
        for (j = 0; j < 8; j++) {
            if (p[j * 0x34 + 1] == t) {
                g[0x15B + i] = j;
                break;
            }
        }
    }

    for (i = 0; i < 8; i++) {
        u8 *e = g + i * 0x28;
        s8 *q = p + i * 0x34;
        s32 v = q[1];
        if (v == 0 || v == 10) continue;
        if (v <= 0) v = -v;
        if (v == 3) continue;
        e[8] = 0;
        a = q[1];
        b = a;
        if (a <= 0) b = -a;
        if (b == 11 || (a <= 0 ? -a : a) == 4) {
            e[0] = 8;
        } else {
            e[0] = i;
            a = q[1];
            if (a <= 0) a = -a;
            if (a == 2) e[8] = 1;
        }
        e[1] = (q[1] >= 0) ? 1 : 0;
    }

    for (i = 0; i < 8; i++) {
        g[i * 0x28 + 3] = 10;
        g[i * 0x28 + 4] = 0;
    }
    for (i = 0; i < 8; i++) {
        s8 *q = p + i * 0x34;
        for (j = 0; j < 8; j++) {
            u8 *e = g + j * 0x28;
            if (e[0] == i) {
                e[3] = q[2];
                e[4] = q[0x32];
                break;
            }
        }
    }

    g[0x140 + 0] = 0xFF;
    for (i = 0; i < 8; i++) {
        u8 *e = g + i * 0x28;
        if (e[3] != 0) {
            if (e[1] == 0) {
                g[0x140] = i;
                break;
            }
        }
    }
    g[0x141] = 0xFF;
    for (i = 0; i < 8; i++) {
        u8 *e = g + i * 0x28;
        if (e[3] != 0) {
            if (e[1] == 1) {
                g[0x141] = i;
                break;
            }
        }
    }

    for (k = 7; k >= 0; k--) {
        func_0024DC40(k, p);
    }

    for (i = 0; i < 8; i++) {
        u8 *e = g + i * 0x28;
        u32 v = e[0];
        if ((s32)v < 8) {
            e[6] = p[v * 0x34 + 0x33];
        }
    }

    for (i = 0; i < 8; i++) {
        u8 *e = g + i * 0x28;
        u32 c = e[1];
        if (c != 0xFF) {
            if (e[3] == 0) {
                e[0x12] = e[6];
            } else {
                s32 n = i + 1;
                if (n >= 8) n = 0;
                for (;;) {
                    u8 *f;
                    if (n == i) {
                        e[2] = i;
                        break;
                    }
                    f = g + n * 0x28;
                    if (f[1] != 0xFF && c == f[1] && f[3] != 0) {
                        e[2] = n;
                        break;
                    }
                    n++;
                    if (n >= 8) n = 0;
                }
            }
        }
    }

    for (i = 0; i < 8; i++) {
        g[i * 0x28 + 5] = p[i * 0x34 + 3];
        func_001C4730(D_0053C9D0 + i * 0x2E, p + i * 0x34 + 4, 0x2E);
    }
    func_00278400();

    for (k = 0; k < 8; k++) {
        s8 *src = p + k * 0x34;
        s8 *dst = (s8 *)D_003AA200 + k * 0x34;
        D_003AA3A0[k] = src[1];
        for (j = 0; j < 0x34; j++) dst[j] = src[j];
    }
}
