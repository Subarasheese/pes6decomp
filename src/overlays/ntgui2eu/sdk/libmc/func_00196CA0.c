/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Operation 14 carries a string, three flag bits and a copied 64-byte record.
 * Original record and argument names remain unknown. */
struct Client { char unknown0[0x24]; void *server; };
struct Metadata { int words[16]; };
struct Command {
    int argument0, argument1, flags, unknownC;
    struct Metadata *metadata;
    char text[1024];
};
extern struct Client D_011FD7C0;
extern struct Metadata D_011FD800;
extern struct Command D_011FD870;
extern int D_005CAA34, D_005CAA30, D_011FED80;
extern int func_0019B170(int);
extern int func_0019B140(int);
extern void func_00195BF0(void *);
extern void func_0019B3A0(int);
extern char *func_001B08E8(char *, const char *, unsigned);
extern int func_0019EE30(struct Client *, int, int, void *, int, void *, int,
    void (*)(void *), void *);
int func_00196CA0(int argument0, int argument1, const char *text,
                 const struct Metadata *metadata, unsigned flags) {
    if(!D_011FD7C0.server) return -100;
    if(func_0019B170(D_005CAA34)<0) return -200;
    if(!text || !*text) {func_0019B140(D_005CAA34);return -210;}
    flags&=7;
    D_011FD870.argument0=argument0;
    D_011FD870.argument1=argument1;
    D_011FD870.flags=flags;
    D_011FD800=*metadata;
    D_011FD870.metadata=&D_011FD800;
    func_001B08E8(D_011FD870.text,text,1023);
    D_011FD870.text[1023]=0;
    func_0019B3A0(0);
    if(func_0019EE30(&D_011FD7C0,14,1,&D_011FD870,0x414,&D_011FED80,4,
        func_00195BF0,0)) {func_0019B140(D_005CAA34);return -91;}
    D_005CAA30=14;
    return 0;
}
