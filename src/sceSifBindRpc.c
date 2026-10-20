/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Bind an RPC client using a pooled 64-byte command packet. Blocking mode
 * owns a temporary semaphore until completion; asynchronous mode returns
 * after submission. Packet fields and names are provisional. */
struct Client;
struct Packet {
    char unknown0[16];
    unsigned flags;
    struct Packet *self;
    int generation;
    struct Client *client;
    unsigned server_id;
    char unknown24[28];
};
struct Client {
    struct Packet *packet;
    int generation;
    int semaphore;
    char unknownC[4];
    int command;
    char unknown14[16];
    void *server;
};
struct Pool;
struct Semaphore { int current, maximum, initial, waiters; unsigned attributes; const char *tag; };
extern struct Pool D_003EDC80;
extern char D_003C3BB8[];
extern struct Packet *_sceRpcGetPacket(struct Pool *);
extern void _sceRpcFreePacket(struct Packet *);
extern int func_00105360(struct Semaphore *);
extern int func_00105370(int);
extern int WaitSema(int);
extern int sceSifSendCmd(unsigned, void *, int, void *, void *, int);
int sceSifBindRpc(struct Client *client, unsigned server_id, int mode) {
    struct Packet *packet;
    struct Semaphore semaphore;
    client->command = 0;
    client->server = 0;
    packet = _sceRpcGetPacket(&D_003EDC80);
    if (!packet) return -1;
    client->packet = packet;
    client->generation = packet->generation;
    packet->server_id = server_id;
    packet->self = packet;
    packet->client = client;
    if (!(mode & 1)) {
        semaphore.maximum = 1;
        semaphore.tag = D_003C3BB8;
        semaphore.initial = 0;
        client->semaphore = func_00105360(&semaphore);
        if (client->semaphore < 0) {
            _sceRpcFreePacket(packet);
            return -3;
        }
        if (!sceSifSendCmd(0x80000009, packet, 64, 0, 0, 0)) {
            _sceRpcFreePacket(packet);
            func_00105370(client->semaphore);
            return -2;
        }
        WaitSema(client->semaphore);
        func_00105370(client->semaphore);
        return 0;
    }
    client->semaphore = -1;
    if (!sceSifSendCmd(0x80000009, packet, 64, 0, 0, 0)) {
        _sceRpcFreePacket(packet);
        return -2;
    }
    return 0;
}
