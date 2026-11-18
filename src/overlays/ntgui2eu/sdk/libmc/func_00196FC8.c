/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Submit an asynchronous two-argument operation under the library semaphore.
 * The RPC callback signals a separate completion semaphore. */
struct Client { char unknown0[0x24]; void *server; };
struct Command { int argument0, argument1, argument2; char unknownC[36]; };
extern struct Client D_011FD7C0;
extern struct Command D_011FD840;
extern int D_005CAA34, D_005CAA30;
extern char D_011FED80;
extern void func_00195BF0(void *);
extern int func_0019B170(int);
extern int func_0019B140(int);
extern int func_0019EE30(struct Client *, int, int, void *, int, void *, int,
    void (*)(void *), void *);
int func_00196FC8(int argument0, int argument1) {
    if(!D_011FD7C0.server) return -100;
    if(func_0019B170(D_005CAA34)<0) return -200;
    D_011FD840.argument1=argument0;
    D_011FD840.argument2=argument1;
    if(func_0019EE30(&D_011FD7C0,17,1,&D_011FD840,48,&D_011FED80,4,func_00195BF0,0)) {
        func_0019B140(D_005CAA34);
        return -91;
    }
    D_005CAA30=17;
    return 0;
}
