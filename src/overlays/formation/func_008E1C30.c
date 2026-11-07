/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern void func_001EF900(void *, s8);
void func_008E1C30(s8 *arg0, u8 arg1, s8 arg2) {
    void *temp_a0;
    temp_a0 = ((void **)(arg0 + 0x84))[arg1];
    if (temp_a0 != NULL) {
        func_001EF900(temp_a0, arg2);
    }
}
