/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_00CCB9D0[];
extern char D_00CBD3B0[];
extern s32 func_00BC8BC0(void);
extern s32 func_00BC8B60(s32);
extern s32 func_00C13810(void);
extern s32 func_00C590F0(s32, s32);
extern s32 func_00C13230(s32);

void func_00C59460(void) {
    s32 loc[18];
    s32 *T = (s32 *)D_00CCB9D0;
    s32 n = func_00BC8BC0() & 0xFF;
    s32 i, j, k;
    char *p = D_00CBD3B0;
    for (i = 0; i < n; i++, p += 0x34) {
        u32 key = func_00BC8B60(i & 0xFF) & 0xFFFF;
        for (j = 0; j < n; j++) {
            if (T[j * 3] == key) break;
        }
        if (j == n) {
            s32 old = *(u8 *)(p + 7);
            s32 t = func_00C13810();
            s32 r = func_00C590F0(t, old);
            loc[i * 3] = key;
            loc[i * 3 + 1] = func_00C13230(t);
            loc[i * 3 + 2] = func_00C13230(r);
        } else {
            loc[i * 3] = T[j * 3];
            loc[i * 3 + 1] = T[j * 3 + 1];
            loc[i * 3 + 2] = T[j * 3 + 2];
        }
    }
    for (k = 0; k < 18; k += 2) {
        T[k] = loc[k];
        T[k + 1] = loc[k + 1];
    }
}
