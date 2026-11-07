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
extern struct Client D_003F3880;
extern struct Command D_003F3900;
extern char D_003F3D80[0xC0];
extern int *D_003F38A8, *D_003F38AC, *D_003F38B0;
extern int D_00374654, D_00374650, D_003F4E40;
extern int func_001053B0(int);
extern int func_00105380(int);
extern void sceSifWriteBackDCache(void *, int);
extern void func_00115FA0(void *);
extern int sceSifCallRpc(struct Client *, int, int, void *, int, void *, int,
    void (*)(void *), void *);
int func_00115FF8(int argument0, int argument1, int *output0, int *output1, int *output2) {
    if(!D_003F3880.server) return -100;
    if(func_001053B0(D_00374654)<0) return -200;
    D_003F3900.argument0=argument0;
    D_003F3900.argument1=argument1;
    D_003F3900.scratch=D_003F3D80;
    if(output0) D_003F3900.want0=1; else D_003F3900.want0=0;
    if(output1) D_003F3900.want1=1; else D_003F3900.want1=0;
    if(output2) D_003F3900.want2=1; else D_003F3900.want2=0;
    D_003F38A8=output0;
    D_003F38AC=output1;
    D_003F38B0=output2;
    sceSifWriteBackDCache(D_003F3D80,0xC0);
    if(sceSifCallRpc(&D_003F3880,1,1,&D_003F3900,48,&D_003F4E40,4,
        func_00115FA0,D_003F3D80)) {
        func_00105380(D_00374654);return -91;
    }
    D_00374650=1;
    return 0;
}
