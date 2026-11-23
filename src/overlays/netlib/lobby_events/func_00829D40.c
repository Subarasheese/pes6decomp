/* compiler: mwcc-3.0.1b198 */
#include "pes6/lobby_command_message.h"

extern s32 func_00871490(void *connection, s32 value);
extern s32 D_008A4B60[], D_008A5664[], D_008A5954[], D_008A5C44[];

#define PES6_REQUEST_PHASE D_008A4B60
#define PES6_REQUEST_TICKS D_008A5664
#define PES6_REQUEST_STATUS D_008A5954
#define PES6_REQUEST_RECEIVED D_008A5C44
#define PES6_POLL_REQUEST func_00829D40
#define PES6_REQUEST_ARGUMENTS s32 channel
#define PES6_SEND_REQUEST func_00871490
#define PES6_REQUEST_VALUE ((LobbyHost *)D_008A4398[0])->requestValue
#include "pes6/lobby_request_poll.inc"
