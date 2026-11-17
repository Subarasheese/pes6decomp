/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 b[8]; } S8;

extern char D_00592980[];
extern char D_00591C09[];
extern char D_00591E00[];
extern char D_00591E02[];
extern char D_00591E07[];
void func_00287A10(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
void func_00287910(S8 a, S8 b, s32 c, s32 d);
void func_00366830(void);
void func_0023CE80(s8 *out, s32 a, s32 b, s32 c);

void func_001F94B0(s32 a0, s32 a1, s32 a2, s32 a3, s32 a4, s32 a5) {
    s8 buf0[8];
    s8 buf1[8];
    s32 i, j, k;
    char *base = D_00592980;

    for (i = 0; i < 2; i++) {
        char *p = base;
        for (j = 0; j < 32; j++) {
            f32 *d = (f32 *)(p + 0x68);
            f32 *s = (f32 *)(p + 0x94);
            for (k = 0; k < 11; k++) {
                d[k] = s[k];
            }
            p += 0x348;
        }
        base += 0x6900;
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 32; j++) {
            func_00287A10(i, j, 2, a3, a4, a5);
        }
    }
    if (*(u8 *)D_00591C09 == 5) {
        func_00366830();
    }
    func_0023CE80(buf0, 0, 0, 1);
    for (i = 0; i < 5; i++) {
        D_00591E02[i] = buf0[i];
    }
    func_0023CE80(buf1, 1, 0, 1);
    for (i = 0; i < 5; i++) {
        D_00591E07[i] = buf1[i];
    }
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 32; j++) {
            func_00287910(*(S8 *)(D_00591E00 + i * 5 + 2),
                          *(S8 *)(D_00591E00 + (i ^ 1) * 5 + 2), i, j);
        }
    }
}
