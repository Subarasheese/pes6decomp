/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_00292B10(void);
extern s16 func_002928B0(s32);
extern s32 func_00292A30();
extern s32 func_00292AA0();
extern s16 func_002BE490(s32, s32);
extern char D_00591BBD[];
extern char D_00591BBE[];

s32 func_00BC4130(void) {
    s32 a;
    s32 b;
    s32 s0;
    s32 s1;
    s32 s2;
    s32 s5;
    s32 v1;
    s32 r;
    s32 s4;
    s32 s3;

    s4 = func_00292B10();
    s3 = func_00292AA0();
    r = func_00292A30();
    if (s4 != 0 && s3 != 0 && r != 0) {
        s2 = func_002928B0(0);
        s1 = func_002BE490(0, 0);
        s0 = func_002928B0(1);
        r = func_002BE490(1, 0);
        s5 = s2 + s1;
        v1 = s0 + r;
        if (s5 == v1) {
            s5 = s1 + (s2 * 2);
            v1 = s0 + (r * 2);
        }
    } else {
        s5 = func_002BE490(0, 1);
        v1 = func_002BE490(1, 1);
    }
    if (s4 != 0 && s3 == 0) {
        r = 5;
    } else if (s5 != v1) {
        r = 5;
    } else if ((*(u8 *)D_00591BBD) != 0) {
        r = 2;
    } else if ((*(u8 *)D_00591BBE) != 0) {
        r = 4;
    } else {
        r = 5;
    }
    return r;
}
