/* compiler: mwcc-3.0.1b210 */
#include "pes6/file_request_queue.h"
FileJob *Pes6File_GetChannelBusy(s32 channel) { return Pes6File_Channels[channel].head; }
