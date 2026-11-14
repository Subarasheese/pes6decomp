/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001DF820(void *, void *);
extern char D_00CB4BE8[];

void func_00C74FA0(void **arg0, s8 *arg1) {
    void *temp_a0;

    if ((arg0 != NULL) && (temp_a0 = *arg0, (temp_a0 != NULL)) && (M2C_FIELD(temp_a0, s32 *, 0) == 0)) {
        if (arg1 == NULL || *arg1 == 0) {
            func_001DF820(M2C_FIELD(temp_a0, void **, 0xC), D_00CB4BE8);
        } else {
            func_001DF820(M2C_FIELD(temp_a0, void **, 0xC), arg1);
        }
    }
}
