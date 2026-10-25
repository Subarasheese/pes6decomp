/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00591970[];
void *func_00245190(s32);
void func_001C4730(void *, void *, s32);

void func_00245390(void) {
    s32 i;
    u8 *dst;

    for (i = 0, dst = D_00591970; i < 8; i++) {
        func_001C4730(dst, func_00245190(i), 0x24);
        dst += 0x24;
    }
}
