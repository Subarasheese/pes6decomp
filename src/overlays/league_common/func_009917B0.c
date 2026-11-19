/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001BC2B0(void);
extern void func_001BC350(void);
extern u32 func_00991950(void);

void func_009917B0(void) {
    if (func_00991950() != 0) {
        func_001BC350();
        func_001BC2B0();
    }
}
