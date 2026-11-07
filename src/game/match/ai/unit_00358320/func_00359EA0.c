/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

s32 func_00338AD0(s32, void *, s32, void *);
void func_00338AA0(void *, void *);
void func_00338750(void *, s32);
s32 func_00359B10(void);
s32 func_00359E00(void *);
extern u8 D_003E6498[];

s32 func_00359EA0(void *arg0) {
    void *h;

    h = (void *)func_00338AD0(0x1F, func_00359B10, 3, D_003E6498);
    func_00338AA0(h, arg0);
    func_00338750(h, 0xA);
    h = (void *)func_00338AD0(0x39, func_00359E00, 3, D_003E6498);
    func_00338AA0(h, arg0);
    func_00338750(h, 0xA);
    return 1;
}
