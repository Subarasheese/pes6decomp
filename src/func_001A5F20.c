/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    s32 unk0;
    s32 value;
    s32 valid;
    u8 padC[0xC];
} Entry18;

extern char D_003AFD40[];

s32 func_001A5F20(s32 index) {
    Entry18 *entry = &M2C_FIELD(D_003AFD40, Entry18 **, 0)[index];

    if (entry->valid != 0) {
        return entry->value;
    }
    return 0;
}
