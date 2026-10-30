/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00B36BB0(void);
extern u32 func_00B37A60(void);
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
M2C_UNK func_00B367C0();                            /* extern */

s32 func_00B37910(void) {
    u32 temp_v0;

    temp_v0 = func_00B37A60();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s32 *, 0x298) == 2) {
            return 1;
        }
        if (M2C_FIELD(temp_v0, s16 *, 0x284) != 0) {
            func_00949340(temp_v0 + 0x284, 0, M2C_FIELD(temp_v0, s16 *, 0x282));
            M2C_FIELD(temp_v0, s16 *, 0x286) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x284) * 0);
            func_00B36BB0();
        }
        if (M2C_FIELD(temp_v0, s16 *, 0x28E) != 0) {
            func_00949340(temp_v0 + 0x28E, 0, M2C_FIELD(temp_v0, s16 *, 0x28C));
            M2C_FIELD(temp_v0, s16 *, 0x292) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x28E) * 0);
            func_00B367C0();
        }
        return 0;
    }
    return 1;
}
