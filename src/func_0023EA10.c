/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_001B6460(s32);
void func_001B6670(void);
s32 func_8B2E80(void);
void func_001B6780(s32);

void func_0023EA10(s32 a) {
    if (a == 0) {
        func_001B6460(0);
    } else if (a == 1) {
        func_001B6460(1);
    } else if (a == 2) {
        func_001B6670();
    } else {
        func_001B6780(func_8B2E80());
    }
}
