/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001AC370(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001ACBC0(void *);                      /* extern */
M2C_UNK func_001ACDF0();                            /* extern */
M2C_UNK func_001AD400(void *);                      /* extern */
M2C_UNK func_001AE250(void *);                      /* extern */

void func_002FBF50(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x1F9) = 3;
    func_001ACDF0();
    func_001AD400(arg0);
    func_001ACBC0(arg0);
    func_001AE250(arg0);
    func_001AC370(arg0, 0x68, 0x7530);
}
