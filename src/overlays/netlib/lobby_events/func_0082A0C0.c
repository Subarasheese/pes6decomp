/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_channel_status.h"

extern s32 func_008703F0(void *connection, s32 value);
extern s32 D_008A4B50[], D_008A5658[], D_008A5948[], D_008A5C38[];

#define PES6_REQUEST_PHASE D_008A4B50
#define PES6_REQUEST_TICKS D_008A5658
#define PES6_REQUEST_STATUS D_008A5948
#define PES6_REQUEST_RECEIVED D_008A5C38
#define PES6_POLL_REQUEST func_0082A0C0
#define PES6_REQUEST_ARGUMENTS s32 channel, s32 value
#define PES6_SEND_REQUEST func_008703F0
#define PES6_REQUEST_VALUE value
#include "pes6/lobby_request_poll.inc"
