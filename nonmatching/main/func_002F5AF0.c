/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002EFBD0(void *, void *);
void func_002F5AF0(s32 arg0) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    sp10 = 0xC35C0000;
    sp14 = 0xC33C0000;
    sp18 = 0x43DC0000;
    sp1C = 0x438C0000;
    func_002EFBD0(arg0 + 0x10, &sp10);
}
