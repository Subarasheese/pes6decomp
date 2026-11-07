/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_00227980(void);
void func_0094C710(s32);

void func_0095FE30(void) {
    if (func_00227980() == 1) {
        func_0094C710(4);
    } else {
        func_0094C710(1);
    }
}
