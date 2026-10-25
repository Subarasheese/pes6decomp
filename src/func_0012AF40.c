/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 count;
    s32 max_count;
    s32 init_count;
    s32 wait_threads;
    u32 attr;
    u32 option;
} SemaParam;

void memclr(void *, s32);
s32 func_00105360(SemaParam *);

s32 func_0012AF40(s32 max_count, s32 init_count, u32 option) {
    SemaParam param;

    memclr(&param, sizeof(param));
    param.max_count = max_count;
    param.init_count = init_count;
    param.option = option;
    return func_00105360(&param);
}
