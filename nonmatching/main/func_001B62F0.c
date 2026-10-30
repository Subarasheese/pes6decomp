/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_005228F0[];

void func_001B62F0(f32 fparg0) {
    if (((void *)D_005228F0) != NULL) {
        M2C_FIELD(((void *)D_005228F0), u8 *, 0x5C) = (u8) ((M2C_FIELD(((void *)D_005228F0), u8 *, 0x5C) & ~0x10) | 0x10);
        M2C_FIELD(((void *)D_005228F0), f32 *, 0x74) = (f32) (160.0f + fparg0);
        M2C_FIELD(((void *)D_005228F0), u8 *, 0x18) = (u8) ((M2C_FIELD(((void *)D_005228F0), u8 *, 0x18) & ~8) | 8);
    }
}
