/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_00120520(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_002DA9C0();                            /* extern */
M2C_UNK func_002DEA90();                            /* extern */
extern char D_003B7120[];

s32 func_00308380(void) {
    func_002DA9C0();
    func_002DEA90();
    func_00120520(((void *)D_003B7120), 6);
    return 1;
}
