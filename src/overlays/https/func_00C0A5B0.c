/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/client_state.h"
extern s32 func_00C09AA0(HttpClient *client);
s32 func_00C0A5B0(HttpClient *client) {
    func_00C09FD0(client);
    if (client->socket != -1 || client->firstThread != -1 || client->secondThread != -1)
        func_00C09AA0(client);
    return 0;
}
