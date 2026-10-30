/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001659F8(void *);
extern void func_00164258(s32, s32, s32, s32, void *, void *, void *, void *);
void func_001727A8(void *arg0) {
    s32 sp0;
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_v0;
    s32 temp_v1;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 var_v0;
    s32 var_v1;
    s64 temp_a0_2;
    s64 temp_v0_2;
    s64 temp_v1_4;
    s64 temp_v1_5;
    void *temp_a0;
    void *temp_s1;
    void *temp_s2;
    void *temp_s3;

    temp_s2 = arg0 + 0xC6C;
    temp_s3 = arg0 + 0xC70;
    temp_s1 = arg0 + ((M2C_FIELD(arg0, s32 *, 0x4EC) << 6) + 0xB00);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x4C), M2C_UNK (**)(void *, void *), 0x9C)(temp_s2, temp_s3);
    temp_a0 = M2C_FIELD(arg0, void **, 0x54);
    if (temp_a0 != NULL) {
        sp0 = 0;
        func_001659F8(temp_a0);
        M2C_FIELD(arg0, s32 *, 0xC6C) = (s32) (M2C_FIELD(arg0, s32 *, 0xC6C) + sp0);
        M2C_FIELD(arg0, s32 *, 0xC70) = (s32) (M2C_FIELD(arg0, s32 *, 0xC70) + sp0);
    }
    temp_v1 = M2C_FIELD(arg0, s32 *, 0x8D4);
    temp_t3 = M2C_FIELD(arg0, s32 *, 0xC6C);
    temp_t2 = M2C_FIELD(arg0, s32 *, 0xC70);
    temp_v0 = temp_v1 + M2C_FIELD(arg0, s32 *, 0xCF0);
    temp_v1_2 = temp_v1 + M2C_FIELD(arg0, s32 *, 0xCF4);
    M2C_FIELD(arg0, s32 *, 0xC6C) = (s32) (temp_t3 + temp_v0);
    M2C_FIELD(arg0, s32 *, 0xC70) = (s32) (temp_t2 + temp_v1_2);
    M2C_FIELD(arg0, s32 *, 0xC74) = (s32) ((temp_t3 + M2C_FIELD(arg0, s32 *, 0x5AC)) - temp_v0);
    M2C_FIELD(arg0, s32 *, 0xC78) = (s32) ((temp_t2 + M2C_FIELD(arg0, s32 *, 0x5B0)) - temp_v1_2);
    func_00164258(M2C_FIELD(arg0, s32 *, 0xC5C), M2C_FIELD(arg0, s32 *, 0xC60), M2C_FIELD(arg0, s32 *, 0xC64), M2C_FIELD(arg0, s32 *, 0xC68), temp_s2, temp_s3, arg0 + 0xC74, arg0 + 0xC78);
    temp_v0_2 = (M2C_FIELD(temp_s1, s64 *, 0x20) & ~0x7FF) | (((s64) M2C_FIELD(arg0, s32 *, 0xC6C) >> 4) & 0x7FF);
    M2C_FIELD(temp_s1, s64 *, 0x20) = temp_v0_2;
    temp_a0_2 = (temp_v0_2 & 0xF800FFFF) | ((((s64) M2C_FIELD(arg0, s32 *, 0xC74) >> 4) & 0x7FF) << 0x10);
    M2C_FIELD(temp_s1, s64 *, 0x20) = temp_a0_2;
    temp_v1_3 = M2C_FIELD(arg0, s32 *, 0xC70);
    if (M2C_FIELD(arg0, s32 *, 0x4EC) != 0) {
        temp_v1_4 = (temp_a0_2 & ((((-0x800 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((((s64) temp_v1_3 >> 4) & 0x7FF) << 0x20);
        M2C_FIELD(temp_s1, s64 *, 0x20) = temp_v1_4;
        var_v1 = temp_v1_4 & ((((0xF800FFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF);
        var_v0 = M2C_FIELD(arg0, s32 *, 0xC78);
    } else {
        temp_v1_5 = (temp_a0_2 & ((((-0x800 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((((s32) (temp_v1_3 + 7) >> 4) & 0x7FF) << 0x20);
        M2C_FIELD(temp_s1, s64 *, 0x20) = temp_v1_5;
        var_v1 = temp_v1_5 & ((((0xF800FFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF);
        var_v0 = M2C_FIELD(arg0, s32 *, 0xC78) + 0xF;
    }
    M2C_FIELD(temp_s1, s64 *, 0x20) = (s64) (var_v1 | ((((var_v0 >> 4) - 1) & 0x7FF) << 0x30));
}
