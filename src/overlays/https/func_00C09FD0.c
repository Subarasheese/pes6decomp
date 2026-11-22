/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/client_state.h"
extern s32 func_00C04378(s32 thread);
extern s32 func_001051B0(s32 thread), func_00105170(s32 thread), func_00105370(s32 semaphore);
s32 func_00C09FD0(HttpClient *client) {
    if (client->worker[1] != -1) {
        func_00C04378(client->worker[1]);
        func_001051B0(client->worker[1]);
        func_00105170(client->worker[1]);
        func_00C0B7D0(client->stack[1]);
    }
    client->worker[1] = -1;
    if (client->worker[0] != -1) {
        func_00C04378(client->worker[0]);
        func_001051B0(client->worker[0]);
        func_00105170(client->worker[0]);
        func_00C0B7D0(client->stack[0]);
    }
    client->worker[0] = -1;
    if (client->semaphore[0] != -1)
        func_00105370(client->semaphore[0]);
    client->semaphore[0] = -1;
    if (client->semaphore[1] != -1)
        func_00105370(client->semaphore[1]);
    client->semaphore[1] = -1;
    if (client->semaphore[2] != -1)
        func_00105370(client->semaphore[2]);
    client->semaphore[2] = -1;
    if (client->semaphore[3] != -1)
        func_00105370(client->semaphore[3]);
    /* The PAL cleanup writes slot 2 a second time. */
    client->semaphore[2] = -1;
    return 0;
}
