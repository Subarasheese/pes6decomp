/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char *func_00153FE0(s32 a, s32 b);
extern s32 func_001888B0(void);
extern s32 func_001890F0(s32 i, f32 *vec, f32 *w, s16 *type, u8 *flag);
extern s32 func_00189160(void);
extern char D_00520138[];
extern char D_0051FFB2[];

void func_0018C2D0(void) {
    s32 n, count, i, j;
    char *buf;
    f32 *e;
    f32 vec[3];
    f32 w;
    s32 flag;

    n = func_00189160();
    if (func_001888B0() == 1) n++;
    if (n == 0) return;
    buf = func_00153FE0(*(s16 *)D_0051FFB2, n * 24 + 0x14);
    *(char **)D_00520138 = buf;
    if (buf == 0) return;
    *(char **)(buf + 4) = buf + 0x14;
    *(s16 *)(*(char **)D_00520138) = n;
    *(s16 *)(*(char **)D_00520138 + 2) = 1;
    *(s16 *)(*(char **)D_00520138 + 0xA) = 0;
    *(s16 *)(*(char **)D_00520138 + 0xE) = 0;
    *(s16 *)(*(char **)D_00520138 + 0x12) = 0;
    e = *(f32 **)(*(char **)D_00520138 + 4);
    if (func_001888B0() == 1) {
        *(s16 *)(*(char **)D_00520138 + 0xA) = 1;
        ((s32 *)e)[3] = 1;
        ((u32 *)e)[4] = 0x460CA000;
        e += 6;
    }
    count = func_00189160();
    for (j = 0; j < 2; j++) {
        for (i = 0; i < count; i++) {
            func_001890F0(i, vec, &w, (s16 *)((char *)&flag + 2), (u8 *)&flag);
            if (*(s16 *)((char *)&flag + 2) == j) {
                *(s16 *)(*(char **)D_00520138 + (j + 1) * 4 + 0xA) += 1;
                e[0] = 0.01f * vec[0];
                e[1] = 0.01f * -vec[1];
                e[2] = 0.01f * vec[2];
                e[4] = 3100.0f * w;
                ((s32 *)e)[3] = *(u8 *)&flag;
                e += 6;
            }
        }
    }
    *(s16 *)(*(char **)D_00520138 + 8) = 0;
    *(s16 *)(*(char **)D_00520138 + 0xC) = *(s16 *)(*(char **)D_00520138 + 0xA);
    *(s16 *)(*(char **)D_00520138 + 0x10) = *(s16 *)(*(char **)D_00520138 + 0xC) + *(s16 *)(*(char **)D_00520138 + 0xE);
}
