/* compiler: mwcc-3.0.1b210 */
#pragma inline_depth(8)
#include "pes6/league_roster_flags.h"
extern u8 func_00225820(void);
u8 func_0096FBC0(u16 playerId) { return findRosterPlayer(playerId, func_00225820()); }
