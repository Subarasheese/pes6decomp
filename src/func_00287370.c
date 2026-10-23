/* compiler: mwcc-3.0.3 */
#include "pes6/m2c.h"

extern void func_00209670(void **, void *);

void func_00287370(void *wrapper) {
    u8 state;
    void **owner;
    void *object;

    owner = M2C_FIELD(wrapper, void ***, 4);
    object = *owner;
    state = M2C_FIELD(object, u8 *, 1);
    if (state == 2) {
        func_00209670(owner, object);
    }
}
