/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00987670(void);
M2C_UNK func_008178E0();                            /* extern */
M2C_UNK func_008178F0(M2C_UNK);                     /* extern */
M2C_UNK func_00817930();                            /* extern */
M2C_UNK func_00822610();                            /* extern */
M2C_UNK func_0099ABF0();                            /* extern */
M2C_UNK func_0099BE70();                            /* extern */

s32 func_00987E10(void) {
    func_00987670();
    func_0099ABF0();
    func_0099BE70();
    func_008178F0(0);
    func_00817930();
    func_008178E0();
    func_00822610();
    return 1;
}
