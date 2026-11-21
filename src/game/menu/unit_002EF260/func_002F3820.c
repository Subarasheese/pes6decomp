/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void *func_002EF4D0(void *, void *);

int func_002F3820(int arg0, int arg1) {
    void *pvVar1;

    if ((arg0 == 0) || (arg1 == 0)) {
        pvVar1 = 0;
    } else {
        pvVar1 = func_002EF4D0((void *)(arg0 + 0xc), (void *)arg1);
    }
    return (int)pvVar1;
}
