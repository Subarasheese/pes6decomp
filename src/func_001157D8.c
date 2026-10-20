/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Synchronous operation 21: serialize the shared packet, submit the RPC,
 * release the semaphore, then return the server's result word. */
struct Client { char unknown0[0x24]; void *server; };
struct Command { int argument0, argument1; char unknown8[40]; };
extern struct Client D_003F3880;
extern struct Command D_003F3900;
extern int D_00374654, D_003F4E40;
extern int func_001053B0(int);
extern int func_00105380(int);
extern int sceSifCallRpc(struct Client *, int, int, void *, int, void *, int,
    void (*)(void *), void *);
int func_001157D8(int argument) {
    if(!D_003F3880.server) return -100;
    if(func_001053B0(D_00374654)<0) return -200;
    D_003F3900.argument1=argument;
    if(sceSifCallRpc(&D_003F3880,21,0,&D_003F3900,48,&D_003F4E40,4,0,0)) {
        func_00105380(D_00374654);
        return -91;
    }
    func_00105380(D_00374654);
    return D_003F4E40;
}
