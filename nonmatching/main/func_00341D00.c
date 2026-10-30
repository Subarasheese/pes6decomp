/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_0022F150(void);
M2C_UNK func_001C4730(s32, void *, M2C_UNK);        /* extern */
M2C_UNK func_00327240(void *, void *, void *, u8);  /* extern */
M2C_UNK func_00327720(void *, void *, void *, u8);  /* extern */
M2C_UNK func_003414D0(u8 *, M2C_UNK, M2C_UNK);      /* extern */
extern char D_005F1E10[];

void func_00341D00(void) {
    u8 sp4F;
    s32 temp_s1;
    void *temp_s2;

    if (M2C_FIELD(((void *)D_005F1E10), u8 *, 0) != 0) {
        temp_s2 = ((void *)D_005F1E10) + 4;
        temp_s1 = func_0022F150() + 0x44;
        if (M2C_FIELD(((void *)D_005F1E10), u8 *, 1) != 0xFF) {
            sp4F = M2C_FIELD(((void *)D_005F1E10), u8 *, 1);
        } else {
            func_003414D0(&sp4F, 3, 0);
        }
        func_00327720(temp_s2, ((void *)D_005F1E10) + 0xBE8, ((void *)D_005F1E10) + 0xC30, sp4F);
        func_001C4730(temp_s1 + 0x400, temp_s2 + (sp4F * 0x3C) + 0x50, 0x3C);
        func_001C4730(temp_s1 + 0x46C, temp_s2 + (sp4F * 4) + 0x8E4, 4);
        func_00327240(temp_s2, ((void *)D_005F1E10) + 0xBE8, ((void *)D_005F1E10) + 0xC30, sp4F);
        func_001C4730(temp_s1, temp_s2 + (sp4F << 0xA) + 0xC8, 0x400);
        func_001C4730(temp_s1 + 0x43C, temp_s2 + 0xA60, 0x30);
    }
}
