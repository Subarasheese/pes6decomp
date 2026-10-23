/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

void func_001F3CA0(void *object) {
    void *next;
    void *child;

    if (object != NULL) {
        child = M2C_FIELD(object, void **, 0x2C);
        if (child != NULL) {
            do {
                next = M2C_FIELD(child, void **, 0x38);
                M2C_FIELD(child, void (**)(void *), 0x44)(child);
                child = next;
            } while (next != NULL);
        }
        M2C_FIELD(object, void **, 0x2C) = NULL;
        M2C_FIELD(object, s32 *, 0x30) = 0;
    }
}
