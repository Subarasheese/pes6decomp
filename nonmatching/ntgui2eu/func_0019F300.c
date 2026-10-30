/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A4728();                            /* extern */
M2C_UNK func_001A4778();                            /* extern */

void *func_0019F300(void *arg0) {
    void *temp_s1;

    func_001A4728();
    temp_s1 = M2C_FIELD(arg0, void **, 0xC);
    if (temp_s1 != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = 1;
        M2C_FIELD(arg0, void **, 0xC) = (void *) M2C_FIELD(temp_s1, void **, 0x3C);
    } else {
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    func_001A4778();
    return temp_s1;
}
