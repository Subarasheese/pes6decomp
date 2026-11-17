/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern s32 func_00226710(void);
extern s32 func_0022A9A0(void);
extern s32 func_0022AAB0(void);
extern s32 func_0022ABC0(void);
extern char D_003B7240[];
extern char D_003B7260[];

void func_003246C0(s32 *out1, s32 *out2, s32 kind) {
    s32 s0, s1, s2;
    u32 a;
    u32 v;
    f32 t5[5];
    f32 t6[6];
    f32 *p;

    if (kind == 12 || kind == 11 || kind == 10) {
        v = func_0022AAB0() & 0xFF;
        if (v < 3) s2 = 1;
        else if (v < 5) s2 = 2;
        else if (v < 9) s2 = 3;
        else if (v < 17) s2 = 4;
        else s2 = 5;
        s1 = 0;
        if (func_0022ABC0() != 0) {
            s1 = 8;
        } else {
            a = func_0022A9A0() & 0xFF;
            if (s2 == 5) {
                p = (f32 *)D_003B7260;
                t6[0] = p[0]; t6[1] = p[1]; t6[2] = p[2];
                t6[3] = p[3]; t6[4] = p[4]; t6[5] = p[5];
                s1 = ((s32 *)t6)[a];
            } else if (s2 == 4) {
                p = (f32 *)D_003B7240;
                t5[0] = p[0]; t5[1] = p[1]; t5[2] = p[2];
                t5[3] = p[3]; t5[4] = p[4];
                s1 = ((s32 *)t5)[a];
            } else if (s2 == 3) {
                if (a == 3) s0 = 5;
                else if (a == 2) s0 = 4;
                else if (a == 1) {
                    func_00226710();
                    s0 = 1;
                }
                s1 = s0;
            } else if (s2 == 2) {
                if (a == 2) s0 = 5;
                else if (a == 1) {
                    if ((func_00226710() & 0xFF) == 8) s0 = 4;
                    else s0 = 1;
                }
                s1 = s0;
            } else if (s2 == 1) {
                s1 = 5;
            }
        }
    } else {
        s2 = 0;
        s1 = 0;
    }
    *out2 = s2;
    *out1 = s1;
}
