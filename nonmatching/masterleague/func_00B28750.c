/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B28900(void);
extern u32 func_00B6F800(void);
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
M2C_UNK func_00B27A50(M2C_UNK);                     /* extern */
M2C_UNK func_00B27B40();                            /* extern */
M2C_UNK func_00B27CD0();                            /* extern */

s32 func_00B28750(void) {
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00B28900();
    if (temp_v0 != 0) {
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x214);
        switch (temp_v1) {                          /* irregular */
        case 3:
            return 1;
        case 2:
            if (func_00B6F800() == 0) {
                M2C_FIELD(temp_v0, s32 *, 0x214) = 0;
                func_00B27A50(0);
                func_00B27CD0();
            }
            /* fallthrough */
        default:
            if (M2C_FIELD(temp_v0, s16 *, 0x192) != 0) {
                func_00949340(temp_v0 + 0x192, 0, M2C_FIELD(temp_v0, s16 *, 0x190));
                M2C_FIELD(temp_v0, s16 *, 0x196) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x192) * 0);
                func_00B27B40();
            }
            return 0;
        }
    } else {
        return 1;
    }
}
