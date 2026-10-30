/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002631D0(void);
M2C_UNK func_00CD3E30();                            /* extern */
M2C_UNK func_00CF5640(s32, s32);                    /* extern */
extern void *D_003E7E1C;
extern s32 D_003EB340;

void func_00CF4A70(s32 arg0) {
    if (func_002631D0() == 3) {
        D_003EB340 = arg0;
        func_00CF5640(M2C_FIELD(D_003E7E1C, s32 *, 0x190), M2C_FIELD(D_003E7E1C, s32 *, 0x2B8));
        func_00CD3E30();
    }
}
