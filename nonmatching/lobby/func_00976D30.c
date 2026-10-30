/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009E9200(s32, s32);                    /* extern */
M2C_UNK func_009E9EE0(void *, s32);                 /* extern */

void func_00976D30(s32 arg0) {
    void *temp_s0;

    temp_s0 = arg0 + 0x10;
    func_009E9EE0(temp_s0, arg0);
    func_009E9200(arg0, M2C_FIELD(temp_s0, s32 *, 0x40));
}
