/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001B5440(void);
extern void func_001B5450(void);
M2C_UNK func_001B6460(s32);                         /* extern */

s32 func_0099C5E0(s32 arg0) {
    if (arg0 == 1) {
        func_001B5440();
    } else {
        func_001B5450();
    }
    func_001B6460(arg0);
    return 1;
}
