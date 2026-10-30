/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_009B44E0(void);
extern u16 func_009B4390(void);
extern u16 func_009B4580(void);
extern s32 D_003E758C;
extern char D_00CBA918[];

void func_009B0870(void) {
    s32 temp_s3;
    s32 temp_s3_2;
    s32 var_s1;
    s32 var_s2;
    s64 temp_v1_2;
    u8 temp_v1;

    var_s2 = func_009B4390() & 0xFFFF;
    var_s1 = func_009B44E0() & 0xFFFF;
    temp_s3 = func_009B44E0() & 0xFFFF;
    if (temp_s3 < (func_009B4580() & 0xFFFF)) {
        var_s1 += 0x12C;
    }
    temp_s3_2 = func_009B4390() & 0xFFFF;
    if ((func_009B4580() & 0xFFFF) >= temp_s3_2) {
        var_s2 += 0x12C;
    }
    if (var_s1 < var_s2) {
        M2C_FIELD(((void *)D_00CBA918), s8 *, 0) = 0;
        M2C_FIELD(((void *)D_00CBA918), u8 *, 1) = 0U;
        return;
    }
    temp_v1 = M2C_FIELD((((func_009B4390() & 0xFFFF) * 0x354) + D_003E758C), u8 *, 0x354);
    M2C_FIELD(((void *)D_00CBA918), u8 *, 7) = temp_v1;
    temp_v1_2 = (s64) ((s64) temp_v1 << 0x38) >> 0x38;
    M2C_FIELD(((void *)D_00CBA918), u8 *, 1) = (u8) (temp_v1_2 & 0xF8);
    M2C_FIELD(((void *)D_00CBA918), s8 *, 0) = (s8) (((s64) ((temp_v1_2 & 3) << 0x38) >> 0x38) - 1);
    M2C_FIELD(((void *)D_00CBA918), u8 *, 1) = (u8) ((s32) M2C_FIELD(((void *)D_00CBA918), u8 *, 1) >> 3);
}
