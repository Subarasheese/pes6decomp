/* compiler: mwcc-3.0.1b210 */
#include "types.h"

void func_00931110(void *arg0, void *arg1) {
    if (!((arg0 != 0) && (arg1 != 0))) {
        return;
    }
    *(u8 *)arg1 = *(u8 *)arg0;
    *(u8 *)((int)arg1 + 1) = *(u8 *)((int)arg0 + 1);
    *(u8 *)((int)arg1 + 2) = *(u8 *)((int)arg0 + 2);
    *(u8 *)((int)arg1 + 3) = 0;
}
