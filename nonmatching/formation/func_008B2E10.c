/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008EAFC0(s32, s32 *);                  /* extern */

void func_008B2E10(s32 arg0, M2C_UNK arg1, void *arg2) {
    s32 sp10;
    s32 sp14;
    s32 sp18;
    s32 sp1C;

    sp10 = (s32) M2C_FIELD(arg2, u8 *, 0x88);
    sp14 = (s32) M2C_FIELD(arg2, u8 *, 0x89);
    sp18 = (s32) M2C_FIELD(arg2, u8 *, 0x8A);
    sp1C = (s32) M2C_FIELD(arg2, u8 *, 0x8B);
    func_008EAFC0(arg0 + 0x24C4, &sp10);
}
