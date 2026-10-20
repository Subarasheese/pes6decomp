/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern char D_0052B0C8[];
extern char D_0052B0D0[];
extern char D_0052B0D8[];
extern char D_0052B0E0[];
extern char D_0052B0E8[];
extern char D_0052B0F0[];

void func_001E5EC0(void *arg0) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, s64 *, 0) = (s64) (*(s64 *)D_0052B0C8);
        M2C_FIELD(arg0, s64 *, 8) = (s64) (*(s64 *)D_0052B0D0);
        M2C_FIELD(arg0, s64 *, 0x10) = (s64) (*(s64 *)D_0052B0D8);
        M2C_FIELD(arg0, s64 *, 0x18) = (s64) (*(s64 *)D_0052B0E0);
        M2C_FIELD(arg0, s64 *, 0x20) = (s64) (*(s64 *)D_0052B0E8);
        M2C_FIELD(arg0, s64 *, 0x28) = (s64) (*(s64 *)D_0052B0F0);
        M2C_FIELD(arg0, u8 *, 0x3C) = 0xFF;
    }
}
