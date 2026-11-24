
#include "pes6/match_period_message.h"
extern MatchMessageState Pes6JobManager_Table;

MatchMessageState *Pes6Job_GetManager(void) { return &Pes6JobManager_Table; }
