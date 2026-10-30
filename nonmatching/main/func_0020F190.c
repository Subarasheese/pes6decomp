/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_001888A0(void);
extern void func_00181FE0(int, int);
extern float func_001A55B0(void);
extern void func_00210C10(s32);
extern float func_001A5590(void);
extern void func_00181FA0(s32, s32, s8);
extern void func_001864B0(s32);
extern void func_00181F20(s32);
f32 func_001A5100();                                /* extern */

void func_0020F190(void) {
    s32 var_s0;
    s32 var_s1;
    s32 var_s1_2;

    func_00181FE0(2, 0);
    func_00181F20(6);
    func_00181FE0(0, 0);
    if (func_001888A0() < 3) {
        func_00181FE0(0xC, 0);
    }
    func_00181FA0(0xD, 1, 0);
    var_s0 = 0xE;
    do {
        func_00181F20(var_s0);
        var_s0 += 1;
    } while (var_s0 < 0x12);
    func_00181FE0(0x16, 0);
    func_001864B0(0x40);
    if (func_001A5590() <= 0.0f) {
        var_s1 = 0x40;
    } else {
        var_s1 = 0x10;
    }
    if (func_001A55B0() < 0.0f) {
        var_s1_2 = var_s1 | 0xC;
        if (!(func_001A5100() <= 0.24f)) {
            var_s1_2 |= 3;
        }
    } else {
        var_s1_2 = var_s1 | 3;
        if (func_001A5100() < -0.24f) {
            var_s1_2 |= 0xC;
        }
    }
    func_00210C10(var_s1_2);
}
