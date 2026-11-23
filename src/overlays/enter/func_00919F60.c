/* compiler: mwcc-3.0.1b210 */
#include "pes6/entry_wait.h"

typedef struct {
    u8 reserved[0x18];
    struct Counter counter;
} EntryWaitPage;
extern EntryWaitPage *D_003EA54C[2];
extern s32 D_003EA548;

s32 func_00919F60(void) {
    return entryWaitReady(&D_003EA54C[D_003EA548]->counter);
}
