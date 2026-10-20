/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Operation 18 carries two arguments and a terminated 1024-byte string.
 * Submission retains the lock for later completion handling; all failures
 * after acquiring it release it. Semantic argument names remain unknown. */
struct Client { char unknown0[0x24]; void *server; };
struct Command { int argument0, argument1; char unknown8[12]; char text[1024]; };
extern struct Client D_003F3880;
extern struct Command D_003F3930;
extern int D_00374654, D_00374650, D_003F4E40;
extern void func_00115708(void *);
extern int func_001053B0(int);
extern int func_00105380(int);
extern char *func_001C8590(char *, const char *, unsigned);
extern int func_001092A8(struct Client *, int, int, void *, int, void *, int,
    void (*)(void *), void *);
int func_00116BB0(int argument0, int argument1, const char *text) {
    if(!D_003F3880.server) return -100;
    if(func_001053B0(D_00374654)<0) return -200;
    if(!text || !*text) {func_00105380(D_00374654);return -210;}
    D_003F3930.argument0=argument0;
    D_003F3930.argument1=argument1;
    func_001C8590(D_003F3930.text,text,1023);
    D_003F3930.text[1023]=0;
    if(func_001092A8(&D_003F3880,18,1,&D_003F3930,0x414,
        &D_003F4E40,4,func_00115708,0)) {
        func_00105380(D_00374654);
        return -91;
    }
    D_00374650=18;
    return 0;
}
