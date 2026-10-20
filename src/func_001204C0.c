/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001CDA70(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_001CDAB0(M2C_UNK, M2C_UNK);            /* extern */
extern char D_003F7790[];
extern char D_003F77A0[];

void func_001204C0(void) {
    func_001C48E8(((void *)D_003F7790), 0, 0x18);
    (*(s32 *)D_003F77A0) = 1;
    func_001CDAB0(1, 0);
    func_001CDA70(1, 0);
    func_001CDA70(0, 0);
}
