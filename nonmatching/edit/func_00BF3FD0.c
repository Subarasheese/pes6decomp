/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(void *, void *, M2C_UNK);     /* extern */
s32 func_00BC5740(u16);                             /* extern */
extern char D_00CE8E20[];

void func_00BF3FD0(s32 arg0, void *arg1) {
    void *temp_s1;

    if (arg1 != NULL) {
        temp_s1 = ((void *)D_00CE8E20) + (arg0 * 0x146C) + 0x13A8;
        if (temp_s1 != NULL) {
            func_001C4730(arg1, temp_s1, 0x7C);
            if (func_00BC5740(M2C_FIELD(temp_s1, u16 *, 0x80)) != 0) {
                M2C_FIELD(arg1, u8 *, 0x35) = (u8) ((M2C_FIELD(arg1, u8 *, 0x35) & ~0xF0) | 0xD0);
            }
        }
    }
}
