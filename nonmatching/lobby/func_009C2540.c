/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_009C3D70(s32, void *);
extern void *D_00A7DD50;

void func_009C2540(s8 arg0) {
    if ((D_00A7DD50 != NULL) && (arg0 < M2C_FIELD(D_00A7DD50, s8 *, 0x11A2))) {
        if (arg0 < 0) {
            return;
        }
        M2C_FIELD(D_00A7DD50, s8 *, 0x11A1) = arg0;
        func_009C3D70((s32) M2C_FIELD(D_00A7DD50, s8 *, 6), D_00A7DD50 + (M2C_FIELD(D_00A7DD50, s8 *, 0x11A1) << 6) + 0x42C);
    }
}
