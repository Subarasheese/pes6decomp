/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u32 count;
    s32 *items;
} Table;

typedef struct {
    u8 pad0[4];
    Table *table;
} Inner;

typedef struct {
    u8 pad0[0xC];
    Inner *inner;
} Obj;

s32 func_001F7830(Obj *obj, s32 i) {
    Table *table;

    if (obj == NULL) {
        return 0;
    }
    table = obj->inner->table;
    if (i >= 0 && (u32)i < table->count) {
        return table->items[i];
    }
    return 0;
}
