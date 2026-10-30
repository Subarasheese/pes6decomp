/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0021E000(u32);
extern void func_001DA4B0(s32);
extern s32 func_0021DF90(s32);
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001DD560(M2C_UNK);                     /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
extern u8 D_003EA004;
extern u8 D_003EA008;
extern u8 D_003EA00C;
extern u8 D_003EA010;
extern u8 D_003EA014;

void func_00362610(void) {
    if (D_003EA010 != 0) {
        func_001E7140(func_0021E000(0x75U));
        func_001F0210(func_0021DF90(0xA));
        if (D_003EA014 == 0) {
            func_001D5C40(0x10238);
        } else {
            func_001D5C40(0x10239);
            D_003EA014 = 0;
        }
        if (D_003EA004 != 0) {
            func_001DD560(0x17);
            D_003EA004 = 0;
        }
        if (D_003EA008 != 0) {
            func_001DD560(0x19);
            D_003EA008 = 0;
        }
        if (D_003EA00C != 0) {
            func_001DA4B0(1);
            D_003EA00C = 0;
        }
        D_003EA010 = 0;
    }
}
