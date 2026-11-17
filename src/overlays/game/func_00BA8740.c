/* compiler: mwcc-3.0.1b210 */
/* Repaired from m2c output by an agent; compiles to the original instructions exactly. */
#include "pes6/m2c.h"
extern void *func_00B2A420(s32);
s32 func_00BA8740(s32 a0) {
    s32 i;
    s32 n = 0;
    for (i = 0; i < 0x16; i++) {
        void *p = func_00B2A420(i + 1);
        if (*(u8 *)(*(u8 **)((u8 *)p + 4) + 0x4C) == a0) n++;
    }
    return n;
}
