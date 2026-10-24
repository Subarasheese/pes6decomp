/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    s8 id;
    u8 pad1[0x3];
} Entry4;

extern Entry4 D_00522210[];

void func_001ADDA0(s32 id) {
    u32 i;
    Entry4 *entry;

    for (i = 0, entry = D_00522210; i < 23; i++) {
        if (id == entry->id) {
            entry->id = -1;
        }
        entry++;
    }
}
