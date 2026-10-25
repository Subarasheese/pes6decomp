/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct Watch {
    u8 pad0[0xC];
    s32 id;
    u8 pad10[0x4];
    struct Watch *next;
    u8 pad18[0x3];
    u8 flag1B;
    u8 pad1C[0x4];
    s32 value;
} Watch;

extern Watch D_005F1D54;

s32 func_003386D0(s32 id, s32 value) {
    Watch *node;

    for (node = &D_005F1D54; node != NULL; node = node->next) {
        if (node->id == id) {
            node->flag1B = 1;
            node->value = value + 1;
            return 1;
        }
    }
    return 0;
}
