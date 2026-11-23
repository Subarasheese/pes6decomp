/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/client_state.h"
extern void (*D_00C4798C)(void *buffer);
extern void func_001C0290(void *buffer);
void func_00C0B7D0(void *buffer) {
    if (!D_00C4798C) {
        func_001C0290(buffer);
        return;
    }
    D_00C4798C(buffer);
}
