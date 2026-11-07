/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Ref {
    u8 pad0[0x4];
    struct Ref *next;
    s32 offset;
    u8 padC[0x2];
    u8 dirty;
} Ref;

extern u8 D_003FC880[];
extern Ref *D_003FC850[];

void func_00139150(u8 *ptr) {
    s32 offset;
    Ref *ref;

    if (ptr == NULL) {
        return;
    }
    offset = ptr - D_003FC880;
    for (ref = D_003FC850[0]; ref != NULL; ref = ref->next) {
        if (ref->offset == offset) {
            ref->dirty = 1;
            return;
        }
    }
}
