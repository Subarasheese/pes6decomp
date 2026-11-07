/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
extern u8 *D_003E98DC;
void func_00153FA0(void *p);
void func_001B0330(void) {
    u8 *p;
    u8 *next;
    p = D_003E98DC;
    while (p != 0) {
        next = *(u8 **)p;
        if (*(u32 *)(p + 8) != 0) {
            func_00153FA0((void *)*(u32 *)(p + 8));
        }
        func_00153FA0((void *)p);
        p = next;
    }
    D_003E98DC = 0;
}
