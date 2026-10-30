/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00102FD8(void *, int);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_003FAF00[];

void func_00121590(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_s3;

    temp_s3 = ((void *)D_003FAF00) + (arg0 * 0x24);
    func_001C48E8(temp_s3, 0, 0x24);
    M2C_FIELD(temp_s3, s32 *, 0x18) = arg1;
    M2C_FIELD(temp_s3, s32 *, 0x10) = arg2;
    M2C_FIELD(temp_s3, s32 *, 0x14) = arg3;
    M2C_FIELD(temp_s3, s32 *, 0x20) = 0;
    func_00102FD8(temp_s3, M2C_FIELD(((M2C_FIELD(temp_s3, s32 *, 0x20) * 4) + temp_s3), s32 *, 0x10));
}
