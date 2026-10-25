/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x10];
    u64 a;
    u64 b;
} Counter;

extern Counter *D_003FB420[];

void func_0012D4B0(s32 index, s32 enable) {
    Counter *counter = D_003FB420[index];

    if (counter == NULL) {
        return;
    }
    if (enable == 0) {
        return;
    }
    counter->a--;
}
