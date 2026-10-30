/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001586E0();                            /* extern */
extern char D_011E2440[];
extern char D_011E2480[];

void func_00156DD0(void *arg0) {
    M2C_UNK (*temp_v1)(M2C_UNK *, s32);

    func_001586E0();
    temp_v1 = M2C_FIELD(arg0, M2C_UNK (**)(M2C_UNK *, s32), 8);
    if (temp_v1 != NULL) {
        temp_v1(((void *)D_011E2480), (*(s32 *)D_011E2440));
    }
}
