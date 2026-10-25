/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void func_002E2030(void *);
void func_002E21E0(void *);
void func_002E2470(void *);

void func_002E18C0(u8 *obj) {
    s32 mode;

    if (obj[0] == 0) {
        return;
    }
    mode = M2C_FIELD(obj, s32 *, 0x14);
    if (mode == 1) {
        func_002E2030(obj);
    } else if (mode == 3) {
        func_002E21E0(obj);
    } else {
        func_002E2470(obj);
    }
}
