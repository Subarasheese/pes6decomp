/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK SD_call(M2C_UNK);                     /* extern */
extern char func_009CDF30[];

s32 func_009CDF00(M2C_UNK arg0, char **arg1) {
    *arg1 = func_009CDF30;
    SD_call(0x84028400);
    return 0;
}
