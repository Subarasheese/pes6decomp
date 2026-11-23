/* compiler: mwcc-3.0.1b210 */
#pragma opt_strength_reduction off
#include "pes6/match_job_message.h"
s32 func_00364AB0(RosterMessage *ctx) {
    return sendRosterFlag(ctx, 0x81, 0x02000000);
}
