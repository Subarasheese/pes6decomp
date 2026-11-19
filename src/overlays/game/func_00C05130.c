/* compiler: mwcc-3.0.1b210 */
#include "types.h"

typedef struct {
    u8 id;
    u8 pad01[0x3F];
} IdEntry;

extern struct {
    u8 pad00[0x444];
    IdEntry entries[10];
} D_00CB52A0;

s32 func_00C05130(const u8 *entry)
{
    u8 id = *entry;
    s32 i;

    for (i = 0; i < 10; i++) {
        if (D_00CB52A0.entries[i].id == id) {
            return 1;
        }
    }
    return 0;
}
