/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
extern u16 func_00A9C660(void *);
s32 func_00AD9920(void *, s32, M2C_UNK *, s32);     /* extern */
s32 func_00BBB780(s64);                             /* extern */
extern char Pes6MatchSquads[];

s32 func_00AD2810(void *arg0, s32 arg1) {
    s32 temp_a2;
    s32 temp_v1;
    u8 temp_a3;
    void *temp_a0;

    temp_a3 = M2C_FIELD(arg0, u8 *, 0x12);
    temp_a0 = (M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (temp_a3 * 0x6900));
    if ((M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != (M2C_FIELD(temp_a0, u8 *, 0x68) & 1 & 1)) && ((((u64) ((s64) M2C_FIELD(temp_a0, u8 *, 0x84) << 0x3A) >> 0x3D) + 1) < 7)) {
        return 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0xA8) < 0x2800) {
        if (func_00AD9920(arg0, temp_a3 * 0x69, ((void *)Pes6MatchSquads), temp_a3 * 0xF) != 0) {
            if (!(func_00BBB780((s64) ((func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7A) & 0x7F, 0x1EU) - 0x1E) << 0x30) >> 0x30) & 0xFF)) {
                return 0;
            }
            goto block_14;
        }
        if (!(func_00BBB780((s64) (func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7A) & 0x7F, 0x1EU) << 0x30) >> 0x30) & 0xFF)) {
            return 0;
        }
block_14:
        temp_a2 = func_00A9C660(arg0) & 0xFFFF;
        temp_v1 = ((((arg1 & 0xFFFF) - temp_a2) + 0x10000) & 0xFFFF) < 0x8001;
        if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), u8 *, 0x2D) != temp_v1) {
            return 0;
        }
        return ((((M2C_FIELD(arg0, u16 *, 0x2A) - temp_a2) + 0x10000) & 0xFFFF) < 0x8001) != temp_v1;
    }
    return 0;
}
