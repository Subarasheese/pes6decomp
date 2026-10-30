/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00209820(void);
extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
M2C_UNK func_00B2ACF0();                            /* extern */
M2C_UNK func_00B35E10(void *, void *, void *);      /* extern */
M2C_UNK func_00BD3BA0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00BD4040(void *, M2C_UNK);             /* extern */

void func_00BDFDF0(void *arg0) {
    void *temp_v0;

    func_00B2ACF0();
    func_00209820();
    if (func_00207D10(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4)) != 0) {
        func_00208610(M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4));
        func_00BD4040(arg0, 3);
        func_00BD3BA0(arg0, 5, 1);
        M2C_FIELD(M2C_FIELD(arg0, void **, 4), s16 *, 6) = 0x542;
        temp_v0 = M2C_FIELD(arg0, void **, 0);
        func_00B35E10(arg0, temp_v0 + 0x6C, temp_v0 + 0x70);
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s16 *, 0x18) = 0x90;
    }
}
