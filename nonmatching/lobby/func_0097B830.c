/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_0097AE50(M2C_UNK);                     /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_009E0380(M2C_UNK);                     /* extern */
M2C_UNK func_009E0430(u8, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_009E1490(M2C_UNK);                     /* extern */
M2C_UNK func_009E1520(M2C_UNK);                     /* extern */
extern void *D_00A68D90;
extern M2C_UNK func_0097AF40;

void func_0097B830(void) {
    void *temp_v0;

    if (D_00A68D90 == NULL) {
        temp_v0 = func_0099C7E0(0x44);
        D_00A68D90 = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(temp_v0, s8 *, 0x3B) = 0;
            M2C_FIELD(D_00A68D90, s32 *, 0x34) = 1;
            M2C_FIELD(D_00A68D90, s8 *, 0x3A) = 1;
            func_0097AE50(1);
            func_009E0430(M2C_FIELD(D_00A68D90, u8 *, 0x3C), 0x32, &func_0097AF40, 0);
            func_009E0380(0);
            func_009E1520(1);
            func_009E1490(0);
        }
    }
}
