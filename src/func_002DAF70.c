/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 pad[2];
    void *name;
    s32 rest[2];
} Param;

extern volatile s32 D_003B3200;
extern char D_003DC4A8[];
s32 func_00105360(Param *);

s32 func_002DAF70(void) {
    Param p;

    if (D_003B3200 >= 0) {
        return -1;
    }
    p.b = 1;
    p.name = D_003DC4A8;
    p.c = 0;
    D_003B3200 = func_00105360(&p);
    if (D_003B3200 < 0) {
        return -1;
    }
    return D_003B3200;
}
