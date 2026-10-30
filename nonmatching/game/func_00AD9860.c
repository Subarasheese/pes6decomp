/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00288670(u32, u32);
extern u16 func_00A9C660(void *);
s32 func_009B30B0(u16, u16);                        /* extern */
s32 func_00BBB7F0(u32);                             /* extern */
extern char Pes6MatchSquads[];

s32 func_00AD9860(void *arg0) {
    s32 temp_s1;

    temp_s1 = (func_00BBB7F0((0x63 - func_00288670(M2C_FIELD(((M2C_FIELD(arg0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(arg0, u8 *, 0x12) * 0x6900))), u8 *, 0x7A) & 0x7F, 0x1EU)) + 0x60) + 0x2B0) & 0xFFFF;
    return (temp_s1 + (func_00BBB7F0((u32) (func_009B30B0(M2C_FIELD(arg0, u16 *, 0x26), func_00A9C660(arg0)) & 0xFFFF) >> 1) & 0xFFFF)) & 0xFFFF;
}
