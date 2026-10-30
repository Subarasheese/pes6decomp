/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_00103208(void *);
M2C_UNK func_00103050(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001031F0(void *, s128);                /* extern */
M2C_UNK func_001032B0(void *, M2C_UNK, s64);        /* extern */
extern char D_00376350[];
extern char D_003763D0[];
extern char D_004FDC00[];
extern char D_004FDC10[];

void func_0013F970(void *arg0) {
    s32 temp_s6_2;
    s32 var_s1;
    s32 var_s2;
    s32 var_v0;
    s64 temp_s0_2;
    u16 temp_s3;
    u16 temp_s4;
    u16 temp_s6;
    u32 temp_s0;
    void *temp_v1;

    temp_v1 = ((void *)D_00376350) + ((*(s32 *)D_004FDC00) * 0x2C);
    temp_s4 = M2C_FIELD(temp_v1, u16 *, 0xC);
    temp_s3 = M2C_FIELD(temp_v1, u16 *, 0xE);
    temp_s6 = M2C_FIELD(temp_v1, u16 *, 0x10);
    temp_s0 = M2C_FIELD(((((*(u8 *)D_004FDC10) == 0) * 4) + temp_v1), u32 *, 0x18);
    var_s2 = (s32) temp_s4 >> 1;
    if ((s32) temp_s4 < 0) {
        var_s2 = (s32) (temp_s4 + 1) >> 1;
    }
    var_s1 = (s32) temp_s3 >> 1;
    if ((s32) temp_s3 < 0) {
        var_s1 = (s32) (temp_s3 + 1) >> 1;
    }
    func_00103050(arg0, 0, 0, 0);
    func_001031F0(arg0, (*(s128 *)D_003763D0));
    var_v0 = (s32) temp_s4 >> 6;
    if ((s32) temp_s4 < 0) {
        var_v0 = (s32) (temp_s4 + 0x3F) >> 6;
    }
    func_001032B0(arg0, 0x4C, (((s64) ((s64) temp_s6 << 0x20) >> 0x20) << 0x18) | (((u64) ((s64) (temp_s0 >> 0xB) << 0x20) >> 0x20) | (((s64) ((s64) var_v0 << 0x20) >> 0x20) << 0x10)));
    func_001032B0(arg0, 0x4E, 1 << 0x20);
    temp_s0_2 = (0x800 - var_s1) * 0x10;
    temp_s6_2 = (0x800 - var_s2) * 0x10;
    func_001032B0(arg0, 0x18, temp_s6_2 | (temp_s0_2 << 0x20));
    func_001032B0(arg0, 0x40, (((s64) ((temp_s4 - 1) << 0x20) >> 0x20) << 0x10) | (((s64) ((temp_s3 - 1) << 0x20) >> 0x20) << 0x30));
    func_001032B0(arg0, 0x47, 0x33001);
    func_001032B0(arg0, 0, 6);
    func_001032B0(arg0, 1, 0);
    func_001032B0(arg0, 5, ((s64) ((temp_s6_2 - 8) << 0x20) >> 0x20) | (((s64) ((temp_s0_2 - 8) << 0x20) >> 0x20) << 0x10));
    func_001032B0(arg0, 5, ((s64) ((((var_s2 + 0x800) * 0x10) - 8) << 0x20) >> 0x20) | (((s64) ((((var_s1 + 0x800) * 0x10) - 8) << 0x20) >> 0x20) << 0x10));
    func_00103208(arg0);
}
