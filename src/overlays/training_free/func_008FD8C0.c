/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK SD_call(M2C_UNK);                     /* extern */
M2C_UNK func_008FD900(M2C_UNK);                     /* extern */
M2C_UNK func_008FE320();                            /* extern */

s32 func_008FD8C0(void) {
    func_008FD900(-1);
    func_008FE320();
    SD_call(0x8400F802);
    return 0;
}
