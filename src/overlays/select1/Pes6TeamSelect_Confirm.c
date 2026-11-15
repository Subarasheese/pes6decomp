/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0021FBC0(u16);
extern void Pes6MatchSetup_PrepareTeams(void);
extern void Pes6MemRegion_Release(s32);
extern s32 func_00266430(void);
M2C_UNK func_002D2E90();                            /* extern */
M2C_UNK func_00361EF0(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_008C9760();                            /* extern */
extern char Pes6MatchContext[];
extern char D_00591BB2[];

void Pes6TeamSelect_Confirm(void) {
    func_002D2E90();
    Pes6MatchSetup_PrepareTeams();
    func_008C9760();
    func_00361EF0(0, func_0021FBC0((*(u16 *)Pes6MatchContext)), 2);
    func_00361EF0(1, func_0021FBC0((*(u16 *)D_00591BB2)), 2);
    Pes6MemRegion_Release(6);
    func_00266430();
}
