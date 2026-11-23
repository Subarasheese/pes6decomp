/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"


extern char Pes6Enter_Flags[];

s32 func_00900470(void) {
    (*(s32 *)Pes6Enter_Flags) &= ~0x1000;
    return 1;
}
