/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct S { s32 pad; void *p; } S;
M2C_UNK func_00207390(void *, M2C_UNK);
M2C_UNK func_00209A00(void *, s32, s32);

void func_00979210(S *arg0, s32 arg1) {
    void *temp_v1;

    func_00209A00(arg0->p, arg1, 0);
    temp_v1 = arg0->p;
    M2C_FIELD(temp_v1, f32 *, 0x38) = (f32) (M2C_FIELD(M2C_FIELD(temp_v1, void **, 4), u8 *, 2) * 2);
    func_00207390(arg0->p, 4);
}
