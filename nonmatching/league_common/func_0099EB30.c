/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_009A0430(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
s32 func_009A1EE0(u8);                              /* extern */
M2C_UNK func_009A2320(M2C_UNK);                     /* extern */

s32 func_0099EB30(void) {
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_009A0430();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0);
        switch (temp_v1) {                          /* irregular */
        case 2:
            break;
        case 1:
            func_009A2320(0);
            M2C_FIELD(temp_v0, s32 *, 0) = 0;
            func_0026E840(0x84008401);
            break;
        case 0:
            if (func_009A1EE0(M2C_FIELD(temp_v0, u8 *, 0x418)) != 1) {
                func_0026E840(0x8C008005);
            } else {
                M2C_FIELD(temp_v0, s32 *, 0) = 1;
                func_009A2320(1);
                func_0026E840(0x84028400);
            }
            break;
        }
    }
    return 0;
}
