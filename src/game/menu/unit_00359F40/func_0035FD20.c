/* compiler: mwcc-3.0.1b210 */
#include "pes6/entry_wait.h"
typedef struct {
    u8 reserved00[0x18];
    struct Counter counter;
} EntryWaitPage;
extern s32 D_003E9FC8;
extern EntryWaitPage *D_003E9FCC[2];
s32 func_0035FD20(void) { return entryWaitReady(&D_003E9FCC[D_003E9FC8]->counter); }
