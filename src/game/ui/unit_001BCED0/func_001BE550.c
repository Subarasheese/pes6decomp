/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK Pes6NowLoading_IsShown();                            /* extern */
M2C_UNK func_001BE830(s32);                         /* extern */
M2C_UNK Pes6NowLoading_Request(M2C_UNK);                     /* extern */
M2C_UNK func_001BE8E0(s32);                         /* extern */
M2C_UNK func_001BEA20();                            /* extern */

void func_001BE550(s32 arg0, s32 arg1) {
    func_001BEA20();
    Pes6NowLoading_Request(1);
    func_001BE8E0(arg1);
    if (arg0 > 0) {
        func_001BE830(arg0);
    }
    Pes6NowLoading_IsShown();
}
