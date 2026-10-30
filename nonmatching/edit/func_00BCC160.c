/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern u8 D_003E9E80;

s32 func_00BCC160(void *arg0, void *arg1, s32 arg2) {
    void *temp_v0;
    void *temp_v1;

    temp_v1 = arg0 + 0x34;
    temp_v0 = arg1 + 0x34;
    if (((M2C_FIELD(arg0, u8 *, 0x66) & 3) == (M2C_FIELD(arg1, u8 *, 0x66) & 3)) && (((u64) ((s64) M2C_FIELD(temp_v1, u8 *, 0x24) << 0x38) >> 0x3E) == ((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x24) << 0x38) >> 0x3E)) && (((u64) ((s64) M2C_FIELD(temp_v1, u16 *, 0x30) << 0x30) >> 0x35) == ((u64) ((s64) M2C_FIELD(temp_v0, u16 *, 0x30) << 0x30) >> 0x35)) && ((M2C_FIELD(temp_v1, u16 *, 0x28) & 0x7FF) == (M2C_FIELD(temp_v0, u16 *, 0x28) & 0x7FF)) && (((u64) ((s64) M2C_FIELD(temp_v1, u8 *, 0x2C) << 0x38) >> 0x3E) == ((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x2C) << 0x38) >> 0x3E)) && ((M2C_FIELD(temp_v1, u8 *, 0x40) & 0x1F) == (M2C_FIELD(temp_v0, u8 *, 0x40) & 0x1F)) && (((u64) ((s64) M2C_FIELD(temp_v1, u8 *, 0x3F) << 0x38) >> 0x3B) == ((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x3F) << 0x38) >> 0x3B)) && (((u64) ((s64) M2C_FIELD(temp_v1, u8 *, 0x45) << 0x3A) >> 0x3D) == ((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x45) << 0x3A) >> 0x3D)) && ((M2C_FIELD(temp_v1, u8 *, 0x44) & 0x1F) == (M2C_FIELD(temp_v0, u8 *, 0x44) & 0x1F)) && (((u64) ((s64) M2C_FIELD(temp_v1, u8 *, 0x43) << 0x3B) >> 0x3D) == ((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x43) << 0x3B) >> 0x3D)) && (((u64) ((s64) M2C_FIELD(temp_v1, u8 *, 0x46) << 0x39) >> 0x3D) == ((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 0x46) << 0x39) >> 0x3D))) {
        if ((arg2 & 0xFF) == D_003E9E80) {
            return 0;
        }
        goto block_14;
    }
block_14:
    return 1;
}
