/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001BC2B0(void);
extern void func_001BC350(void);
extern u32 func_008CC830(void);

void func_008CEA00(void) {
    if (func_008CC830() != 0) {
        func_001BC350();
        func_001BC2B0();
    }
}
