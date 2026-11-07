/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad[0x110];
    s32 n;
} T;

void func_00CD7A00(s32);

s32 func_00CE3950(s32 arg0, T *arg1) {
    s32 t = arg1->n + 1;

    arg1->n = t;
    arg1->n = t % 2;
    func_00CD7A00(1);
    return 0;
}
