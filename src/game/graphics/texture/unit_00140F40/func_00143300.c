/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x38];
    u32 count;
    s32 offset;
} Table;

typedef struct {
    u8 pad0[0xC];
    u8 *flags;
} Owner;

void func_00143300(Table *table, Owner *owner, s32 id, u8 value) {
    s32 *ids = (s32 *)((u8 *)table + table->offset);
    u32 i;

    for (i = 0; i < table->count; i++, ids++) {
        if (id == *ids) {
            owner->flags[i] = value;
            return;
        }
    }
}
