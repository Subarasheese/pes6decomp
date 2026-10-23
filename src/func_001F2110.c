/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_001F2110(void *object) {
    s32 context;
    void *child;

    context = M2C_FIELD(M2C_FIELD(object, void **, 0x1C), s32 *, 0x1C);
    if (M2C_FIELD(object, u8 *, 2) != 0) {
        child = M2C_FIELD(object, void **, 0x2C);
        if (child != NULL) {
            do {
                M2C_FIELD(M2C_FIELD(child, void **, 0x1C), s32 *, 0x1C) = context;
                M2C_FIELD(child, void (**)(void *), 0x40)(child);
                child = M2C_FIELD(child, void **, 0x38);
            } while (child != NULL);
        }
    }
}
