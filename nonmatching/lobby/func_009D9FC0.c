/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002DB8A0(void *);
s32 func_0081EAE0();                                /* extern */
s32 func_0081EB20();                                /* extern */
s32 func_0081EBC0(M2C_UNK);                         /* extern */
extern void *D_00A7DEB0;

s32 func_009D9FC0(void) {
    if (D_00A7DEB0 != NULL) {
        if (M2C_FIELD(D_00A7DEB0, u8 *, 0x296) == 0) {
            if (M2C_FIELD(D_00A7DEB0, s32 *, 0x290) != 0) {
                if (func_002DB8A0(M2C_FIELD(D_00A7DEB0, void **, 0xC)) == 0) {
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
    return 0;
}
