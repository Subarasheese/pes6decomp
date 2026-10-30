/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern M2C_UNK *D_0092F0A8;
extern void *D_0092F0AC;
extern M2C_UNK func_008FFE30;

s32 func_008FFA80(void) {
    void *temp_s0;

    temp_s0 = M2C_FIELD(D_0092F0AC, void **, 8);
    func_00153FA0(D_0092F0AC);
    D_0092F0AC = temp_s0;
    if (temp_s0 == NULL) {
        D_0092F0A8 = NULL;
    } else {
        D_0092F0A8 = &func_008FFE30;
    }
    return 1;
}
