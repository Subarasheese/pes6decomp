/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00BA1840(void);
extern void func_00147ED0(s32);
extern void func_00147F00(s32, s32, s32 *, void (*)(void), s32, s32);
extern void func_001AC550(void *);
extern s32 func_001454C0(s32);
extern void func_001AB650(void *);

void func_00BA1950(void *arg0) {
    s32 sp2C;
    void *temp_s0;

    temp_s0 = *M2C_FIELD(arg0, void ***, 4);
    func_001AB650(temp_s0);
    func_001AC550(temp_s0);
    sp2C = 0x8D19;
    if (func_001454C0(0x8D19) != 0) {
        func_00147ED0(sp2C);
        func_00147F00(1, 1, &sp2C, func_00BA1840, 0, 0);
    }
}
