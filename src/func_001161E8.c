/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Operation 13 carries a string and a buffer of 64-byte records. A negative
 * record count skips cache writeback, preserving the original request mode. */
struct Client { char unknown0[0x24]; void *server; };
struct Metadata { int words[16]; };
struct Command {
    int argument0, argument1, argument2, record_count;
    struct Metadata *records;
    char text[1024];
};
extern struct Client D_003F3880;
extern struct Command D_003F3930;
extern int D_00374654, D_00374650, D_003F4E40;
extern int func_001053B0(int);
extern int func_00105380(int);
extern char *func_001C8590(char *, const char *, unsigned);
extern void sceSifWriteBackDCache(void *, int);
extern void func_00115708(void *);
extern int sceSifCallRpc(struct Client *, int, int, void *, int, void *, int,
    void (*)(void *), void *);
int func_001161E8(int argument0, int argument1, const char *text,
                 int argument2, int record_count, struct Metadata *records) {
    if(!D_003F3880.server) return -100;
    if(func_001053B0(D_00374654)<0) return -200;
    if(!text || !*text) {func_00105380(D_00374654);return -210;}
    D_003F3930.argument0=argument0;
    D_003F3930.argument1=argument1;
    D_003F3930.argument2=argument2;
    D_003F3930.record_count=record_count;
    D_003F3930.records=records;
    func_001C8590(D_003F3930.text,text,1023);
    D_003F3930.text[1023]=0;
    if(record_count>=0) sceSifWriteBackDCache(records,record_count*sizeof(*records));
    if(sceSifCallRpc(&D_003F3880,13,1,&D_003F3930,0x414,&D_003F4E40,4,
        func_00115708,0)) {func_00105380(D_00374654);return -91;}
    D_00374650=13;
    return 0;
}
