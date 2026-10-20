/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001205C0(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_002D9D28();                            /* extern */
M2C_UNK func_002DEAE0();                            /* extern */
extern char D_003B7120[];

s32 func_003083C0(void) {
    func_001205C0(((void *)D_003B7120), 0);
    func_002D9D28();
    func_002DEAE0();
    return 1;
}
