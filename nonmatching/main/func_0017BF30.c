/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_00140FE0(s32, s32);
extern void func_00153FA0(s32);
void func_0017BF30(void *arg0, s32 arg1) {
    s32 *p;

    p = (s32 *)(M2C_FIELD(arg0, char **, 0x20) + (arg1 * 0x14));
    if (p[0] != 0) {
        func_00140FE0(p[2], p[0]);
        func_00153FA0(p[0]);
        p[0] = 0;
    }
}
