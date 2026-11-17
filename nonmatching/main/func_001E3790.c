/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern f32 D_0052AE70;
extern s32 D_0052AE78;
extern s32 D_0052AED0;
extern char *D_0052AED4;
extern s32 D_0052AED8;
extern char *D_0052AEDC;
extern s32 D_0052AF0C;

void func_001E3790(char *arg0) {
    char *a0 = arg0;
    char *a2 = D_0052AED4;
    char *a1 = D_0052AEDC;
    s32 a3 = 0;
    s32 i = 0;
    char *t3;
    u8 t2;
    char *p5;
    char *p6;

    *(u8 *)(a2 + 0x2E) = 1;
    *(s32 *)(a2 + 0x1C) = 0;
    *(s32 *)(a2 + 0x20) = 0;
    *(u8 *)(a2 + 0x2F) = 0;
    D_0052AF0C = D_0052AF0C + 1;
    if (D_0052AED8 > 0) {
        do {
            t3 = *(char **)a1;
            if (t3 != 0) {
                if (a3 != 0 || (!(*(u8 *)(a0 + 0x75) & 0x10) && !((*(f32 *)(a2 + 0x1C) + *(f32 *)(a1 + 8)) <= *(f32 *)(a0 + 0x24)))) {
                    if (*(u8 *)(t3 + 0x2C) == 2) {
                        *(u8 *)(t3 + 0x2E) = 2;
                        a3 = 1;
                        goto next;
                    }
                    if (D_0052AE70 < *(f32 *)(a2 + 0x1C)) {
                        D_0052AE70 = *(f32 *)(a2 + 0x1C);
                    }
                    a2 = *(char **)a1;
                    a3 = 0;
                    *(u8 *)(a2 + 0x2E) = 1;
                    *(s32 *)(a2 + 0x1C) = 0;
                    *(s32 *)(a2 + 0x20) = 0;
                    *(u8 *)(a2 + 0x2F) = 0;
                    D_0052AF0C = D_0052AF0C + 1;
                }
                *(f32 *)(a2 + 0x1C) = *(f32 *)(a2 + 0x1C) + *(f32 *)(a1 + 8);
                t3 = *(char **)a1;
                t2 = *(u8 *)(t3 + 0x2C);
                if (t2 == 2) {
                    *(u8 *)(a2 + 0x2F) = *(u8 *)(a2 + 0x2F) + 1;
                } else if (t2 == 0) {
                    if (*(u8 *)(t3 + 0x2D) == 1) {
                        a3 = 1;
                    }
                } else if (t2 == 1) {
                    *(f32 *)(a2 + 0x20) = *(f32 *)(a2 + 0x20) + *(f32 *)(a1 + 8);
                }
            }
next:
            i += 1;
            a1 += 0x10;
        } while (i < D_0052AED8);
    }
    if (D_0052AE70 < *(f32 *)(a2 + 0x1C)) {
        D_0052AE70 = *(f32 *)(a2 + 0x1C);
    }
    i = 0;
    p5 = D_0052AED4;
    p6 = p5;
    if (D_0052AED0 > 0) {
        do {
            if (i != 0 && *(u8 *)(p6 + 0x2E) == 1) {
                if (*(u8 *)(a0 + 0x2C) == 2 && *(u8 *)(a0 + 0x2E) != 2) {
                    *(f32 *)(p5 + 0x1C) = *(f32 *)(p5 + 0x1C) - *(f32 *)(a0 + 0x18);
                    *(u8 *)(p5 + 0x2F) = *(u8 *)(p5 + 0x2F) - 1;
                }
                p5 = p6;
            }
            i += 1;
            a0 = p6;
            p6 += 0x30;
        } while (i < D_0052AED0);
    }
    D_0052AE78 = D_0052AF0C;
}
