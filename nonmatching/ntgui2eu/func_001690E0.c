/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00189AD0(void *, M2C_UNK);             /* extern */
M2C_UNK func_0018A148(s32, M2C_UNK, M2C_UNK);       /* extern */
extern char D_005BFFA8[];
extern char D_005BFFAC[];

void func_001690E0(s32 arg0) {
    void *temp_s1;

    temp_s1 = arg0 + 0x780;
    func_00189AD0(temp_s1, 2);
    func_0018A148(arg0 + 0x790, 0x98, 0);
    func_0018A148(arg0 + 0x7A0, 0xC0, 0);
    M2C_FIELD(temp_s1, s64 *, 0x20) = (s64) ((((M2C_FIELD(temp_s1, s64 *, 0x20) & ~0x7FF & ((((-0x800 << 0x10) | 0xFFFF) << 0x10) | 0xFFFF) & 0xF800FFFF) | ((((*(s32 *)D_005BFFA8) - 1) & 0x7FF) << 0x10)) & ((((0xF800FFFF << 0x10) | 0xFFFF) << 0x10) | 0xFFFF)) | ((((*(s32 *)D_005BFFAC) - 1) & 0x7FF) << 0x30));
    M2C_FIELD(temp_s1, s16 *, 0x10) = (s16) ((0x800 - ((s32) (*(s32 *)D_005BFFA8) >> 1)) * 0x10);
    M2C_FIELD(temp_s1, s16 *, 0x14) = (s16) ((0x800 - ((s32) (*(s32 *)D_005BFFAC) >> 1)) * 0x10);
}
