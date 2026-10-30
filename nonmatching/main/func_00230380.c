/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_00229460(void);
extern u8 func_002272B0(void);
extern int func_00309420(void);
extern char D_00591C09[];

s32 func_00230380(void) {
    void *temp_s0;

    temp_s0 = func_00229460();
    if ((func_00309420() != 0) == 1) {
        goto block_7;
    }
    if ((*(u8 *)D_00591C09) != 1) {
        goto block_7;
    }
    if ((func_002272B0() == 1) && (M2C_FIELD(temp_s0, u8 *, 0x4ABF) == 1)) {
        return 1;
    }
block_7:
    return 0;
}
