/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s16 func_00225680(u8);                              /* extern */
void *func_009614F0();                              /* extern */
M2C_UNK func_00983FF0();                            /* extern */
u8 func_009846F0(M2C_UNK);                          /* extern */
extern void *D_003E77B0;
extern char D_00591BB0[];
extern char D_00591BB2[];

void func_00936410(void) {
    void *temp_v0;

    temp_v0 = func_009614F0();
    if (temp_v0 != NULL) {
        func_00983FF0();
        if (((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x3D) >> 0x3F) == 0) {
            M2C_FIELD(D_003E77B0, u8 *, 0x2C) = func_009846F0(0);
            M2C_FIELD(D_003E77B0, u8 *, 0x2D) = func_009846F0(1);
            (*(s16 *)D_00591BB0) = func_00225680(M2C_FIELD(D_003E77B0, u8 *, 0x2C));
            (*(s16 *)D_00591BB2) = func_00225680(M2C_FIELD(D_003E77B0, u8 *, 0x2D));
        }
    }
}
