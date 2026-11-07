/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

u8 *func_00223BE0(void);
void func_001F85A0(void *, void *);
void func_001C4730(void *, void *, s32);

void func_00220A30(void *dst) {
    u8 buf[0x30];

    func_001F85A0(func_00223BE0() + 0x3CC, buf);
    func_001C4730(dst, buf, 0x2E);
}
