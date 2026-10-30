/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00213800(void *);
M2C_UNK func_00212B20(void *);                      /* extern */
void *func_002133E0(void *);                        /* extern */
extern void *D_003EB2A0;

void func_00CE02F0(void) {
    void *temp_v0;

    func_00213800(D_003EB2A0);
    temp_v0 = func_002133E0(D_003EB2A0);
    D_003EB2A0 = temp_v0;
    func_00212B20(temp_v0);
}
