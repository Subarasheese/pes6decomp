/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B035D0(void);
M2C_UNK func_002F2ED0(s32);                         /* extern */
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
M2C_UNK func_00AF7620();                            /* extern */
M2C_UNK func_00AF96F0();                            /* extern */

s32 func_00AFFAE0(void) {
    s32 temp_a0;
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        temp_a0 = M2C_FIELD(temp_v0, s32 *, 0x5F0);
        if (temp_a0 != 0) {
            func_002F2ED0(temp_a0);
        }
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x5E4);
        switch (temp_v1) {                          /* irregular */
        case 8:
            return M2C_FIELD(temp_v0, s32 *, 0x5E4);
        default:
            if (M2C_FIELD(temp_v0, s16 *, 0x5CC) == 0) {
                if (M2C_FIELD(temp_v0, s16 *, 0x29DE0) != 0) {
                    func_00949340(temp_v0 + 0x29DE0, 0, M2C_FIELD(temp_v0, s16 *, 0x29DDE));
                    M2C_FIELD(temp_v0, s16 *, 0x29DE2) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x29DE0) * 0);
                    func_00AF7620();
                }
            } else {
                func_00949340(temp_v0 + 0x5CC, 0, M2C_FIELD(temp_v0, s16 *, 0x5CA));
                M2C_FIELD(temp_v0, s16 *, 0x5CE) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x5CC) * 0);
                func_00AF96F0();
            }
            /* fallthrough */
        case 9:
            return M2C_FIELD(temp_v0, s32 *, 0x5E4);
        }
    } else {
        return 1;
    }
}
