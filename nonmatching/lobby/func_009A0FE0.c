/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0082B6B0();                                /* extern */
s32 func_0082B770();                                /* extern */
s32 func_0082B810();                                /* extern */
s32 func_00832280();                                /* extern */

s32 func_009A0FE0(void *arg0) {
    u8 temp_v1;

    if (arg0 == NULL) {
        goto block_20;
    }
    temp_v1 = M2C_FIELD(arg0, u8 *, 0x92);
    switch (temp_v1) {                              /* irregular */
    case 2:
        if (func_00832280() == 1) {
            return 9;
        }
        if (func_0082B6B0() == 1) {
            return 0xA;
        }
block_20:
        return 0;
    case 0:
        if (func_0082B810() == 1) {
            return 0xA;
        }
        goto block_20;
    case 1:
        if (func_0082B770() == 1) {
            return 0xA;
        }
        goto block_20;
    case 3:
        if (func_0082B770() == 1) {
            return 0xA;
        }
        goto block_20;
    }
}
