/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
M2C_UNK func_001E75A0(s32, M2C_UNK *);              /* extern */
s32 func_0096DB90(M2C_UNK);                         /* extern */
M2C_UNK func_00AEFF60();                            /* extern */
extern s32 D_003EAD44;
extern char D_00B31DC0[];

void func_00AF03D0(void) {
    s32 temp_v0;

    if (D_003EAD44 == 0) {
        if (D_003EAD44 == 0) {
            temp_v0 = func_0096DB90(0x2334);
            D_003EAD44 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x2334);
        }
        func_00AEFF60();
        func_001E75A0(func_0021E000(0x147U), ((void *)D_00B31DC0));
        func_001E75A0(func_0021E000(0x114U), ((void *)D_00B31DC0));
        func_001D5F80(0x102B4);
        func_001D5F80(0x10344);
        func_001D5F80(0x10385);
    }
}
