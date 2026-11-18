/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Operation 5 submits a caller buffer plus a cache-visible scratch area.
 * Pointer and size fields follow the packet; their original names are unknown. */
struct Client { char unknown0[0x24]; void *server; };
struct Command {
    int argument;
    char unknown4[8];
    int size;
    char unknown10[8];
    void *buffer, *scratch;
    char unknown20[16];
};
extern struct Client D_011FD7C0;
extern struct Command D_011FD840;
extern char D_011FDCC0[0xC0];
extern int D_005CAA34, D_005CAA30, D_011FED80;
extern void func_00196080(void *);
extern int func_0019B170(int);
extern int func_0019B140(int);
extern void func_0019E3F8(void *, int);
extern int func_0019EE30(struct Client *, int, int, void *, int, void *, int,
    void (*)(void *), void *);
int func_00196130(int argument, void *buffer, int size) {
    if(!D_011FD7C0.server) return -100;
    if(func_0019B170(D_005CAA34)<0) return -200;
    D_011FD840.argument=argument;
    D_011FD840.buffer=buffer;
    D_011FD840.size=size;
    D_011FD840.scratch=D_011FDCC0;
    func_0019E3F8(buffer,size);
    func_0019E3F8(D_011FDCC0,0xC0);
    if(func_0019EE30(&D_011FD7C0,5,1,&D_011FD840,48,&D_011FED80,4,
        func_00196080,D_011FDCC0)) {
        func_0019B140(D_005CAA34);
        return -91;
    }
    D_005CAA30=5;
    return 0;
}
