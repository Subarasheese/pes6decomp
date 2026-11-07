/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s32 slot;
} SlotRef;

extern char D_0052AE18[];
SlotRef *func_001F4380(s32);

s32 func_001DD3C0(s32 id) {
    SlotRef *ref = func_001F4380(id);
    s32 *entry;

    if (ref != NULL) {
        id = ref->slot;
    }
    entry = (s32 *)(M2C_FIELD(D_0052AE18, u8 **, 0) + id * 16);
    if (entry != NULL && *entry != 0) {
        return 1;
    }
    return 0;
}
