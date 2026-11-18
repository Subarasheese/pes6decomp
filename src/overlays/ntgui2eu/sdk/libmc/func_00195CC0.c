/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Synchronous operation 21: serialize the shared packet, submit the RPC,
 * release the semaphore, then return the server's result word. */
struct Client { char unknown0[0x24]; void *server; };
struct Command { int argument0, argument1; char unknown8[40]; };
extern struct Client D_011FD7C0;
extern struct Command D_011FD840;
extern int D_005CAA34, D_011FED80;
extern int func_0019B170(int);
extern int func_0019B140(int);
extern int func_0019EE30(struct Client *, int, int, void *, int, void *, int,
    void (*)(void *), void *);
int func_00195CC0(int argument) {
    if(!D_011FD7C0.server) return -100;
    if(func_0019B170(D_005CAA34)<0) return -200;
    D_011FD840.argument1=argument;
    if(func_0019EE30(&D_011FD7C0,21,0,&D_011FD840,48,&D_011FED80,4,0,0)) {
        func_0019B140(D_005CAA34);
        return -91;
    }
    func_0019B140(D_005CAA34);
    return D_011FED80;
}
