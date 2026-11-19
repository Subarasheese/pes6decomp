/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Operation 1 requests up to three optional result words. Keep their output
 * pointers for the completion callback and pass presence flags in the packet. */
struct Client { char unknown0[0x24]; void *server; };
struct Command {
    int unknown0, argument0, argument1, want2, want1, want0;
    int unknown18;
    void *scratch;
    char unknown20[16];
};
extern struct Client D_011FD7C0;
extern struct Command D_011FD840;
extern char D_011FDCC0[0xC0];
extern int *D_011FD7E8, *D_011FD7EC, *D_011FD7F0;
extern int D_005CAA34, D_005CAA30, D_011FED80;
extern int func_0019B170(int);
extern int func_0019B140(int);
extern void func_0019E3F8(void *, int);
extern void func_00196488(void *);
extern int func_0019EE30(struct Client *, int, int, void *, int, void *, int,
    void (*)(void *), void *);
int func_001964E0(int argument0, int argument1, int *output0, int *output1, int *output2) {
    if(!D_011FD7C0.server) return -100;
    if(func_0019B170(D_005CAA34)<0) return -200;
    D_011FD840.argument0=argument0;
    D_011FD840.argument1=argument1;
    D_011FD840.scratch=D_011FDCC0;
    if(output0) D_011FD840.want0=1; else D_011FD840.want0=0;
    if(output1) D_011FD840.want1=1; else D_011FD840.want1=0;
    if(output2) D_011FD840.want2=1; else D_011FD840.want2=0;
    D_011FD7E8=output0;
    D_011FD7EC=output1;
    D_011FD7F0=output2;
    func_0019E3F8(D_011FDCC0,0xC0);
    if(func_0019EE30(&D_011FD7C0,1,1,&D_011FD840,48,&D_011FED80,4,
        func_00196488,D_011FDCC0)) {
        func_0019B140(D_005CAA34);return -91;
    }
    D_005CAA30=1;
    return 0;
}
