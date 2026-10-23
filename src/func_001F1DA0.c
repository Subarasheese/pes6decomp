/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_001D7F10(s32);
extern void func_001F4080(void *);

void func_001F1DA0(void *object) {
    void *next;
    void *child;

    if ((object != NULL) && (M2C_FIELD(object, u8 *, 0) == 0xF)) {
        child = M2C_FIELD(object, void **, 0x2C);
        if (child != NULL) {
            do {
                next = M2C_FIELD(child, void **, 0x38);
                M2C_FIELD(child, void (**)(void *), 0x44)(child);
                child = next;
            } while (next != NULL);
        }
        func_001D7F10(M2C_FIELD(object, s32 *, 0x48));
        func_001F4080(object);
    }
}
