/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0016A240(void *, s32, s32, M2C_UNK);   /* extern */
M2C_UNK func_0016A390(void *, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_0016A470(void *, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_0016A558(void *, s32, s32, M2C_UNK, s32); /* extern */

void func_001683F8(void *arg0) {
    s32 temp_a1;
    s32 temp_a4;
    s32 temp_a4_2;
    s32 temp_a4_3;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;

    if (M2C_FIELD(arg0, s64 *, 0x9C0) != 0) {
        temp_a1 = M2C_FIELD(arg0, s32 *, 0x998) + (s32) M2C_FIELD(arg0, s64 *, 0x9C0);
        M2C_FIELD(arg0, s32 *, 0x998) = temp_a1;
        M2C_FIELD(arg0, s32 *, 0x99C) = (s32) (M2C_FIELD(arg0, s32 *, 0x99C) + M2C_FIELD(arg0, s32 *, 0x9C4));
        if (temp_a1 < 0) {
            M2C_FIELD(arg0, s32 *, 0x998) = 0;
        } else {
            temp_v1 = M2C_FIELD(arg0, s32 *, 0x5AC);
            if (temp_a1 >= temp_v1) {
                M2C_FIELD(arg0, s32 *, 0x998) = (s32) (temp_v1 - 1);
            }
        }
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x99C);
        if (temp_v0 >= 0) {
            temp_v1_2 = M2C_FIELD(arg0, s32 *, 0x5B0);
            if (temp_v0 >= temp_v1_2) {
                M2C_FIELD(arg0, s32 *, 0x99C) = (s32) (temp_v1_2 - 1);
            }
        } else {
            M2C_FIELD(arg0, s32 *, 0x99C) = 0;
        }
        func_0016A240(arg0 + 0x9D0, M2C_FIELD(arg0, s32 *, 0x998), M2C_FIELD(arg0, s32 *, 0x99C), 0);
    }
    temp_v1_3 = M2C_FIELD(arg0, s32 *, 0x9CC);
    temp_a4 = (M2C_FIELD(arg0, s32 *, 0x9A0) ^ temp_v1_3) & temp_v1_3;
    if (temp_a4 != 0) {
        func_0016A390(arg0 + 0x9D0, M2C_FIELD(arg0, s32 *, 0x998), M2C_FIELD(arg0, s32 *, 0x99C), 0, temp_a4);
    }
    temp_v1_4 = M2C_FIELD(arg0, s32 *, 0x9A0);
    temp_a4_2 = (temp_v1_4 ^ M2C_FIELD(arg0, s32 *, 0x9CC)) & temp_v1_4;
    if (temp_a4_2 != 0) {
        func_0016A470(arg0 + 0x9D0, M2C_FIELD(arg0, s32 *, 0x998), M2C_FIELD(arg0, s32 *, 0x99C), 0, temp_a4_2);
    }
    temp_a4_3 = M2C_FIELD(arg0, s32 *, 0x9C8);
    if (M2C_FIELD(arg0, s32 *, 0x9A4) != temp_a4_3) {
        func_0016A558(arg0 + 0x9D0, M2C_FIELD(arg0, s32 *, 0x998), M2C_FIELD(arg0, s32 *, 0x99C), 0, temp_a4_3);
        M2C_FIELD(arg0, s32 *, 0x9A4) = (s32) M2C_FIELD(arg0, s32 *, 0x9C8);
    }
    M2C_FIELD(arg0, s32 *, 0x9C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x9A0) = (s32) M2C_FIELD(arg0, s32 *, 0x9CC);
    M2C_FIELD(arg0, s32 *, 0x9C4) = 0;
    M2C_FIELD(arg0, s64 *, 0x9C0) = 0;
}
