/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00AEFF50(void);
extern void func_002EC3D0(void *, s32, s32);
M2C_UNK func_00972020(s32, M2C_UNK);                /* extern */
s32 func_00AEEC80(u16);                             /* extern */
s32 func_00AEECE0();                                /* extern */

void func_00AF2880(void) {
    u32 temp_v0;

    temp_v0 = func_00AEFF50();
    if (temp_v0 != 0) {
        if ((func_00AEECE0() & 0xFFFF) != 0xFFFF) {
            if (func_00AEEC80(M2C_FIELD(temp_v0, u16 *, 0x210A)) != 1) {
                func_002EC3D0(M2C_FIELD(temp_v0, void **, 4), 1, 1);
                func_00972020(M2C_FIELD(temp_v0, s32 *, 0x1C78), 0);
            } else {
                func_002EC3D0(M2C_FIELD(temp_v0, void **, 4), 1, 0);
                func_00972020(M2C_FIELD(temp_v0, s32 *, 0x1C78), 1);
            }
        } else {
            func_002EC3D0(M2C_FIELD(temp_v0, void **, 4), 1, 0);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0x1C78), 0);
        }
    }
}
