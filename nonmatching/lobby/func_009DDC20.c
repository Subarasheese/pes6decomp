/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


u8 func_0093DED0();                                 /* extern */
void *func_0099C7E0(M2C_UNK);                       /* extern */
M2C_UNK func_009DA8E0(M2C_UNK);                     /* extern */
M2C_UNK func_009DAF30(u8, M2C_UNK *);               /* extern */
extern void *D_00A7DEC0;
extern M2C_UNK func_009DD7D0;

void func_009DDC20(void) {
    void *temp_v0;

    if (D_00A7DEC0 == NULL) {
        temp_v0 = func_0099C7E0(8);
        D_00A7DEC0 = temp_v0;
        if (temp_v0 != NULL) {
            M2C_FIELD(D_00A7DEC0, u8 *, 1) = func_0093DED0();
            func_009DAF30(M2C_FIELD(D_00A7DEC0, u8 *, 1), &func_009DD7D0);
            func_009DA8E0(0);
        }
    }
}
