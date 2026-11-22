/* compiler: mwcc-3.0.1b210 */
#include "types.h"

void func_008E9A70(void *arg0, void *arg1) {
    if (!((arg0 != 0) && (arg1 != 0))) {
        return;
    }
    *(u8 *)((int)arg1 + 0x7cc) = *(u8 *)((int)arg0 + 1);
    *(u8 *)((int)arg1 + 0x7cd) = *(u8 *)((int)arg0 + 2);
    *(u8 *)((int)arg1 + 0x7ce) = *(u8 *)((int)arg0 + 3);
}
