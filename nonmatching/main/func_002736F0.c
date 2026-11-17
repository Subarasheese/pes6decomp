/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00592980[];
extern char D_0058E7F0[];
extern char D_005900B0[];
extern char D_003AB6D0[];
extern char D_003AB720[];

typedef struct { f32 v[31]; } SF;
typedef struct { s16 v[6][6]; } ST;

void *func_001C48E8(void *p, s32 v, s32 n);
s32 func_002730A0(u8 *p, s32 a);
void func_002733F0(u8 *p);
s32 func_002DCA30(void);
s32 func_00BBB8C0(s32 n);
s32 func_00BCC570(s32 t);

void func_002736F0(s32 arg0, s32 arg1) {
    s32 list2[11];
    s32 list1[11];
    ST tab;
    SF fl;
    s32 t, n2, n1, i, rem, extra, cnt, r;
    u8 *base;
    u8 *cur;
    u8 *p;
    u8 *last;
    u8 *q;
    s32 *w1;
    s32 *w2;
    s32 fp;
    u32 v;
    f32 f;
    f32 x;
    s32 cls;

    if (arg0 != 0) return;
    base = (u8 *)D_00592980;
    for (t = 0; t < 2; t++, base += 0x6900) {
        func_001C48E8(list2, 0, 44);
        func_001C48E8(list1, 0, 44);
        n2 = 0;
        cur = (u8 *)D_0058E7F0;
        n1 = 0;
        if (cur[0x12] != t) cur = (u8 *)D_005900B0;
        w1 = list1;
        w2 = list2;
        for (i = 0; i < 11; i++, cur += 0x240) {
            fp = cur[0x11];
            q = base + fp * 840;
            p = q + 0xF0;
            last = p + 8;
            tab = *(ST *)D_003AB6D0;
            fl = *(SF *)D_003AB720;
            x = (f32)(u32)tab.v[p[1]][p[2]];
            f = fl.v[p[0]] * x;
            v = (u16)f;
            if ((s32)v > 0) {
                if ((s32)v < 21) cls = 1;
                else cls = 2;
            } else cls = 0;
            if (cls == 2) {
                if (q[0xD4] == 0 && q[0xF8] == 0) continue;
            } else continue;
            if (last[0] == 0 && last[1] == 0 && p[3] == 0) continue;
            if (func_002730A0(p, arg0) == 3) { *w1++ = fp; n1++; }
            else { *w2++ = fp; n2++; }
        }
        if (n1 + n2 <= 0) continue;
        extra = 0;
        if (arg1 != 0) {
            if (func_002DCA30() == 0) extra = func_00BCC570(t);
        }
        cur = (u8 *)D_0058E7F0;
        if ((t & 0xFF) != cur[0x12]) cur = (u8 *)D_005900B0;
        cnt = 0;
        for (i = 0; i < 11; i++, cur += 0x240) {
            if (((u8 *)D_00592980)[cur[0x12] * 0x6900 + cur[0x11] * 840 + 0xD4] != 0) cnt++;
        }
        rem = 7 - (extra + cnt - n2 - n1);
        while (rem > 0 && n1 > 0) {
            r = func_00BBB8C0(n1);
            last[2] = 1;
            list1[r] = list1[n1 - 1];
            n1--;
            rem--;
        }
        while (rem > 0 && n2 > 0) {
            r = func_00BBB8C0(n2);
            func_002733F0(base + list2[r] * 840 + 0xF0);
            list2[r] = list2[n2 - 1];
            n2--;
            rem--;
        }
    }
}
