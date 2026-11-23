/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_channel_status.h"

extern s32 func_00870AF0(void *connection, s32 value);
extern s32 D_008A4B6C[], D_008A5670[], D_008A5960[], D_008A5C50[];

#define PES6_REQUEST_PHASE D_008A4B6C
#define PES6_REQUEST_TICKS D_008A5670
#define PES6_REQUEST_STATUS D_008A5960
#define PES6_REQUEST_RECEIVED D_008A5C50
#define PES6_POLL_REQUEST func_00829640
#define PES6_REQUEST_ARGUMENTS s32 channel, s32 value
#define PES6_SEND_REQUEST func_00870AF0
#define PES6_REQUEST_VALUE value
#include "pes6/lobby_request_poll.inc"
