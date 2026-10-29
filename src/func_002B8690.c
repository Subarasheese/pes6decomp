/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x230];
    void *handle;
    u8 pad234[0xC];
} Rec240;

extern Rec240 Pes6MatchPlayers[];
void func_00153FA0(void *);

void func_002B8690(void) {
    s32 i;
    Rec240 *rec;

    for (i = 0, rec = Pes6MatchPlayers; i < 23; i++) {
        if (rec->handle != NULL) {
            func_00153FA0(rec->handle);
            rec->handle = NULL;
        }
        rec++;
    }
}
