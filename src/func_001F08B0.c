/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

void *func_001F0160(void);
void *func_001F00C0(void *, s32);

s32 func_001F08B0(s32 key) {
    void *table;
    void *entry;

    table = func_001F0160();
    if (table != NULL) {
        entry = func_001F00C0(table, key);
        if (entry == NULL) {
            return 0;
        }
        return M2C_FIELD(entry, s32 *, 0x8);
    }
    return 0;
}
