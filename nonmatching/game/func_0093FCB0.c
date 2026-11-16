/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001A6E20(u8 *);
extern void func_001A92C0(u8 *, s16 *);

void func_0093FCB0(s16 *arg0) {
    u8 sp10[0x220];
    s16 *dst;
    s32 i;
    s32 n;

    for (i = 0; i < 0x220; i++) {
        sp10[i] = 0;
    }
    dst = (s16 *)(sp10 + 0x30);
    n = 0x15;
    do {
        n -= 1;
        *dst = *arg0;
        arg0 += 1;
        dst += 1;
    } while (n > 0);
    *(s32 *)(sp10 + 0xC) = 2;
    func_001A92C0(sp10, dst);
    func_001A6E20(sp10);
}
