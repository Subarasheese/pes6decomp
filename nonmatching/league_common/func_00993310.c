/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00993A80(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
s32 func_0095ED20();                                /* extern */
M2C_UNK func_00991D00(u8);                          /* extern */
M2C_UNK func_00991D50(M2C_UNK);                     /* extern */
s32 func_00991D90(u8);                              /* extern */

s32 func_00993310(void) {
    u32 temp_v0;

    temp_v0 = func_00993A80();
    if (temp_v0 == 0) {

    } else if (func_0095ED20() != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x258) == 0) {
            if (func_00991D90(M2C_FIELD(temp_v0, u8 *, 0x25C)) != 1) {
                func_0026E840(0x8C008005);
            } else {
                func_00991D50(1);
                func_00991D00(M2C_FIELD(temp_v0, u8 *, 0x25C));
                func_0026E840(0x84028400);
                M2C_FIELD(temp_v0, s32 *, 0x258) = 1;
                func_00958000(0x74);
            }
        }
    }
    return 0;
}
