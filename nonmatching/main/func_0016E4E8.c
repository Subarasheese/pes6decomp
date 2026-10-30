/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016E950(void);
extern void dtx_destroy_rmt(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_0016E4E8(void *arg0) {
    M2C_FIELD(arg0, s8 *, 2) = 0;
    if (M2C_FIELD(arg0, s8 *, 1) == 1) {
        do {
            func_0016E950();
        } while (M2C_FIELD(arg0, s8 *, 1) == 1);
    }
    dtx_destroy_rmt(M2C_FIELD(arg0, void **, 4));
    func_001C48E8(arg0, 0, 0x44);
}
