/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_008F86F8(void *, s32);
M2C_UNK func_008FA868(void *);                      /* extern */

void func_008FA230(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xFC) = 0;
    M2C_FIELD(arg0, s32 *, 0x864) = 1;
    M2C_FIELD(arg0, s32 *, 0x85C) = (s32) (M2C_FIELD(arg0, s32 *, 0x860) + 1);
    func_008F86F8(arg0, 1);
    func_008F86F8(arg0, 5);
    func_008F86F8(arg0, 6);
    func_008F86F8(arg0, 1);
    func_008F86F8(arg0, 6);
    func_008F86F8(arg0, 6);
    M2C_FIELD(arg0, u32 *, 0x1B4) = func_008F86F8(arg0, 1);
    M2C_FIELD(arg0, u32 *, 0x1B8) = func_008F86F8(arg0, 1);
    func_008FA868(arg0);
}
