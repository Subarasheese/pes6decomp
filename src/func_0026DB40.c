/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 value;
} Ent;

typedef struct {
    s32 pad0;
    u32 count;
    Ent ents[1];
} Table;

Table *func_002FC230(s32);

void func_0026DB40(s32 id, u32 i, s32 value) {
    Table *table = func_002FC230(id - 100);

    if (i < table->count) {
        table->ents[i].value = value;
    }
}
