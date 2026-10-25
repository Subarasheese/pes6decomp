/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u8 D_00591BC6[];
void **func_002CD140(u8);
void func_001F08B0(void *);

void func_0020CB60(void) {
    void **p = func_002CD140(D_00591BC6[0]);

    func_001F08B0(p != NULL ? *p : (void *)0x3A0000);
}
