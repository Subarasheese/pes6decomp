/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002EFBD0(void *, void *);
void func_002F2E90(s32 arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    sp10 = 0xC3310000;
    sp14 = 0xC32E0000;
    sp18 = 0x43B40000;
    sp1C = 0x43840000;
    func_002EFBD0(arg0 + 0xC, &sp10);
}
