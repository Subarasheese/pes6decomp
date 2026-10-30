/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_0082C2A0(void);
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0082C690(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082C8E0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0082CA50(M2C_UNK, M2C_UNK);            /* extern */
s32 *func_00842650();                               /* extern */
M2C_UNK func_00842970(M2C_UNK);                     /* extern */
M2C_UNK func_008429F0(M2C_UNK);                     /* extern */

s32 func_0083D580(void) {
    s32 *temp_s1;
    s32 temp_s0;

    temp_s1 = func_00842650();
    temp_s0 = func_0082C2A0();
    func_0082C8E0(0x43, 0);
    func_0082CA50(0x45, 0);
    func_0082C690(0x43, 0);
    func_0082C8E0(0x44, 0);
    func_0082CA50(0x46, 0);
    func_0082C690(0x44, 0);
    if (temp_s1 != NULL) {
        if (temp_s0 != 0) {
            *temp_s1 = 1;
            func_001C48E8(temp_s1, 0, 0x14);
            func_00842970(1);
            func_008429F0(1);
            goto block_6;
        }
        return 0;
    }
block_6:
    return 0;
}
