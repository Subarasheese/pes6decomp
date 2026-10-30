/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF730(s32, M2C_UNK);                /* extern */

void func_002EC3F0(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x1940) = arg1;
    func_002DF730(M2C_FIELD(((arg1 * 4) + arg0), s32 *, 0x58), 0);
    func_002DF730(M2C_FIELD((((M2C_FIELD(arg0, s32 *, 0x1940) ^ 1) * 4) + arg0), s32 *, 0x58), 1);
}
