/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK SD_call(M2C_UNK);                     /* extern */

void func_00C99A40(s32 arg0) {
    if ((arg0 % 24) == 6) {
        SD_call(0x84008401);
        return;
    }
    SD_call(0x84028400);
}
