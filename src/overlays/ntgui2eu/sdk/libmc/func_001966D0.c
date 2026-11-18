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
extern struct Client D_011FD7C0;
extern struct Command D_011FD870;
extern int D_005CAA34, D_005CAA30, D_011FED80;
extern int func_0019B170(int);
extern int func_0019B140(int);
extern char *func_001B08E8(char *, const char *, unsigned);
extern void func_0019E3F8(void *, int);
extern void func_00195BF0(void *);
extern int func_0019EE30(struct Client *, int, int, void *, int, void *, int,
    void (*)(void *), void *);
int func_001966D0(int argument0, int argument1, const char *text,
                 int argument2, int record_count, struct Metadata *records) {
    if(!D_011FD7C0.server) return -100;
    if(func_0019B170(D_005CAA34)<0) return -200;
    if(!text || !*text) {func_0019B140(D_005CAA34);return -210;}
    D_011FD870.argument0=argument0;
    D_011FD870.argument1=argument1;
    D_011FD870.argument2=argument2;
    D_011FD870.record_count=record_count;
    D_011FD870.records=records;
    func_001B08E8(D_011FD870.text,text,1023);
    D_011FD870.text[1023]=0;
    if(record_count>=0) func_0019E3F8(records,record_count*sizeof(*records));
    if(func_0019EE30(&D_011FD7C0,13,1,&D_011FD870,0x414,&D_011FED80,4,
        func_00195BF0,0)) {func_0019B140(D_005CAA34);return -91;}
    D_005CAA30=13;
    return 0;
}
