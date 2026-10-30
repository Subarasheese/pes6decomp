/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00105380(s32, s32, s32, s32);          /* extern */
M2C_UNK WaitSema(s32);                         /* extern */

void func_00137EB0(void *arg0, s32 *arg1, s32 *arg2, s32 *arg3, s32 *arg4) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a3;
    s32 temp_hi;
    s32 temp_v1;

    WaitSema(M2C_FIELD(arg0, s32 *, 0x40));
    temp_a2 = M2C_FIELD(arg0, s32 *, 0x10);
    temp_a3 = M2C_FIELD(arg0, s32 *, 0x14);
    temp_a1 = M2C_FIELD(arg0, s32 *, 0x18);
    temp_hi = (s32) (((M2C_FIELD(arg0, s32 *, 0xC) + temp_a2) << 0xB) + temp_a3) % temp_a1;
    temp_v1 = (((M2C_FIELD(arg0, s32 *, 8) - 2) - temp_a2) << 0xB) - temp_a3;
    if ((temp_a1 - temp_hi) < temp_v1) {
        *arg1 = M2C_FIELD(arg0, s32 *, 0) + temp_hi;
        *arg2 = M2C_FIELD(arg0, s32 *, 0x18) - temp_hi;
        *arg3 = M2C_FIELD(arg0, s32 *, 0);
        *arg4 = temp_v1 - (M2C_FIELD(arg0, s32 *, 0x18) - temp_hi);
    } else {
        *arg1 = M2C_FIELD(arg0, s32 *, 0) + temp_hi;
        *arg2 = temp_v1;
        *arg3 = 0;
        *arg4 = 0;
    }
    func_00105380(M2C_FIELD(arg0, s32 *, 0x40), temp_a1, temp_a2, temp_a3);
}
