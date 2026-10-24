/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x38];
    u32 count;
    s32 offset;
} Table;

typedef struct {
    u8 pad0[0x10];
    s32 *a;
    s32 *b;
} Owner;

void func_00143220(Table *table, Owner *owner, s32 id, s32 value) {
    s32 *ids = (s32 *)((u8 *)table + table->offset);
    u32 i;

    for (i = 0; i < table->count; i++, ids++) {
        if (id == *ids) {
            owner->a[i] = value;
            owner->b[i] = value;
            return;
        }
    }
}
