/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_00140FE0(void *, void *);
extern void func_00153FA0(void *, void *);
void func_0017C030(void *arg0, s32 arg1) {
    u8 *p;

    p = M2C_FIELD(arg0, u8 **, 0x1C) + (arg1 * 0x14);
    if (M2C_FIELD(p, void **, 8) != NULL) {
        func_00140FE0(M2C_FIELD(p, void **, 4), M2C_FIELD(p, void **, 8));
        func_00153FA0(M2C_FIELD(p, void **, 8), M2C_FIELD(p, void **, 8));
        M2C_FIELD(p, void **, 8) = NULL;
    }
}
