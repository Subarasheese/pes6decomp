/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B37A60(void);
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_00949340(s32, M2C_UNK, s16);           /* extern */
M2C_UNK func_00B367C0();                            /* extern */

s32 func_00B377B0(void) {
    s16 temp_a2;
    s16 temp_s1;
    s32 temp_v1;
    u32 temp_v0;

    temp_v0 = func_00B37A60();
    if (temp_v0 != 0) {
        if (M2C_FIELD(temp_v0, s16 *, 0x28E) == 0) {
            temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x298);
            switch (temp_v1) {                      /* irregular */
            case 1:
                break;
            case 0:
                if ((s32) M2C_FIELD(temp_v0, u8 *, 0x290) > 0) {
                    M2C_FIELD(temp_v0, s16 *, 0x28E) = (s16) -M2C_FIELD(temp_v0, s16 *, 0x28A);
                    M2C_FIELD(temp_v0, u8 *, 0x290) = (u8) (M2C_FIELD(temp_v0, u8 *, 0x290) - 1);
                    temp_a2 = M2C_FIELD(temp_v0, s16 *, 0x294);
                    M2C_FIELD(temp_v0, s16 *, 0x28C) = temp_a2;
                    temp_s1 = M2C_FIELD(temp_v0, s16 *, 0x28E);
                    func_00949340(temp_v0 + 0x28E, 0, temp_a2);
                    M2C_FIELD(temp_v0, s16 *, 0x292) = (s16) (M2C_FIELD(temp_v0, s16 *, 0x28E) - ((s64) ((s64) temp_s1 << 0x30) >> 0x30));
                    func_00B367C0();
                    func_0026E840(0x8400F802);
                }
                break;
            }
        }
    }
    return 0;
}
