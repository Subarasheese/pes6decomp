/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00B0CD50(void);
extern void func_002EC3D0(void *, s32, s32);
M2C_UNK func_00972020(s32, M2C_UNK);                /* extern */
s32 func_00B0C370(u16);                             /* extern */
s32 func_00B0C770();                                /* extern */

void func_00B0FD30(void) {
    u32 temp_v0;

    temp_v0 = func_00B0CD50();
    if (temp_v0 != 0) {
        if ((func_00B0C770() & 0xFFFF) != 0xFFFF) {
            if (func_00B0C370(M2C_FIELD(temp_v0, u16 *, 0x13C2)) != 1) {
                func_002EC3D0(M2C_FIELD(temp_v0, void **, 8), 1, 1);
                func_00972020(M2C_FIELD(temp_v0, s32 *, 0xEA0), 0);
            } else {
                func_002EC3D0(M2C_FIELD(temp_v0, void **, 8), 1, 0);
                func_00972020(M2C_FIELD(temp_v0, s32 *, 0xEA0), 1);
            }
        } else {
            func_002EC3D0(M2C_FIELD(temp_v0, void **, 8), 1, 0);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0xEA0), 0);
        }
    }
}
