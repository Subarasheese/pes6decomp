/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00164258(s32, s32, s32, s32, s32, s32, void *, void *); /* extern */

void func_0016DCF0(void *arg0) {
    s32 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_t0;
    s32 temp_t1;
    s32 temp_t2;
    s32 temp_t3;

    temp_a2 = M2C_FIELD(arg0, s32 *, 0x5D4);
    temp_a1 = temp_a2 + M2C_FIELD(arg0, s32 *, 0x5A0);
    temp_t1 = M2C_FIELD(arg0, s32 *, 0x810);
    temp_a2_2 = temp_a2 + M2C_FIELD(arg0, s32 *, 0x5A4);
    temp_t0 = M2C_FIELD(arg0, s32 *, 0x814);
    temp_t3 = M2C_FIELD(arg0, s32 *, 0x878);
    temp_t2 = M2C_FIELD(arg0, s32 *, 0x87C);
    M2C_FIELD(arg0, s32 *, 0x830) = (s32) (temp_t1 + M2C_FIELD(arg0, s32 *, 0x880) + temp_a1 + temp_t3);
    M2C_FIELD(arg0, s32 *, 0x834) = (s32) (temp_t0 + M2C_FIELD(arg0, s32 *, 0x888) + temp_a2_2 + temp_t2);
    M2C_FIELD(arg0, s32 *, 0x838) = (s32) (((temp_t1 + M2C_FIELD(arg0, s32 *, 0x5AC) + temp_a1) - temp_t3) - M2C_FIELD(arg0, s32 *, 0x884));
    M2C_FIELD(arg0, s32 *, 0x83C) = (s32) (((temp_t0 + M2C_FIELD(arg0, s32 *, 0x5B0) + temp_a2_2) - temp_t2) - M2C_FIELD(arg0, s32 *, 0x88C));
    func_00164258(M2C_FIELD(arg0, s32 *, 0x818), M2C_FIELD(arg0, s32 *, 0x81C), M2C_FIELD(arg0, s32 *, 0x820), M2C_FIELD(arg0, s32 *, 0x824), arg0 + 0x830, arg0 + 0x834, arg0 + 0x838, arg0 + 0x83C);
    if (M2C_FIELD(arg0, s32 *, 0x830) >= M2C_FIELD(arg0, s32 *, 0x838)) {
        M2C_FIELD(arg0, s32 *, 0x858) = 0;
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x834) >= M2C_FIELD(arg0, s32 *, 0x83C)) {
        M2C_FIELD(arg0, s32 *, 0x858) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x858) = 1;
}
