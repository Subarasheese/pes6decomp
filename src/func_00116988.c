/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Submit operation 14 with flag 16 and two string fields; completion is tagged
 * as pending operation 19. The metadata prefix is deliberately left intact. */
struct Client { char unknown0[0x24]; void *server; };
struct Metadata { char unknown0[32]; char text[32]; };
struct Command { int argument0, argument1, flags, unknownC; struct Metadata *metadata; char text[1024]; };
extern struct Client D_003F3880;
extern struct Metadata D_003F38C0;
extern struct Command D_003F3930;
extern int D_00374654, D_00374650, D_003F4E40;
extern int func_001053B0(int);
extern int func_00105380(int);
extern void FlushCache(int);
extern void func_00115708(void *);
extern char *func_001C8590(char *, const char *, unsigned);
extern int sceSifCallRpc(struct Client *, int, int, void *, int, void *, int,
    void (*)(void *), void *);
int func_00116988(int argument0, int argument1, const char *text, const char *metadata_text) {
    if(!D_003F3880.server) return -100;
    if(func_001053B0(D_00374654)<0) return -200;
    if(!text || !*text || !metadata_text) {func_00105380(D_00374654);return -210;}
    D_003F3930.argument0=argument0;
    D_003F3930.argument1=argument1;
    D_003F3930.flags=16;
    func_001C8590(D_003F3930.text,text,1023);
    D_003F3930.text[1023]=0;
    func_001C8590(D_003F38C0.text,metadata_text,32);
    D_003F3930.metadata=&D_003F38C0;
    FlushCache(0);
    if(sceSifCallRpc(&D_003F3880,14,1,&D_003F3930,0x414,&D_003F4E40,4,
        func_00115708,0)) {func_00105380(D_00374654);return -91;}
    D_00374650=19;
    return 0;
}
