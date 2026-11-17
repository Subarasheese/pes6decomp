/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_00151EA0(s32 n);
extern void func_00C3BF40(s32 a);
extern void func_009E1D30(s32 a, s32 b);
extern void func_00C39E50(void);
extern char D_00CCB8F0[];
extern char D_00CB4600[];
extern char D_00CB4650[];
extern char D_00CCB904[];
extern char D_00CCB908[];
extern char D_00CCB909[];
extern char D_00CCB8F4[];
extern char D_00CCB900[];
extern char D_00591BE4[];
extern u8 D_003EA7F6;

s32 func_00C3A1A0(void) {
    u8 *s6;
    u8 mask;
    s32 cnt;
    s32 s4;
    char *s2;
    u8 *fp;
    s32 s0, s5, s7, s1;
    s32 s3;
    s32 v, mode, k;
    u8 *e;
    f32 f[3];
    u8 b[4];
    u8 *tab;
    s32 a, c;

    s6 = (u8 *)((s32 *)D_00CB4600)[*(s32 *)D_00CCB8F0];
    mask = 0;
    cnt = (u8)func_00151EA0(0xFF);
    s4 = 0;
    if (s6[1] > 0) {
        s2 = D_00CCB8F0;
        fp = s6 + 4;
        do {
            s0 = s6[1];
            s3 = -1;
            s5 = (u8)((u16)func_00151EA0(0x3E8) % s0);
            if (s5 < s0 * 2) {
                s7 = (u8)s4;
                s1 = mask;
                for (;;) {
                    s0 = s5 % s0;
                    v = (u16)func_00151EA0(100);
                    mode = *(s32 *)D_00CCB8F0;
                    if (mode == 6) {
                        if (s7 == 0) {
                            s32 *tp = *(s32 **)fp;
                            for (;;) {
                                k = tp[((u8)s0) * 3];
                                if (k != 0x17 && k != 0x18) break;
                                s0 = ((u8)s0 + v) % s6[1];
                                v++;
                            }
                        }
                    } else if (mode == 4) {
                        if (s7 == 0) {
                            c = (u8)s0;
                            if (((s32 *)*(s32 *)fp)[c * 3] == 0xF) {
                                s0 = (c + v) % s6[1];
                            }
                        }
                    }
                    k = (u8)s0;
                    if ((s1 & (1 << k)) == 0) {
                        s3 = (s8)k;
                        break;
                    }
                    s0 = s6[1];
                    s5 = (u8)(s5 + 1);
                    if (!(s5 < s0 * 2)) break;
                }
            }
            if (s3 < 0) {
                s3 = (s8)((u16)func_00151EA0(0x3E8) % s6[1]);
            }
            mask |= (u8)(1 << (u8)s3);
            e = (u8 *)(*(s32 *)(s6 + 4) + (u8)s3 * 12);
            f[0] = ((f32 *)e)[0];
            f[1] = ((f32 *)e)[1];
            f[2] = ((f32 *)e)[2];
            v = (u16)func_00151EA0(0x7D0);
            tab = *(u8 **)((char *)f + 8);
            c = *((u8 *)f + 4);
            tab = tab + (c ? v % c : v) * 4;
            b[0] = tab[0];
            b[1] = tab[1];
            b[2] = tab[2];
            b[3] = tab[3];
            *(s32 *)(s2 + 0x14) = *(s32 *)f;
            a = (u16)func_00151EA0((u16)(b[1] - b[0]));
            *(u8 *)(s2 + 0x18) = b[0] + a;
            a = (u16)func_00151EA0((u16)(b[3] - b[2]));
            *(u8 *)(s2 + 0x19) = b[2] + a;
            *(s8 *)(s2 + 0x1A) = -1;
            k = (u8)D_00CB4650[*(s32 *)D_00CCB8F0];
            c = cnt % 6;
            if (c < 12) {
                while (!(k & (1 << (c % 6)))) {
                    c++;
                    if (!(c < 12)) break;
                }
            }
            *(s32 *)(s2 + 0x1C) = c % 6;
            cnt++;
            s4++;
            s2 += 12;
        } while (s4 < s6[1]);
    }
    *(s32 *)(D_00CCB904 + s4 * 12) = 0x1D;
    *(u8 *)(D_00CCB908 + s4 * 12) = 0;
    *(u8 *)(D_00CCB909 + s4 * 12) = 0;
    c = s6[0] * (u8)D_00591BE4[0];
    k = D_003EA7F6;
    *(s16 *)D_00CCB8F4 = k ? c / k : -1;
    func_00C3BF40(0x1D);
    func_009E1D30(5, 0);
    func_00C39E50();
    *(void **)D_00CCB900 = (void *)func_00C39E50;
    return 1;
}
