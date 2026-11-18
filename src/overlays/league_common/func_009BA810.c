/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001BC2B0(void);
extern void func_001BC350(void);
extern u32 func_009BC8E0(void);

void func_009BA810(void) {
    if (func_009BC8E0() != 0) {
        func_001BC350();
        func_001BC2B0();
    }
}
