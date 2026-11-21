/* compiler: ee-gcc-2.96-nosib */
#include "pes6/m2c.h"

extern s32 func_00BB8398(void *);
extern s32 func_00BBA6E0(s32);

void func_00BDD058(void *arg0) {
    func_00BBA6E0(func_00BB8398(*M2C_FIELD(arg0, void ***, 8)));
}
