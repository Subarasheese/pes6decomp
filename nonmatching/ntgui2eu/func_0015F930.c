/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00136FD8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_00154018(M2C_UNK *);                       /* extern */
extern char D_005FD008[];
extern char D_005FD020[];

void func_0015F930(void) {
    if (func_00154018(((void *)D_005FD008)) != 0) {
        if (func_00154018(((void *)D_005FD020)) != 0) {
            func_00136FD8(3, 0);
            return;
        }
        func_00136FD8(3, 0);
        return;
    }
    func_00136FD8(3, 0);
}
