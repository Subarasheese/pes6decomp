/* compiler: mwcc-3.0.1b210 */
#include "pes6/menu_commands.h"
typedef struct {
    int first, second;
} Pair;
typedef union {
    MenuCommandEntry entry[10];
    Pair pair[15];
} Table;

extern const Table D_00B805B0;
extern int func_00B447A0(void);

void func_00B42C80(void) {
    Table table;
    const Pair *source = D_00B805B0.pair;
    Pair *destination = table.pair;
    int remaining = 15;
    unsigned int i;

    do {
        destination->first = source->first;
        destination->second = source->second;
        source++;
        destination++;
    } while (--remaining > 0);
    if (!func_00B447A0()) {
        return;
    }

    for (i = 0; i < 10; i++) {
        func_001BC3D0(0, table.entry[i].id, table.entry[i].flags, table.entry[i].callback);
    }
}
