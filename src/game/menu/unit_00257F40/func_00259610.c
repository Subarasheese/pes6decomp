/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern u8 D_0058CF60[];
void func_00153FA0(void *p);
void func_00259610(void) {
    u8 *p;
    p = *(u8 **)D_0058CF60;
    if (p != 0) {
        func_00153FA0(p);
    }
}
