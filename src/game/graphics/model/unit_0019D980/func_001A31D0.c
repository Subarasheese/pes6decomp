/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0051FF68[];
extern char D_00520376[];

s32 func_001A31D0(void) {
    if (((*(s16 *)D_00520376) == 1) && ((*(s32 *)D_0051FF68) == 0)) {
        (*(s16 *)D_00520376) = 2;
    }
    return (*(s16 *)D_00520376) == 2;
}
