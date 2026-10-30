/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_002DF730(s32, M2C_UNK);                /* extern */

void func_009B6D50(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        func_002DF730(M2C_FIELD(arg0, s32 *, 0x2AC), 0);
        func_002DF730(M2C_FIELD(arg0, s32 *, 0x2CC), 0);
        return;
    }
    func_002DF730(M2C_FIELD(arg0, s32 *, 0x2AC), 2);
    func_002DF730(M2C_FIELD(arg0, s32 *, 0x2CC), 2);
}
