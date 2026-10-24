/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct Watch {
    u8 pad0[0xC];
    s32 id;
    u8 pad10[0x4];
    struct Watch *next;
} Watch;

extern Watch D_005F1D54;

s32 func_00338530(s32 id) {
    Watch *node;

    for (node = &D_005F1D54; node != NULL; node = node->next) {
        if (node->id == id) {
            return 1;
        }
    }
    return 0;
}
