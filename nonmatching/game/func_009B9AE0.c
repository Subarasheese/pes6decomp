/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_00A9C650(void *);
M2C_UNK func_009B30B0(u16, u16);                    /* extern */

void func_009B9AE0(u8 *arg0, void *arg1) {
    func_009B30B0(M2C_FIELD(((*arg0 * 2) + arg1), u16 *, 0x128), func_00A9C650(arg1));
}
