/* compiler: mwcc-3.0.1b151 */
#include "pes6/file_request_queue.h"
void func_0017EDD0(FileJob *job, s32 channel) {
    job->priority = 0;
    transferJob(job, channel);
}
