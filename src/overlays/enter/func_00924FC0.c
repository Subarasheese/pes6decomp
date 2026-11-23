/* compiler: mwcc-3.0.1b210 */
#include "pes6/entry_wait.h"

typedef struct {
    u8 reserved[0x20];
    struct Counter counter;
} EntryWaitPage;
extern EntryWaitPage *D_003EA5F0[2];
extern s32 D_003EA5EC;

s32 func_00924FC0(void) {
    return entryWaitReady(&D_003EA5F0[D_003EA5EC]->counter);
}
