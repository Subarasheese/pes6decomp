/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern f32 func_001D79A0(void *, u16);
extern void func_001D7D80(void *, s16);
M2C_UNK func_001D7A20(void *, s32, u16);            /* extern */
extern char D_0091F962[];
extern char D_00921DD8[];

void func_0090F790(s32 arg0, s32 arg1, s64 arg2) {
    s32 temp_s0;
    u16 *temp_s0_2;
    void **temp_s1;

    temp_s0 = arg1 * 4;
    temp_s1 = ((void *)D_00921DD8) + temp_s0;
    func_001D7D80(*temp_s1, (s16) ((s64) (arg2 << 0x30) >> 0x30));
    temp_s0_2 = ((void *)D_0091F962) + temp_s0;
    func_001D7A20(*temp_s1, arg0, *temp_s0_2);
    func_001D79A0(*temp_s1, *temp_s0_2);
}
