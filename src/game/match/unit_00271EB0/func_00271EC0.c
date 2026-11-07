/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

s32 func_001454C0(s32);
void func_00147ED0(s32);
void func_00147F00(s32, s32, s32 *, void (*)(void), s32, s32);
void func_001AC380(void);

void func_00271EC0(void) {
    s32 id;

    if (func_001454C0(0x8C) == 0) {
        return;
    }
    id = 0x8C;
    func_00147ED0(0x8C);
    func_00147F00(1, 1, &id, func_001AC380, 0, 0);
}
