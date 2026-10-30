/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00181D68();                            /* extern */
M2C_UNK func_001821C0(void *);                      /* extern */
M2C_UNK func_001823D8(void *);                      /* extern */
M2C_UNK func_00183058(void *);                      /* extern */
M2C_UNK func_00183178(void *);                      /* extern */
M2C_UNK func_00183A38(void *);                      /* extern */

void func_00181D08(void *arg0) {
    func_00181D68();
    func_00183A38(arg0);
    if (M2C_FIELD(arg0, s32 *, 0x5E90) != 0) {
        func_001823D8(arg0);
        func_00183178(arg0);
        return;
    }
    func_001821C0(arg0);
    func_00183058(arg0);
}
