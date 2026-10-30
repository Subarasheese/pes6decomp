/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001BC2B0(void);
extern void func_001BC350(void);
extern u32 func_00AE3240(void);

void func_00AE9D80(void) {
    if (func_00AE3240() != 0) {
        func_001BC350();
        func_001BC2B0();
    }
}
