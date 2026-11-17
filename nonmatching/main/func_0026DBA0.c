/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
extern s32 func_002FC270(s32);
extern s32 func_00306F50(s32);
extern s32 func_002FC2B0(void);
extern s32 func_002FC630(s32);
extern s32 func_00306170(s32);
extern void func_002517B0(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_0026DBA0(u32 a, s32 b) {
    s32 kind;
    s32 s0, x, y;
    u32 t;
    s32 v = func_002FC270(a & 0x3FF);
    t = (a >> 25) & 0xF;
    if (t - 10 < 2) {
        kind = 0;
    } else if (t - 12 < 2) {
        kind = 1;
    }
    s0 = func_00306F50(v);
    if (kind == 2) {
        x = func_002FC630(s0);
        y = func_00306170(0);
        func_002517B0(s0, (a >> 10) & 0x1F, 10, x, y, b, 1, 1, 1, 1, 0);
    } else if (kind == 3) {
        x = func_002FC2B0();
        y = func_00306170(0);
        func_002517B0(s0, (a >> 10) & 0x1F, 10, x, y, b, 0, 1, 1, 1, 1);
    } else if (kind == 4) {
        x = func_002FC2B0();
        y = func_00306170(0);
        func_002517B0(s0, (a >> 10) & 0x1F, 10, x, y, b, 1, 1, 1, 0, 1);
    } else if (kind == 0) {
        x = func_002FC2B0();
        y = func_00306170(0);
        func_002517B0(s0, (a >> 10) & 0x1F, 10, x, y, b, 1, 1, 1, 1, 1);
    } else if (kind == 1) {
        x = func_002FC2B0();
        y = func_00306170(0);
        func_002517B0(s0, (a >> 10) & 0x1F, 12, x, y, b, 0, 1, 1, 1, 0);
    }
}
