/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_00BBB8C0(s32 a, s32 b, s8 *c, s8 *d);
extern char D_003AC1D0[];
extern char D_005E2F64[];
extern char D_005E2F68[];
extern char D_005E2F6A[];
extern char D_005E2F6C[];

void func_002B9420(void) {
    s8 tab[18];
    s8 *src = (s8 *)D_003AC1D0;
    s8 *dst = tab;
    s32 i = 9;
    u8 s0;
    s32 v;
    do {
        i--;
        dst[0] = src[0];
        dst[1] = src[1];
        src += 2;
        dst += 2;
    } while (i > 0);
    s0 = *(u8 *)D_005E2F6A;
    if (*(s8 *)D_005E2F6C < 0) {
        v = func_00BBB8C0(0x64, i, dst, src) % (s32)(u8)tab[s0 * 2 + 1];
    } else {
        v = (s32)*(s8 *)D_005E2F6C % (s32)(u8)tab[s0 * 2 + 1];
    }
    if (*(u8 *)D_005E2F68 & 2) {
        if (s0 == 4) v = 0;
        else if (s0 == 3) v &= 1;
        else if (s0 == 2) v &= 1;
    }
    if (*(u8 *)D_005E2F68 & 4) {
        if (s0 == 4) v = (v & 1) + 1;
        else if (s0 == 3) v = (v & 1) + 2;
        else if (s0 == 2) v = (v & 1) + 2;
    }
    if (*(u8 *)D_005E2F68 & 8) {
        if (s0 == 8) { if (v == 1) v = 0; }
        else if (s0 == 7) { if (v == 1) v = 0; }
        else if (s0 == 5) { if (v == 1) v = 0; }
        else if (s0 == 3) { if (v == 0) v = 1; }
        else if (s0 == 2) { if (v == 0) v = 1; }
    }
    *(s32 *)D_005E2F64 = (u8)tab[*(u8 *)D_005E2F6A * 2] + v;
}
