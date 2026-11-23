/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_channel_status.h"

extern s32 func_00870A00(void *connection, s32 value);
extern s32 D_008A4B70[], D_008A5674[], D_008A5964[], D_008A5C54[];

#define PES6_REQUEST_PHASE D_008A4B70
#define PES6_REQUEST_TICKS D_008A5674
#define PES6_REQUEST_STATUS D_008A5964
#define PES6_REQUEST_RECEIVED D_008A5C54
#define PES6_POLL_REQUEST func_008292D0
#define PES6_REQUEST_ARGUMENTS s32 channel, s32 value
#define PES6_SEND_REQUEST func_00870A00
#define PES6_REQUEST_VALUE value
#include "pes6/lobby_request_poll.inc"
