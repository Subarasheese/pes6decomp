/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern int func_003387D0(void *, void *, void *);
extern M2C_UNK func_00313880;
extern M2C_UNK D_003E1500;

s32 func_00312FE0(void *arg0) {
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x3C), s32 *, 8) = 0;
    func_003387D0(arg0, &func_00313880, &D_003E1500);
    return 1;
}
