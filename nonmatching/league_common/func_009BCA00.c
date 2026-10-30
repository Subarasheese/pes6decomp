/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017B060(int, int, int);
M2C_UNK func_001A5A20(void *);                      /* extern */
extern char Pes6MatchPlayers[];

void func_009BCA00(s32 arg0) {
    void *temp_s0;

    temp_s0 = ((void *)Pes6MatchPlayers) + ((arg0 + 1) * 0x240);
    func_0017B060(M2C_FIELD(*M2C_FIELD(temp_s0, void ***, 4), s32 *, 0x10), 0, 0);
    func_001A5A20(*M2C_FIELD(temp_s0, void ***, 4));
}
