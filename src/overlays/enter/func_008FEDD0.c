/* compiler: mwcc-3.0.1b210 */
#include "pes6/entry_wait.h"

typedef struct {
    u8 reserved[0x20];
    struct Counter counter;
} EntryWaitPage;
extern EntryWaitPage *D_003EA51C[2];
extern s32 D_003EA518;

s32 func_008FEDD0(void) {
    return entryWaitReady(&D_003EA51C[D_003EA518]->counter);
}
