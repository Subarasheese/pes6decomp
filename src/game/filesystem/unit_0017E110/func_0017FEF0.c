/* compiler: mwcc-3.0.1b151 */
#include "pes6/file_request_queue.h"
extern void func_0017FC80(s32 worker), func_0017FD00(s32 worker);
extern s32 D_003E9870;
void func_0017FEF0(void) {
    while (1) {
        FileJob *head = Pes6File_GetChannelBusy(FILE_CHANNEL_PROCESS);
        FileJob *job = (FileJob *)head;
        if (!head) {
            D_003E9870 = 0;
            func_0017FC80(2);
            func_0017FD00(1);
            continue;
        }
        D_003E9870 = 1;
        job->process(job);
        D_003E9870 = 0;
        if (job->ready) {
            func_0017EDD0(job, FILE_CHANNEL_CALLBACK);
            D_003E9870 = 0;
            func_0017FC80(2);
            func_0017FD00(1);
        } else {
            func_0017EDD0(job, FILE_CHANNEL_IDLE);
            D_003E9870 = 0;
            func_0017FD00(1);
        }
    }
}
