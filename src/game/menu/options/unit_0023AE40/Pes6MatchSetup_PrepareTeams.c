/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"
M2C_UNK func_001FA5A0();                            /* extern */
M2C_UNK Pes6MatchSide_SetupTeam(M2C_UNK, u16);                /* extern */
M2C_UNK Pes6TeamPair_Apply(u16, u16);                    /* extern */
M2C_UNK func_0023EA80();                            /* extern */
M2C_UNK func_00244E30();                            /* extern */
M2C_UNK Pes6MatchSetup_BuildLineups();                            /* extern */
M2C_UNK func_00291A50();                            /* extern */
M2C_UNK func_00361A10();                            /* extern */
extern char Pes6MatchContext[];
extern char D_00591BB2[];
extern char D_00591C09[];

void Pes6MatchSetup_PrepareTeams(void) {
    func_00291A50();
    if (((*(u8 *)D_00591C09) != 4) && ((*(u8 *)D_00591C09) != 1) && ((*(u8 *)D_00591C09) != 2)) {
        Pes6TeamPair_Apply((*(u16 *)Pes6MatchContext), (*(u16 *)D_00591BB2));
        Pes6MatchSetup_BuildLineups();
        func_001FA5A0();
        Pes6MatchSide_SetupTeam(0, (*(u16 *)Pes6MatchContext));
        Pes6MatchSide_SetupTeam(1, (*(u16 *)D_00591BB2));
    }
    func_00361A10();
    func_00244E30();
    func_0023EA80();
}
