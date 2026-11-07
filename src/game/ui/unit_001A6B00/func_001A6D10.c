/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern u8 *D_003E98B4;
void func_00153FA0(void *p);
void func_001A6D10(void) {
    u8 *p;
    p = D_003E98B4;
    if (p != 0) {
        func_00153FA0(p);
        D_003E98B4 = 0;
    }
}
