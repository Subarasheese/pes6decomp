/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"


void func_00101DA0(void *);
s32 func_00101E98(s32);                             /* extern */

void func_00102228(void *arg0, s32 arg1) {
    s32 temp_s1;

    temp_s1 = func_00101E98(arg1);
    func_00101DA0(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x30) != 0xFFFFFFFF) {
        M2C_FIELD(arg0, s32 *, 0x30) = temp_s1;
    }
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((M2C_FIELD(arg0, s32 *, 0) & ~0xC) | 0x105);
}
