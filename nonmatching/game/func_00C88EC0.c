/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BB400(void *, s32);
M2C_UNK func_001BB4F0(s32, void *);                 /* extern */
extern char D_00CCCE30[];
extern char D_00CCD088[];

void func_00C88EC0(u32 arg0, s32 arg1, s32 arg2) {
    void *temp_s2;

    if (((*(s32 *)D_00CCD088) != 0) && (arg0 < 0x21U)) {
        temp_s2 = ((void *)D_00CCCE30) + (arg0 << 5) + 0x25C;
        func_001BB400(temp_s2, (s32) temp_s2);
        func_001BB4F0((*(s32 *)D_00CCD088), temp_s2);
        M2C_FIELD(temp_s2, s32 *, 0x10) = arg1;
        M2C_FIELD(temp_s2, s32 *, 0x14) = arg2;
        M2C_FIELD(temp_s2, s32 *, 0x18) = 0;
        M2C_FIELD(temp_s2, s32 *, 0x1C) = 0;
    }
}
