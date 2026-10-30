/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00264790(void *, u8);
s32 func_00CDCCB0();                                /* extern */
extern void *D_003E7E1C;
extern M2C_UNK func_00CDE4F0;

void func_00CE4330(void *arg0) {
    s32 temp_v0;
    void *temp_s0;

    temp_s0 = D_003E7E1C;
    M2C_FIELD(temp_s0, s32 *, 0x14C) = 0;
    temp_v0 = func_00CDCCB0();
    switch (temp_v0) {                              /* irregular */
    case 2:
        break;
    case 1:
        M2C_FIELD(temp_s0, M2C_UNK **, 0x188) = NULL;
        break;
    case 0:
        M2C_FIELD(temp_s0, M2C_UNK **, 0x188) = &func_00CDE4F0;
        break;
    }
    func_00264790(arg0, 0U);
}
