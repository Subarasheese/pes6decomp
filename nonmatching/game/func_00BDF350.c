/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_00207D80(void *, s32);
extern void func_00209820(void);
extern s32 func_00207D10(void *);
M2C_UNK func_00208610(void *);                      /* extern */
s16 func_009B3480(void *, f32, f32);                /* extern */
s32 func_00B2A9C0();                                /* extern */
M2C_UNK func_00B2ACF0(void **);                     /* extern */
M2C_UNK func_00B35E10(void **, void *, void *);     /* extern */
M2C_UNK func_00B9E5D0(void **);                     /* extern */

void func_00BDF350(void **arg0) {
    s32 temp_s1;
    void *temp_a0;
    void *temp_v0;

    temp_s1 = func_00B2A9C0();
    func_00B2ACF0(arg0);
    func_00209820();
    if (func_00207D10(M2C_FIELD(*arg0, void **, 4)) == 0) {
        if ((temp_s1 != 0) && (func_00207D80(M2C_FIELD(*arg0, void **, 4), temp_s1) != 0)) {
            temp_v0 = *arg0;
            func_00B35E10(arg0, temp_v0 + 0x6C, temp_v0 + 0x70);
            temp_a0 = *arg0;
            M2C_FIELD(*arg0, s16 *, 0x2C) = func_009B3480(temp_a0, M2C_FIELD(temp_a0, f32 *, 0x6C), M2C_FIELD(temp_a0, f32 *, 0x70));
        }
    } else {
        func_00208610(M2C_FIELD(*arg0, void **, 4));
        func_00B9E5D0(arg0);
    }
}
