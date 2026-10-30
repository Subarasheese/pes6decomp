/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B035D0(void);
extern s32 func_001F08B0(s32);
M2C_UNK func_009737E0(s32, M2C_UNK, s32);           /* extern */

void func_00AF91C0(void) {
    s32 temp_a1;
    u32 temp_v0;

    temp_v0 = func_00B035D0();
    if (temp_v0 != 0) {
        temp_a1 = M2C_FIELD(temp_v0, s32 *, 0x29F98);
        switch (temp_a1) {                          /* irregular */
        case 1:
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x29F0C), 7, func_001F08B0(0x410042));
            break;
        case 3:
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x29F0C), 7, func_001F08B0(0x410042));
            return;
        case 2:
            if (M2C_FIELD(temp_v0, u8 *, 0x5C4) != 0) {
                func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x29F0C), 7, func_001F08B0(0x410041));
                return;
            }
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x29F0C), 7, func_001F08B0(0x410043));
            return;
        case 0:
            if (M2C_FIELD(temp_v0, u8 *, 0x5C4) != 0) {
                func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x29F0C), 7, func_001F08B0(0x410041));
                return;
            }
            func_009737E0(M2C_FIELD(temp_v0, s32 *, 0x29F0C), 7, func_001F08B0(0x410043));
            return;
        }
    }
}
