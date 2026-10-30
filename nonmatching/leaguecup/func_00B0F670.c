/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_002EC3D0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00972020(s32, M2C_UNK);                /* extern */
void *func_00B0CD50();                              /* extern */

void func_00B0F670(s32 arg0) {
    void *temp_v0;

    temp_v0 = func_00B0CD50();
    if (temp_v0 != NULL) {
        switch (arg0) {                             /* irregular */
        case 1:
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0xE9C), 0);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0xEA0), 0);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0xE98), 1);
            func_002EC3D0(M2C_FIELD(temp_v0, s32 *, 8), 0, 0);
            func_002EC3D0(M2C_FIELD(temp_v0, s32 *, 8), 1, 0);
            break;
        case 2:
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0xE9C), 0);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0xEA0), 0);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0xE98), 0);
            func_002EC3D0(M2C_FIELD(temp_v0, s32 *, 8), 0, 1);
            return;
        case 0:
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0xE9C), 0);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0xEA0), 0);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0xE98), 0);
            func_002EC3D0(M2C_FIELD(temp_v0, s32 *, 8), 0, 0);
            func_002EC3D0(M2C_FIELD(temp_v0, s32 *, 8), 1, 0);
            return;
        default:
        case 3:
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0xE9C), 1);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0xEA0), 0);
            func_00972020(M2C_FIELD(temp_v0, s32 *, 0xE98), 0);
            func_002EC3D0(M2C_FIELD(temp_v0, s32 *, 8), 0, 0);
            func_002EC3D0(M2C_FIELD(temp_v0, s32 *, 8), 1, 0);
            return;
        }
    }
}
