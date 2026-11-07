/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x2E];
    s16 id;
} Entry1C;

Entry1C *func_00256140(void);

s32 func_00305E70(s32 id) {
    Entry1C *entry = func_00256140();
    s32 i;

    for (i = 0; i < 48; i++) {
        if (entry->id == id) {
            return 1;
        }
        entry = (Entry1C *)((u8 *)entry + 0x1C);
    }
    return 0;
}
