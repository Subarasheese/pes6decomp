/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001BE610();                            /* extern */
M2C_UNK func_001BE800();                            /* extern */
M2C_UNK func_001BE830(s32);                         /* extern */
M2C_UNK func_001BE850(M2C_UNK);                     /* extern */
M2C_UNK func_001BE8E0(M2C_UNK);                     /* extern */
M2C_UNK func_001BEA20();                            /* extern */

void func_001BE5B0(s32 arg0) {
    func_001BEA20();
    func_001BE850(1);
    func_001BE610();
    func_001BE8E0(0);
    if (arg0 > 0) {
        func_001BE830(arg0);
    }
    func_001BE800();
}
