/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_0014A960(char *, s32);
extern s32 func_001CDAA0();
extern void func_00251B50(s32);
extern char func_00253750[];

void func_0026ED70(void) {
    if (func_001CDAA0() == 0) {
        func_00251B50(0x3C);
    } else if (func_001CDAA0() == 1) {
        func_00251B50(0x32);
    } else {
        func_00251B50(0x3C);
    }
    func_0014A960(func_00253750, 0);
}
