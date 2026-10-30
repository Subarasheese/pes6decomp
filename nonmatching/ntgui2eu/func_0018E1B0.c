/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_011FC830[];

void func_0018E1B0(s32 arg0, s32 arg1) {
    M2C_FIELD(M2C_FIELD((((void *)D_011FC830) + (arg0 * 0x28)), void **, 0x10), s32 *, 0x74) = arg1;
}
