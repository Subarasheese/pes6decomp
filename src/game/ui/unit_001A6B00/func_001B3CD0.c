/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"
extern u8 *D_003E98F4;
void func_001CDAD0(void *p);
void func_001B3E10(s32 i);
void func_00153FA0(void *p);
void func_001B3CD0(u8 *arg0) {
    u8 *p;
    s32 i;
    p = *(u8 **)(arg0 + 0x44);
    func_001CDAD0(p + 0x20);
    D_003E98F4 = p;
    for (i = 0; i < 9; i++) {
        func_001B3E10(i);
    }
    if (D_003E98F4 != 0) {
        func_00153FA0(D_003E98F4);
        D_003E98F4 = 0;
    }
}
