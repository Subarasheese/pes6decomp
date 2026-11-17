/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern char D_00591F2C[];
extern u8 D_003E9F30;
extern char D_00CB3300[];
extern s32 func_0032E980(s32 a);
extern s32 func_0030E6C0(s32 a);
extern s32 func_00311330(char *a, s32 *b, s32 c, s32 d);
extern s32 func_0030DAF0(s32 a);
extern void func_003101E0(void *p, s32 a);
extern s32 func_0030DA60(char *a, s32 *b, s32 c, s32 d);
extern void func_00310A50(void *p, s32 a);
extern void func_0036C4C0(void *p);
extern char *func_00335370(char *a, s32 *b, s32 c, s32 d);

s32 func_003305D0(char *a0, s32 *a1, s32 a2, s32 sel)
{
    s32 r;
    u8 mode;
    u8 c;
    u8 b;
    s16 h[2];
    s32 first, second;
    char *p;

    if ((u32)sel < 0x14) {
        if (sel == 0) {
            goto done;
        }
        if (sel == 1) {
            goto modeP;
        }
        if (sel == 2) {
            b = D_003E9F30;
            r = func_0030E6C0(b);
            goto done;
        }
        if (sel == 3) {
            b = D_003E9F30;
            r = func_0030E6C0(b) ^ 1;
            goto done;
        }
        if (sel == 4 || sel == 5) {
            first = (s16)func_0030DAF0(0);
            second = (s16)func_0030DAF0(1);
            if (second < first) {
                if (sel == 4) { r = 0; goto done; }
                if (sel == 5) { r = 1; goto done; }
                goto modeP;
            }
            if (first < second) {
                if (sel == 4) { r = 1; goto done; }
                if (sel == 5) { r = 0; goto done; }
                goto modeP;
            }
            goto modeP;
        }
        if (sel == 6) {
            func_003101E0(&h[0], 1);
            func_003101E0(&h[1], 0xC);
            r = (h[0] < h[1]) ? 1 : 0;
            goto done;
        }
        if (sel == 7) {
            func_003101E0(&h[0], 1);
            func_003101E0(&h[1], 0xC);
            r = (h[1] < h[0]) ? 1 : 0;
            goto done;
        }
        if (sel == 8) {
            r = func_0030DA60(a0, a1, a2, sel) & 0xFF;
            goto done;
        }
        if (sel == 9) {
            r = (func_0030DA60(a0, a1, a2, sel) & 0xFF) ^ 1;
            goto done;
        }
        if (sel == 10) {
            s32 v = func_00311330(a0, a1, a2, sel);
            if (v == 1) { r = 1; goto done; }
            if (v == 0) { r = 0; goto done; }
            goto modeP;
        }
        if (sel == 11) {
            s32 v = func_00311330(a0, a1, a2, sel);
            if (v == 1) { r = 0; goto done; }
            if (v == 0) { r = 1; goto done; }
            goto modeP;
        }
        if (sel == 12) {
            func_00310A50(&b, 1);
            r = func_0030E6C0(b);
            goto done;
        }
        if (sel == 13) {
            func_00310A50(&b, 9);
            r = func_0030E6C0(b) ^ 1;
            goto done;
        }
        if (sel == 14) {
            p = (char *)*(s32 *)D_00CB3300;
            r = (p[0x311] < p[0x1D]) ? 0 : 1;
            goto done;
        }
        if (sel == 15) {
            p = func_00335370(a0, a1, a2, sel);
            r = *(s32 *)(p + 0x1020);
            goto done;
        }
        if (sel == 16) {
            func_0036C4C0(&c);
            r = c;
            goto done;
        }
        if (sel == 17) {
            func_0036C4C0(&c);
            r = c ^ 1;
            goto done;
        }
        if (sel == 18) {
            p = func_00335370(a0, a1, a2, sel);
            r = *(s32 *)(p + 0x1020) ^ 1;
            goto done;
        }
        p = func_00335370(a0, a1, a2, sel);
        r = *(s32 *)(p + 0x1014) ^ 1;
        goto done;
    }
    goto done;

modeP:
    mode = *(u8 *)D_00591F2C;
    if (mode == 2) { r = 1; goto done; }
    if (mode == 1) { r = 0; goto done; }
    if (mode == 3 || mode == 0) {
        r = (func_0032E980(2) == 0) ? 1 : 0;
    }
done:
    *a1 = *(s32 *)(a0 + r * 36 + 0x30);
    return 1;
}
