/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);

void func_001ED5B0(void *object) {
    if (object != NULL) {
        func_00153FA0(M2C_FIELD(object, void **, 0x20));
        func_00153FA0(object);
    }
}
