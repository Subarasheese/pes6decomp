/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_009D6110(void);
M2C_UNK func_00965970();                            /* extern */
s32 func_00965990();                                /* extern */
s32 func_009D36C0();                                /* extern */
M2C_UNK func_009D4410();                            /* extern */
extern u8 *D_00A7DE90;

s32 func_009D64D0(void) {
    if (D_00A7DE90 == NULL) {
        return 1;
    }
    if (func_00965990() != 0) {
        func_00965970();
        func_009D6110();
    }
    func_009D4410();
    if (func_009D36C0() == 0) {
        return 0;
    }
    if (*D_00A7DE90 == 0) {
        return 1;
    }
    return 2;
}
