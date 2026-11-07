/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct Ent {
    s32 id;
    u8 pad4[0xC];
    struct Ent *next;
} Ent;

extern Ent *D_0052B220[];

Ent *func_001F01D0(s32 id) {
    Ent *ent = D_0052B220[0];

    if (ent == NULL) {
        return NULL;
    }
    do {
        if (ent->id == id) {
            return ent;
        }
        ent = ent->next;
    } while (ent != NULL);
    return NULL;
}
