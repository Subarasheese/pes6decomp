/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CCBB40[];
extern char D_00CCBB44[];

void func_00C6C9D0(void) {
    if ((*(s32 *)D_00CCBB44) != 0) {
        M2C_FIELD(((void *)D_00CCBB40), M2C_UNK (**)(M2C_UNK *), 4)(((void *)D_00CCBB40));
    }
}
