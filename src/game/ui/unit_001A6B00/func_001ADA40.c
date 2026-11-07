/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s8 id;
    u8 pad1[0x12];
} Entry13;

extern Entry13 D_00522050[];

void func_001ADA40(s32 id) {
    u32 i;
    Entry13 *entry;

    for (i = 0, entry = D_00522050; i < 23; i++) {
        if (id == entry->id) {
            entry->id = -1;
        }
        entry++;
    }
}
