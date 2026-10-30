/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00287370(void *);
extern void func_001A58E0(void *, signed char);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char Pes6MatchPlayers[];
extern void *D_0058E5B4;

void func_00917960(void) {
    M2C_FIELD(D_0058E5B4, s8 *, 0x2C) = 0;
    func_001A58E0(M2C_FIELD(D_0058E5B4, void **, 0), 0);
    func_00209A00(D_0058E5B4, 0x1BF, 0);
    func_00287370(((void *)Pes6MatchPlayers));
}
