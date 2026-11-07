/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"
typedef struct { char pad[0x53C]; s32 f; } S;
void func_00189778(s32);
void func_00166470(S *arg0) {
    func_00189778((s32)arg0 + 0x540);
    arg0->f = 1;
}
