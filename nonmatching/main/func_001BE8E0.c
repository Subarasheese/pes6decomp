/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char Pes6NowLoading[];

void func_001BE8E0(s32 arg0) {
    if ((((void *)Pes6NowLoading) != NULL) && (M2C_FIELD(((void *)Pes6NowLoading), s32 *, 0x10) == 0)) {
        if (arg0 != 0) {
            M2C_FIELD(((void *)Pes6NowLoading), s32 *, 0) = arg0;
            return;
        }
        M2C_FIELD(((void *)Pes6NowLoading), s32 *, 0) = 1;
    }
}
