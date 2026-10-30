/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00110E58(unsigned long long, void *, void *);
u64 func_001105C8();                                /* extern */
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern char D_0088A900[];

void func_00802A00(s32 arg0) {
    u32 sp38;
    s32 sp3C;

    if (arg0 & 1) {
        func_001C48E8(((void *)D_0088A900), 0, 8);
    }
    if (arg0 & 2) {
        func_001C48E8(((void *)D_0088A900) + 8, 0, 0x10);
        func_00110E58(func_001105C8(), &sp3C, &sp38);
        M2C_FIELD(((void *)D_0088A900), s32 *, 0xC) = (s32) ((sp38 / 1000U) + (sp3C * 0x3E8));
    }
    if (arg0 & 4) {
        func_001C48E8(((void *)D_0088A900) + 0x18, 0, 1);
    }
    if (arg0 & 8) {
        func_001C48E8(((void *)D_0088A900) + 0x1C, 0, 4);
    }
    if (arg0 & 0x10) {
        func_001C48E8(((void *)D_0088A900) + 0x20, 0, 1);
    }
}
