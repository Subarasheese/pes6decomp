/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_002DB2C0(void *, s32, s32, s32);
extern s32 func_002DB830(void *);
void SD_call(s32);
extern void *D_003EAD14;

void func_009B24F0(s32 arg0, s32 arg1) {
    void *p;
    s32 v;

    p = D_003EAD14;
    v = func_002DB830(M2C_FIELD(p, void **, 0xB0));
    if (v != func_002DB2C0(M2C_FIELD(p, void **, 0xB0), v, arg0, arg1)) {
        SD_call(0x8400F802);
    }
}
