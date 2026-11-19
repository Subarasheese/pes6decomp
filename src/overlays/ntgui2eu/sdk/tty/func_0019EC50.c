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
extern struct Pool D_012032C0;
extern char D_006004A8[];
extern struct Packet *func_0019E670(struct Pool *);
extern void func_0019E718(struct Packet *);
extern int func_0019B120(struct Semaphore *);
extern int func_0019B130(int);
extern int func_0019B160(int);
extern int func_0019E230(unsigned, void *, int, void *, void *, int);
int func_0019EC50(struct Client *client, unsigned server_id, int mode) {
    struct Packet *packet;
    struct Semaphore semaphore;
    client->command = 0;
    client->server = 0;
    packet = func_0019E670(&D_012032C0);
    if (!packet) return -1;
    client->packet = packet;
    client->generation = packet->generation;
    packet->server_id = server_id;
    packet->self = packet;
    packet->client = client;
    if (!(mode & 1)) {
        semaphore.maximum = 1;
        semaphore.tag = D_006004A8;
        semaphore.initial = 0;
        client->semaphore = func_0019B120(&semaphore);
        if (client->semaphore < 0) {
            func_0019E718(packet);
            return -3;
        }
        if (!func_0019E230(0x80000009, packet, 64, 0, 0, 0)) {
            func_0019E718(packet);
            func_0019B130(client->semaphore);
            return -2;
        }
        func_0019B160(client->semaphore);
        func_0019B130(client->semaphore);
        return 0;
    }
    client->semaphore = -1;
    if (!func_0019E230(0x80000009, packet, 64, 0, 0, 0)) {
        func_0019E718(packet);
        return -2;
    }
    return 0;
}
