/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0052B0F0[];

void func_001E5E20(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s64 *, 0x28) = (s64) (*(s64 *)D_0052B0F0);
        M2C_FIELD(arg0, u8 *, 0x3C) = (u8) (M2C_FIELD(arg0, u8 *, 0x3C) | 0x20);
    }
}
