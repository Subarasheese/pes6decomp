/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


M2C_UNK func_00BE4B50(M2C_UNK);                     /* extern */
extern char func_00BE6CA0[];

s32 func_00BE6F30(void *arg0) {
    func_00BE4B50(0x40);
    M2C_FIELD(arg0, s16 *, 8) = 0x40;
    M2C_FIELD(arg0, char **, 0) = func_00BE6CA0;
    return 0;
}
