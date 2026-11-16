/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"

extern u8 func_00C18700(void);
extern u8 D_00CBD8E0[];

void func_00C10AB0(s32 arg0) {
    u8 *base;
    s16 *p;

    base = D_00CBD8E0 + (arg0 & 0xFF) * 0x2F4;
    p = (s16 *)(base + (func_00C18700() & 0xFF) * 2);
    *p += 1;
    *(s16 *)(base + 8) += 1;
}
