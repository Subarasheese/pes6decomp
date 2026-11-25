/* compiler: mwcc-3.0.1b151 */
#include "pes6/file_request_queue.h"
extern void func_0017FC80(s32 worker), func_0017FD00(s32 worker);
extern void func_0017FFA0(s32 worker);
void func_00180120(void) {
    while (1) {
        FileJob *head = Pes6File_GetChannelBusy(FILE_CHANNEL_PENDING);
        FileJob *job = (FileJob *)head;
        if (!head) {
            func_0017FFA0(1);
            func_0017FC80(1);
            func_0017FD00(0);
            continue;
        }
        func_0017EDD0(job, FILE_CHANNEL_READ);
        if (!job->preloaded) {
            do {
                job->read(job);
            } while (job->status == 2);
        }
        if (job->status == 1)
            func_0017EDD0(job, FILE_CHANNEL_IDLE);
        else
            func_0017EDD0(job, FILE_CHANNEL_PROCESS);
        func_0017FFA0(1);
        func_0017FC80(1);
        func_0017FD00(0);
    }
}
