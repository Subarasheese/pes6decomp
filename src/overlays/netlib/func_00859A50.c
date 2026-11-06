/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern char D_008B2310[];

s32 func_00859A50(s32 arg0) {
    (*(s32 *)D_008B2310) = arg0 & 7;
    return 0;
}
