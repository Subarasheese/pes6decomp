/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_002260F0(s32);
extern u32 func_00B035D0(void);
M2C_UNK func_002C9E90(M2C_UNK *, s32);              /* extern */
M2C_UNK func_00971D00(s32, M2C_UNK, M2C_UNK *);     /* extern */
extern char D_00B43550[];

void func_00AF7C50(void) {
    s32 temp_s1;
    u32 temp_v0;

    temp_s1 = func_00225820() & 0xFF;
    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        func_002C9E90(((void *)D_00B43550), func_002260F0(temp_s1) + 0xD6);
        func_00971D00(M2C_FIELD(temp_v0, s32 *, 0x29DD0), 1, ((void *)D_00B43550));
    }
}
