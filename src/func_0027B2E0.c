/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001AAF40(void *, M2C_UNK);
extern void func_001AB650();
extern void func_001AC550(void *);

void func_0027B2E0(void *object) {
    s32 state;

    func_001AB650();
    func_001AC550(object);
    state = M2C_FIELD(object, s32 *, 0xC);
    switch (state) {                              /* irregular */
    case 3:
        func_001AAF40(object, 1);
        return;
    default:
        func_001AAF40(object, 1);
        /* fallthrough */
    case 2:
        return;
    }
}
