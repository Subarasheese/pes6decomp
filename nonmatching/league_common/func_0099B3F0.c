/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229DF0(void);
extern s32 func_00226710(void);
s32 func_0099B3F0(void) {
    s32 temp_v1;
    void *temp_v0;

    temp_v0 = func_00229DF0();
    if (temp_v0 == NULL) {
        goto block_12;
    }
    temp_v1 = func_00226710() & 0xFF;
    switch (temp_v1) {                              /* irregular */
    case 29:
    case 28:
        if ((M2C_FIELD(temp_v0, u8 *, 7) == 0) && (M2C_FIELD(temp_v0, u8 *, 1) == M2C_FIELD(temp_v0, u8 *, 6))) {
            return 1;
        }
block_12:
        return 0;
    case 33:
    case 32:
        if (M2C_FIELD(temp_v0, u8 *, 7) == 1) {
            return 1;
        }
        goto block_12;
    }
}
