/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001D7F10(void *);

void func_00B8FFA0(void **arg0) {
    if (!((arg0 != (void **)0x0) && (*arg0 != 0))) {
        return;
    }
    func_001D7F10(*arg0);
    *arg0 = 0;
}
