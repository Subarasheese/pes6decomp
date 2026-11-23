/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
extern s32 func_009D45B0(void);
extern s8 *D_00A7DE90;
void func_009D63E0(void) {
    func_009D45B0();
    if (D_00A7DE90 != 0) {
        *D_00A7DE90 = 1;
    }
}
