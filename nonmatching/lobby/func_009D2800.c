/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D60(void *, s8);
extern char D_00A7DE00[];

s32 func_009D2800(s32 arg0, s8 arg1) {
    s32 temp_s0;
    u8 temp_s1;
    void *temp_v1;

    if ((*(s32 *)D_00A7DE00) == 0) {
        return 0;
    }
    if (arg0 < 0) {
        return 0;
    }
    if (arg0 < 4) {
        M2C_FIELD((arg0 + (*(s32 *)D_00A7DE00)), s8 *, 9) = arg1;
        temp_s0 = arg0 * 8;
        temp_v1 = arg0 + (*(s32 *)D_00A7DE00);
        temp_s1 = M2C_FIELD(temp_v1, u8 *, 5);
        M2C_FIELD(temp_v1, u8 *, 5) = temp_s1;
        func_001D7D60(M2C_FIELD((temp_s0 + (*(s32 *)D_00A7DE00)), void **, 0x74), 0);
        func_001D7D60(M2C_FIELD((temp_s0 + (*(s32 *)D_00A7DE00)), void **, 0x78), 0);
        if ((temp_s1 & 0xFF) == 1) {
            if (M2C_FIELD((arg0 + (*(s32 *)D_00A7DE00)), u8 *, 9) == 0) {
                func_001D7D60(M2C_FIELD((temp_s0 + (*(s32 *)D_00A7DE00)), void **, 0x78), 1);
            } else {
                func_001D7D60(M2C_FIELD((temp_s0 + (*(s32 *)D_00A7DE00)), void **, 0x74), 1);
            }
        }
        return 1;
    }
    return 0;
}
