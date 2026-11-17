/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_002937A0(u32 a);
extern s32 func_00292F00(u32 a);
extern s32 func_001C78F8(void *a, void *fmt, ...);
extern char D_003DA748[];
extern char D_003DA758[];

s32 func_002C9E90(void *arg0, u8 *arg1) {
    u8 c[4];
    s32 i, a, b;
    u32 ch;
    u32 r;

    c[0] = 0;
    c[1] = 0;
    c[2] = 0;
    c[3] = 0;
    for (i = 1; i < 11; i++) {
        ch = arg1[i];
        if ((func_002937A0(ch) & 0xFF) == 9) {
            c[2]++;
        } else {
            r = func_00292F00(ch & 0xFF) & 0xFF;
            if (r == 3) {
                c[3]++;
            } else if (r == 2) {
                c[1]++;
            } else if (r == 1) {
                c[0]++;
            }
        }
    }
    for (a = 0; a < 4; a++) {
        if (c[a] == 0) {
            for (b = a + 1; b < 4; b++) {
                if (c[b] != 0) {
                    c[a] = c[b];
                    c[b] = 0;
                    break;
                }
            }
        }
    }
    if (c[3] != 0) {
        func_001C78F8(arg0, D_003DA748, c[0], c[1], c[2], c[3]);
        return 1;
    }
    func_001C78F8(arg0, D_003DA758, c[0], c[1], c[2]);
    return 0;
}
