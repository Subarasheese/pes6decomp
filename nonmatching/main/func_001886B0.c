/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_0051FF47[];
extern void *D_00520080;

void func_001886B0(u8 *arg0, void *arg1) {
    *arg0 = M2C_FIELD(D_00520080, u8 *, 9);
    if ((*(u8 *)D_0051FF47) == 0) {
        M2C_FIELD(arg1, u8 *, 0) = 0U;
        M2C_FIELD(arg1, u8 *, 1) = 0U;
        M2C_FIELD(arg1, u8 *, 2) = 0U;
        return;
    }
    M2C_FIELD(arg1, u8 *, 0) = (u8) M2C_FIELD(D_00520080, u8 *, 0x2E);
    M2C_FIELD(arg1, u8 *, 1) = (u8) M2C_FIELD(D_00520080, u8 *, 0x2F);
    M2C_FIELD(arg1, u8 *, 2) = (u8) M2C_FIELD(D_00520080, u8 *, 0x30);
}
