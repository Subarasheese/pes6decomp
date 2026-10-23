/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00153FA0(s32);
extern void func_0017B070();
extern void func_0017C3B0(void *);

void func_0027B880(void *object) {
    s32 allocation;

    func_0017B070();
    allocation = M2C_FIELD(object, s32 *, 0xF0);
    if (allocation != 0) {
        func_00153FA0(allocation);
    }
    func_0017C3B0(object);
}
