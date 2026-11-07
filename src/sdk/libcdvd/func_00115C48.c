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
extern struct Client D_003F3880;
extern struct Command D_003F3900;
extern char D_003F3D80[0xC0];
extern int D_00374654, D_00374650, D_003F4E40;
extern void func_00115B98(void *);
extern int func_001053B0(int);
extern int func_00105380(int);
extern void sceSifWriteBackDCache(void *, int);
extern int sceSifCallRpc(struct Client *, int, int, void *, int, void *, int,
    void (*)(void *), void *);
int func_00115C48(int argument, void *buffer, int size) {
    if(!D_003F3880.server) return -100;
    if(func_001053B0(D_00374654)<0) return -200;
    D_003F3900.argument=argument;
    D_003F3900.buffer=buffer;
    D_003F3900.size=size;
    D_003F3900.scratch=D_003F3D80;
    sceSifWriteBackDCache(buffer,size);
    sceSifWriteBackDCache(D_003F3D80,0xC0);
    if(sceSifCallRpc(&D_003F3880,5,1,&D_003F3900,48,&D_003F4E40,4,
        func_00115B98,D_003F3D80)) {
        func_00105380(D_00374654);
        return -91;
    }
    D_00374650=5;
    return 0;
}
