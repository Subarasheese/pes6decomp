/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Submit asynchronous operation 4 while holding the library semaphore.
 * The RPC callback signals a separate completion semaphore. */
struct Client { char unknown0[0x24]; void *server; };
struct Command { int argument0; char unknown4[12]; int argument1, argument2; char unknown18[24]; };
extern struct Client D_003F3880;
extern struct Command D_003F3900;
extern int D_00374654, D_00374650;
extern char D_003F4E40;
extern void func_00115708(void *);
extern int func_001053B0(int);
extern int func_00105380(int);
extern int sceSifCallRpc(struct Client *, int, int, void *, int, void *, int,
    void (*)(void *), void *);
int func_00115AB8(int argument0, int argument1, int argument2) {
    if(!D_003F3880.server) return -100;
    if(func_001053B0(D_00374654)<0) return -200;
    D_003F3900.argument0=argument0;
    D_003F3900.argument1=argument1;
    D_003F3900.argument2=argument2;
    if(sceSifCallRpc(&D_003F3880,4,1,&D_003F3900,48,&D_003F4E40,4,func_00115708,0)) {
        func_00105380(D_00374654);
        return -91;
    }
    D_00374650=4;
    return 0;
}
