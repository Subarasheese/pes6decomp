/* compiler: ee-gcc-2.9-G0 */
#include "pes6/https/client_state.h"
extern s32 func_00C04720(HttpClient *client);
s32 func_00C04740(HttpClient *client) {
    func_00C0A5B0(client);
    client->active = 0;
    client->state = 0;
    func_00C07798(client->addresses);
    client->addresses = 0;
    func_00C07798(client->proxyAddresses);
    client->proxyAddresses = 0;
    func_00C07CB8(client->headers);
    client->headers = 0;
    if (client->buffer && !(client->flags & 2))
        func_00C0B7D0(client->buffer);
    client->buffer = 0;
    client->bufferSize = 0;
    func_00C04720(client);
    if (client->allocation)
        func_00C0B7D0(client->allocation);
    func_00C0B7D0(client);
    return 0;
}
