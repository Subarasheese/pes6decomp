/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001BC2B0(void);
extern void func_001BC350(void);
extern u32 func_009A8D80(void);

void func_009B2720(void) {
    if (func_009A8D80() != 0) {
        func_001BC350();
        func_001BC2B0();
    }
}
