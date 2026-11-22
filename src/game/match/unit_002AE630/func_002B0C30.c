/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_008B1441[];

s32 func_002B0C30(s32 arg0, char *arg1) {
    *(((char *)D_008B1441) + arg0) = M2C_FIELD(arg1, u8 *, 8);
    return 0;
}
