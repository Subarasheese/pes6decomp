/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F39A0(void *);
extern s32 func_009858E0(void);
M2C_UNK func_00817930();                            /* extern */
extern void *D_00A7D718;

void func_009858A0(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        func_002F39A0(D_00A7D718);
        func_00817930();
    }
    func_009858E0();
}
