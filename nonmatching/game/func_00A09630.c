/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_009B30B0(u16, u16);                        /* extern */
extern void *Pes6Ball_Current;

s32 func_00A09630(void *arg0) {
    if (((func_009B30B0(M2C_FIELD(arg0, u16 *, 0x10C), M2C_FIELD(Pes6Ball_Current, u16 *, 0x58)) & 0xFFFF) >= 0x30) && (M2C_FIELD(Pes6Ball_Current, s32 *, 0x50) >= 0x2000)) {
        return 1;
    }
    return 0;
}
