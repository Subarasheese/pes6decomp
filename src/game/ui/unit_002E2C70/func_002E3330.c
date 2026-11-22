/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001EDA50(void *, void *);

void func_002E3330(void **arg0, void *arg1) {
    if (!((arg0 != (void **)0x0) && (arg1 != 0))) {
        return;
    }
    func_001EDA50(*arg0, arg1);
}
