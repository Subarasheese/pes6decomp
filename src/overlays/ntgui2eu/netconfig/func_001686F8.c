/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_0016B420(void *, void *);

void func_001686F8(s32 arg0, s32 arg1) {
    void *entry;
    void *entry2;
    void *entry3;

    entry = arg0 + 0x840;
    entry3 = entry;
    for (;;) {
        entry2 = M2C_FIELD(entry3, void **, 8);
        if (entry2 != entry) {
            entry3 = entry2;
            if (arg1 == M2C_FIELD(entry2, s32 *, 0x10)) {
                func_0016B420(entry, entry2);
            } else {
                continue;
            }
        }
        break;
    }
}
