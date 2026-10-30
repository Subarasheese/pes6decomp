/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001E50C0(void *);                      /* extern */
M2C_UNK func_001E5120(void *, u8, u8);              /* extern */

void *func_001DED80(void *arg0, u8 arg1, void *arg2) {
    u8 temp_a1;
    u8 temp_a2;

    if (arg0 != NULL) {
        if (arg1 == 0) {
            goto block_2;
        }
        if (arg2 == NULL) {
            return NULL;
        }
block_2:
        if ((M2C_FIELD(arg0, u8 *, 0x7A) == arg1) && (M2C_FIELD(arg0, u8 *, 0x60) == M2C_FIELD(arg2, u8 *, 0)) && (M2C_FIELD(arg0, u8 *, 0x61) == M2C_FIELD(arg2, u8 *, 1)) && (M2C_FIELD(arg0, u8 *, 0x62) == M2C_FIELD(arg2, u8 *, 2)) && (M2C_FIELD(arg0, u8 *, 0x63) == M2C_FIELD(arg2, u8 *, 3)) && (M2C_FIELD(arg0, u8 *, 0x64) == M2C_FIELD(arg2, u8 *, 4)) && (M2C_FIELD(arg0, u8 *, 0x65) == M2C_FIELD(arg2, u8 *, 5)) && (M2C_FIELD(arg0, u8 *, 0x66) == M2C_FIELD(arg2, u8 *, 6)) && (M2C_FIELD(arg0, u8 *, 0x67) == M2C_FIELD(arg2, u8 *, 7))) {
            return NULL;
        }
        func_001E50C0(arg0);
        M2C_FIELD(arg0, u8 *, 0x7A) = arg1;
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) M2C_FIELD(arg2, u8 *, 0);
        M2C_FIELD(arg0, u8 *, 0x61) = (u8) M2C_FIELD(arg2, u8 *, 1);
        M2C_FIELD(arg0, u8 *, 0x62) = (u8) M2C_FIELD(arg2, u8 *, 2);
        M2C_FIELD(arg0, u8 *, 0x63) = (u8) M2C_FIELD(arg2, u8 *, 3);
        temp_a2 = M2C_FIELD(arg2, u8 *, 4);
        temp_a1 = M2C_FIELD(arg2, u8 *, 5);
        M2C_FIELD(arg0, u8 *, 0x64) = temp_a2;
        M2C_FIELD(arg0, u8 *, 0x65) = temp_a1;
        M2C_FIELD(arg0, u8 *, 0x66) = (u8) M2C_FIELD(arg2, u8 *, 6);
        M2C_FIELD(arg0, u8 *, 0x67) = (u8) M2C_FIELD(arg2, u8 *, 7);
        func_001E5120(arg0, temp_a1, temp_a2);
        M2C_FIELD(arg0, s8 *, 0x74) = 0xFF;
        return arg0;
    }
    return NULL;
}
