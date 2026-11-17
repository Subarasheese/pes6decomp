/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

s32 func_00C90160(s32);                            /* extern */
extern u8 D_003EA89C;
extern char D_00591A90[];
extern char Pes6MatchSquads[];
extern char D_00CCD88D[];

void func_00C8D120(void *arg0, s32 arg1) {
    u8 *g;
    u8 *sq;
    s32 i;
    s32 j;
    s32 n;
    s32 cnt;
    s32 lim;
    u8 t;

    *((u8 *)arg0 + 5) = func_00C90160(arg1);
    *((u8 *)arg0 + 3) = 0;
    *((u8 *)arg0 + 2) = 0xFF;
    *((u8 *)arg0 + 0) = arg1;
    if (D_003EA89C < 0xB) {
        g = (u8 *)D_00591A90 + arg1 * 0x8B;
        sq = (u8 *)Pes6MatchSquads + arg1 * 0x6900;
        cnt = 0;
        for (i = 10; i >= 0; i--) {
            if (sq[g[g[0x27 + i] + 7] * 0x348 + 0xD4] == 0) {
                lim = 10 - cnt;
                j = i;
                while (lim - j >= 9) {
                    t = g[0x27 + j]; g[0x27 + j] = g[0x28 + j]; g[0x28 + j] = t;
                    t = g[0x28 + j]; g[0x28 + j] = g[0x29 + j]; g[0x29 + j] = t;
                    t = g[0x29 + j]; g[0x29 + j] = g[0x2A + j]; g[0x2A + j] = t;
                    t = g[0x2A + j]; g[0x2A + j] = g[0x2B + j]; g[0x2B + j] = t;
                    t = g[0x2B + j]; g[0x2B + j] = g[0x2C + j]; g[0x2C + j] = t;
                    t = g[0x2C + j]; g[0x2C + j] = g[0x2D + j]; g[0x2D + j] = t;
                    t = g[0x2D + j]; g[0x2D + j] = g[0x2E + j]; g[0x2E + j] = t;
                    t = g[0x2E + j]; g[0x2E + j] = g[0x2F + j]; g[0x2F + j] = t;
                    j += 8;
                }
                for (; j < lim; j++) {
                    t = g[0x27 + j];
                    g[0x27 + j] = g[0x28 + j];
                    g[0x28 + j] = t;
                }
                cnt++;
            }
        }
        lim = D_003EA89C;
        for (i = lim; i < 0xB; i++) {
            if (g[0x27 + i] == 0) {
                j = i;
                while (j - lim >= 8) {
                    t = g[0x27 + j]; g[0x27 + j] = g[0x26 + j]; g[0x26 + j] = t;
                    t = g[0x26 + j]; g[0x26 + j] = g[0x25 + j]; g[0x25 + j] = t;
                    t = g[0x25 + j]; g[0x25 + j] = g[0x24 + j]; g[0x24 + j] = t;
                    t = g[0x24 + j]; g[0x24 + j] = g[0x23 + j]; g[0x23 + j] = t;
                    t = g[0x23 + j]; g[0x23 + j] = g[0x22 + j]; g[0x22 + j] = t;
                    t = g[0x22 + j]; g[0x22 + j] = g[0x21 + j]; g[0x21 + j] = t;
                    t = g[0x21 + j]; g[0x21 + j] = g[0x20 + j]; g[0x20 + j] = t;
                    t = g[0x20 + j]; g[0x20 + j] = g[0x1F + j]; g[0x1F + j] = t;
                    j -= 8;
                }
                for (; j >= lim; j--) {
                    t = g[0x27 + j];
                    g[0x27 + j] = g[0x26 + j];
                    g[0x26 + j] = t;
                }
            }
        }
    }
    if (*(u8 *)D_00CCD88D == 0) {
        *((u8 *)arg0 + 6) = 0xB;
        return;
    }
    n = 0x20;
    sq = (u8 *)Pes6MatchSquads + arg1 * 0x6900;
    for (i = 0; i < 0x20; i++) {
        if (sq[0x14] != 0) {
            n--;
        }
        sq += 0x348;
    }
    *((u8 *)arg0 + 6) = n;
}
