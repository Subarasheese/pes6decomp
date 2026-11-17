/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

typedef struct { char b[4]; } W;
typedef struct { W e[73]; } T;
extern f32 func_00243930(s32 a, W w, s32 c, s32 d);
extern char D_003A9FB0[];

s32 func_00242C60(s32 arg0, s32 a1, s32 a2, s32 a3) {
    T t1, t2;
    f32 best = 1000.0f;
    s32 sel = 0;
    s32 i;
    for (i = 0; i < 0x49; i++) {
        if (!(i % 5 == 0 && i != 0 && i != 0x46) || (i >= 0x19 && i < 0x42)) {
            t1 = *(T *)D_003A9FB0;
            if (!(best <= func_00243930(arg0, t1.e[i], 1, a3))) {
                t2 = *(T *)D_003A9FB0;
                best = func_00243930(arg0, t2.e[i], 1, a3);
                sel = i;
            }
        }
    }
    if (sel == 0) return 0;
    if (sel < 5) return 3;
    if (sel == 0x18) return 3;
    if (sel == 0x13 || sel == 0xE || sel == 9) return 3;
    if (sel < 8) return 6;
    if (sel < 0xA) return 7;
    if (sel < 0xD) return 0xB;
    if (sel < 0xF) return 0xC;
    if (sel < 0x12) return 0x10;
    if (sel < 0x14) return 0x11;
    if (sel < 0x17) return 0x15;
    if (sel < 0x19) return 0x16;
    if (sel < 0x1C) return 0x1A;
    if (sel < 0x1E) return 0x1C;
    if (sel < 0x21) return 0x1F;
    if (sel < 0x23) return 0x21;
    if (sel < 0x26) return 0x24;
    if (sel < 0x28) return 0x25;
    if (sel < 0x2B) return 0x29;
    if (sel < 0x2D) return 0x2B;
    if (sel < 0x30) return 0x2E;
    if (sel < 0x32) return 0x30;
    if (sel < 0x35) return 0x33;
    if (sel < 0x37) return 0x35;
    if (sel < 0x3A) return 0x38;
    if (sel < 0x3C) return 0x3A;
    if (sel < 0x3F) return 0x3D;
    if (sel < 0x41) return 0x3E;
    if (sel < 0x44) return 0x42;
    if (sel < 0x46) sel = 0x43;
    return sel;
}
