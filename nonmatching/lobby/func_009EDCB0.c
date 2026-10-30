/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009EED30(void *, s32);                 /* extern */
M2C_UNK func_009EF120(void *, s32);                 /* extern */
M2C_UNK func_009EFA20(void *, s32);                 /* extern */
M2C_UNK func_009EFC90(void *, s32);                 /* extern */
M2C_UNK func_009EFD90(void *, s32, s32);            /* extern */
M2C_UNK func_009EFF90(void *);                      /* extern */
s32 func_009F00B0(void *, s32);                     /* extern */
M2C_UNK func_009F0420(void *, s32, s32);            /* extern */
s32 func_009F05D0(s32, void *, void *);             /* extern */

void func_009EDCB0(void *arg0) {
    s32 temp_s0_2;
    void *temp_s0;
    void *temp_s1;

    temp_s0 = arg0 + 0x3C;
    if (func_009F05D0(M2C_FIELD(arg0, s32 *, 0x2C), temp_s0 + 0x10, temp_s0 + 0x14) == 1) {
        func_009F0420(temp_s0, M2C_FIELD(temp_s0, s32 *, 0x10), M2C_FIELD(temp_s0, s32 *, 0x14));
    }
    temp_s0_2 = M2C_FIELD(arg0, s32 *, 0x2C);
    temp_s1 = arg0 + 0x54;
    if (func_009F00B0(temp_s1, temp_s0_2) == 1) {
        func_009EFF90(temp_s1);
    }
    func_009EFD90(temp_s1, temp_s0_2, M2C_FIELD(arg0, s32 *, 0x30));
    func_009EFC90(arg0 + 0x78, M2C_FIELD(arg0, s32 *, 0x30));
    func_009EFA20(arg0 + 0x9C, M2C_FIELD(arg0, s32 *, 0x30));
    func_009EF120(arg0 + 0xE0, M2C_FIELD(arg0, s32 *, 0x30));
    func_009EED30(arg0 + 0x1A0, M2C_FIELD(arg0, s32 *, 0x34));
}
