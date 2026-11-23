/* compiler: mwcc-3.0.1b210 */
#include "pes6/entry_wait.h"

typedef struct {
    u8 reserved[0x24];
    struct Counter counter;
} EntryWaitPage;
extern EntryWaitPage *D_003EA540[2];
extern s32 D_003EA53C;

s32 func_00917EE0(void) {
    return entryWaitReady(&D_003EA540[D_003EA53C]->counter);
}
