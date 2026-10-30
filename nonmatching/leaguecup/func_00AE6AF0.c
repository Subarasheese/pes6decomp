/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AE7320(void);
extern void func_00AE4F30(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_0094C730();                                /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00AE51E0(u8);                          /* extern */
M2C_UNK func_00AE5330(M2C_UNK);                     /* extern */

s32 func_00AE6AF0(void) {
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00AE7320();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x590);
        switch (temp_v1) {                          /* irregular */
        case 2:
            M2C_FIELD(temp_v0, s32 *, 0x590) = 1;
            func_00AE5330(1);
            if ((func_0094C730() & 0xFF) == 5) {
                func_00958000(0x60);
            }
            func_00AE51E0(M2C_FIELD(temp_v0, u8 *, 0x58A));
            func_0026E840(0x84008401);
            break;
        case 1:
            M2C_FIELD(temp_v0, s32 *, 0x590) = 0;
            func_00AE5330(0);
            func_00AE4F30();
            func_0026E840(0x84008401);
            break;
        case 0:
            M2C_FIELD(temp_v0, s32 *, 0x590) = 3;
            func_0026E840(0x84008401);
            break;
        }
    }
    return 0;
}
