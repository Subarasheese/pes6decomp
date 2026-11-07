/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 data[24];
} Entry18;

typedef struct {
    u8 pad0[0x20C];
    Entry18 entries[8];
} Table;

Table *func_00223BE0(void);

Entry18 *func_00221230(s32 index) {
    Table *table = func_00223BE0();

    if (index >= 8) {
        return &table->entries[0];
    }
    return &table->entries[index];
}
