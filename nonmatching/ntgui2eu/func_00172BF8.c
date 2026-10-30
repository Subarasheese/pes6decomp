/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00173858(void *);
s32 func_00165B00(void *);                          /* extern */
s32 func_00167BB8(s32, u32, void *, M2C_UNK *);     /* extern */
M2C_UNK func_00167C38(s32, s32);                    /* extern */
M2C_UNK func_00173B38(void *);                      /* extern */
M2C_UNK func_00173BE8(void *);                      /* extern */
M2C_UNK func_00173CF0(void *);                      /* extern */
M2C_UNK func_00173E10(void *);                      /* extern */
M2C_UNK func_00174470();                            /* extern */
s32 func_001744D0(void *, s32, s32);                /* extern */
extern M2C_UNK func_001736C0;

void func_00172BF8(void *arg0) {
    s32 temp_v0;

    if (M2C_FIELD(arg0, s32 *, 0xD04) != 0) {
        func_00174470();
        temp_v0 = func_001744D0(arg0, M2C_FIELD(arg0, s32 *, 0x4F4), M2C_FIELD(arg0, s32 *, 0x4F8));
        if (temp_v0 >= 0) {
            M2C_FIELD(arg0, s32 *, 0xB8C) = temp_v0;
            func_00173858(arg0);
            M2C_FIELD(arg0, s32 *, 0x98) = 2;
            func_00173B38(arg0);
            func_00173BE8(arg0);
            func_00173E10(arg0);
            func_00173CF0(arg0);
        }
        if (M2C_FIELD(arg0, s32 *, 0xC90) != 0) {
            func_00167C38(func_00165B00(arg0), M2C_FIELD(arg0, s32 *, 0xC90));
        }
        M2C_FIELD(arg0, s32 *, 0xC90) = func_00167BB8(func_00165B00(arg0), M2C_FIELD(arg0, u32 *, 0xC94), arg0, &func_001736C0);
    }
}
