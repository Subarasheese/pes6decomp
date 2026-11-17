/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void D_0023D560(s32 *a, s32 lo, s32 hi);
void func_0023D560(s32 *a, s32 lo, s32 hi) {
    s32 i, j, p, t;
    if (lo < hi) {
        p = a[(lo + hi) / 2];
        i = lo - 1;
        j = hi + 1;
        for (;;) {
            do { i++; } while (a[i] < p);
            do { j--; } while (p < a[j]);
            if (i < j) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            } else {
                break;
            }
        }
        D_0023D560(a, lo, i - 1);
        D_0023D560(a, j + 1, hi);
    }
}
