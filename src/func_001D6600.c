/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001D63E0(void *);
extern void func_001D7F10(s32);

void func_001D6600(void *object) {
    if (object != NULL) {
        func_001D7F10(M2C_FIELD(object, s32 *, 0xC));
        func_001D63E0(object);
    }
}
