/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_008261E0();                            /* extern */
M2C_UNK func_00D15D80(M2C_UNK, M2C_UNK *);          /* extern */
extern char D_00887510[];

s32 func_00826180(void) {
    func_00D15D80(3, ((void *)D_00887510));
    func_008261E0();
    return 1;
}
