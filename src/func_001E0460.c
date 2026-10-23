/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern u8 *D_003E9960;
void func_00153FA0(void *p);
void func_001E0460(void) {
    u8 *p;
    p = D_003E9960;
    if (p != 0) {
        func_00153FA0(p);
        D_003E9960 = 0;
    }
}
