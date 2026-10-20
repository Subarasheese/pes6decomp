/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00144BC0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00144BD0();                            /* extern */
M2C_UNK func_00144CA0(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern char D_003764A0[];

void func_00142A20(void) {
    func_00144CA0(1, 1, ((void *)D_003764A0), 0);
    func_00144BD0();
    func_00144BC0(1, 2);
}
