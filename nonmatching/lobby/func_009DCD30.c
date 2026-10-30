/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB8A0(void *);
s32 func_0081EAE0();                                /* extern */
s32 func_0081EB20();                                /* extern */
s32 func_0081EBC0(M2C_UNK);                         /* extern */
extern void *D_00A7DEB8;

s32 func_009DCD30(void) {
    if (D_00A7DEB8 != NULL) {
        if (M2C_FIELD(D_00A7DEB8, s32 *, 0x64C) != 0) {
            if (func_002DB8A0(M2C_FIELD(D_00A7DEB8, void **, 8)) == 0) {
                if (func_0081EBC0(0x10) == 0) {
                    if (func_0081EBC0(0x40) != 0) {
                        return 0;
                    }
                    if (func_0081EB20() & 0xFF) {
                        return 0;
                    }
                    return (func_0081EAE0() & 0xFF) == 0;
                }
                return 0;
            }
            return 0;
        }
        return 0;
    }
    return 0;
}
