/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001F85A0(u8 *, u8 *);
void func_001C4730(void *, void *, s32);

void func_002209F0(u8 *src, u8 *dst) {
    u8 buf[0x30];

    func_001F85A0(src + 0xC, buf);
    func_001C4730(dst, buf, 0x2E);
}
