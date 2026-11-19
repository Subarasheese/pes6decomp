/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001BC2B0(void);
extern void func_001BC350(void);
extern u32 func_00AF5740(void);

void func_00AF5960(void) {
    if (func_00AF5740() != 0) {
        func_001BC350();
        func_001BC2B0();
    }
}
