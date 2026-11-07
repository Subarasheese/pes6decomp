/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001F8280(s32, u8 *);
void func_001F85A0(u8 *, s32);

s32 func_001F8660(s32 src, s32 dst) {
    u8 buf[0x400];

    func_001F8280(src, buf);
    func_001F85A0(buf, dst);
    return dst;
}
