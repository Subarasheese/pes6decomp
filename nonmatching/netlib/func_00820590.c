/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_008874A4[];
extern char D_008874A5[];
extern char D_008874A6[];
extern char D_008874A7[];

s32 func_00820590(void *arg0) {
    if (arg0 == NULL) {
        return 0;
    }
    M2C_FIELD(arg0, u8 *, 0) = (u8) (*(u8 *)D_008874A4);
    M2C_FIELD(arg0, u8 *, 1) = (u8) (*(u8 *)D_008874A5);
    M2C_FIELD(arg0, u8 *, 2) = (u8) (*(u8 *)D_008874A6);
    M2C_FIELD(arg0, u8 *, 3) = (u8) (*(u8 *)D_008874A7);
    return 1;
}
