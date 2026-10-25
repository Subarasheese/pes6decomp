/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 data[54];
} Entry36;

typedef struct {
    u8 pad0[0x5C];
    Entry36 entries[8];
} Table;

Table *func_00223BE0(void);

Entry36 *func_00221280(s32 index) {
    Table *table = func_00223BE0();

    if (table == NULL) {
        return NULL;
    }
    if (index >= 8) {
        return &table->entries[0];
    }
    return &table->entries[index];
}
