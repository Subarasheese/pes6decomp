/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00309420(void);
extern u8 func_002281F0(void);
extern u8 func_00226E70(void);
extern char D_00591C09[];

u8 func_0022C450(s32 arg0) {
    if ((func_00309420() != 0) == 1) {
        return 0U;
    }
    if ((*(u8 *)D_00591C09) != 4) {
        return 0U;
    }
    if (func_00226E70() == 0) {
        return 0U;
    }
    return func_002281F0();
}
