/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_001C4730(void *, void *, s32);
extern char *D_003E98B8;

void func_001AB960(u8 *arg0, u8 *arg1) {
    u32 i;
    u8 t;

    func_001C4730(arg0 + 0x30, arg1, 0x2A);
    if (arg0[0x47] < 5) {
        arg0[0x46] = arg0[0x46] * 2;
    } else {
        arg0[0x46] = arg0[0x46] * 2 + 1;
    }
    if (arg1[0xB] != 0) {
        for (i = 0; i < 10; i++) {
            arg0[0x1B0 + i] = *(s8 *)(*(char **)(D_003E98B8 + 0x14) + arg1[0xB] * 10 + i - 10) + 7;
        }
    }
}
