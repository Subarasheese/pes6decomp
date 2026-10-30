/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_008B28E0(u8);                              /* extern */
M2C_UNK func_008C5750(void *, s32);                 /* extern */
M2C_UNK func_008C58D0(void *, M2C_UNK);             /* extern */
M2C_UNK func_008E5200(void *, u8);                  /* extern */

void func_008E5110(void *arg0, u8 arg1) {
    if ((arg0 != NULL) && (M2C_FIELD(arg0, u8 *, 0x1DD) != arg1)) {
        func_008C5750(arg0 + 0x9EC, 0);
        func_008C58D0(arg0 + 0x9EC, 0);
        switch (arg1) {                             /* irregular */
        case 2:
            M2C_FIELD(arg0, u8 *, 0x1E2) = 0U;
            M2C_FIELD(arg0, u8 *, 0x1DF) = (u8) M2C_FIELD(arg0, u8 *, 0x1DE);
            func_008C5750(arg0 + 0x9EC, func_008B28E0(M2C_FIELD(arg0, u8 *, 0x1E2)));
            break;
        case 1:
            if (M2C_FIELD(arg0, u8 *, 0x1DD) == 2) {
                func_008E5200(arg0, M2C_FIELD(arg0, u8 *, 0x1DF));
            }
            if (M2C_FIELD(arg0, u8 *, 0x1DD) == 0) {
                func_008E5200(arg0, M2C_FIELD(arg0, u8 *, 0x1DF));
            }
            func_008C58D0(arg0 + 0x9EC, 1);
            break;
        case 0:
            if (M2C_FIELD(arg0, u8 *, 0x1DD) == 1) {
                M2C_FIELD(arg0, u8 *, 0x1DF) = (u8) M2C_FIELD(arg0, u8 *, 0x1DE);
            }
            break;
        }
        M2C_FIELD(arg0, u8 *, 0x1DD) = arg1;
    }
}
