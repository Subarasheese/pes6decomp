/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001FC780(void);
extern s32 func_0021DF90(s32);
extern s32 func_0021E000(u32);
extern int func_002E8BD0(void);
M2C_UNK func_001D5C40(M2C_UNK);                     /* extern */
M2C_UNK func_001E7140(s32);                         /* extern */
M2C_UNK func_001F0210(s32);                         /* extern */
M2C_UNK func_002CAD40();                            /* extern */
extern u8 D_003EA0FC;
extern u8 D_003EA0FD;
extern u8 D_003EA0FE;
extern u8 D_003EA0FF;

void func_00627710(void) {
    s32 temp_v0;
    s32 var_v1;

    temp_v0 = func_002E8BD0();
    switch (temp_v0) {                              /* irregular */
    default:
        var_v1 = 0;
        break;
    case 0x2B:
        /* fallthrough */
    case 0x33:
    case 0x2E:
    case 0x2F:
        var_v1 = 1;
        break;
    }
    if (var_v1 != 0) {
        if (D_003EA0FC == 1) {
            if (func_002E8BD0() == 0x33) {
                func_001FC780();
            }
            if (func_002E8BD0() == 0x33) {
                func_002CAD40();
            }
        }
        if (D_003EA0FD == 1) {
            func_001E7140(func_0021E000(0x164U));
        }
        if (D_003EA0FE == 1) {
            func_001F0210(func_0021DF90(0x1B));
        }
        if (D_003EA0FF == 1) {
            func_001D5C40(0x103D6);
        }
    }
}
