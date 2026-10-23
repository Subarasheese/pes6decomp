/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void func_001EB170(s32);
extern void func_001EC520(s32);

void func_001E5F20(void *object) {
    if (object != NULL) {
        func_001EB170(M2C_FIELD(object, s32 *, 0x30));
        func_001EC520(M2C_FIELD(object, s32 *, 0x34));
        func_00153FA0(object);
    }
}
