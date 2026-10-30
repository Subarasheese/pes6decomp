/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C4730(s8 *, s8 *, s32);             /* extern */
s32 func_001C80F0(s8 *);                            /* extern */
extern char D_0050E780[];

void func_0016AF68(s8 *arg0) {
    s32 temp_a2;

    temp_a2 = func_001C80F0(((void *)D_0050E780)) + 1;
    if ((*(s8 *)D_0050E780) == 0) {
        *arg0 = 0;
        return;
    }
    func_001C4730(arg0, ((void *)D_0050E780), temp_a2);
}
