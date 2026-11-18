/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* Operation 12 sends a bounded string and receives text through a separate
 * DMA buffer. The callback copies it to the caller's output, then signals
 * completion. Partial packet fields and operation meanings are provisional. */
struct Client { char unknown0[0x24]; void *server; };
struct Command {
    int argument0, argument1;
    char unknown8[8];
    char *response;
    char text[1024];
};
extern struct Client D_011FD7C0;
extern struct Command D_011FD870;
extern char D_011FDD80[1024], D_011FED80;
extern int D_005CAA34, D_005CAA30;
extern int func_0019B170(int);
extern int func_0019B140(int);
extern char *func_001B08E8(char *, const char *, unsigned int);
extern void func_0019E3F8(void *, int);
extern void func_00196820(char *);
extern int func_0019EE30(struct Client *, int, int, void *, int, void *, int,
    void (*)(char *), char *);
int func_001968B0(int argument0, int argument1, const char *text, char *output) {
    if (!D_011FD7C0.server) return -100;
    if (func_0019B170(D_005CAA34) < 0) return -200;
    if (!text || !*text) {
        func_0019B140(D_005CAA34);
        return -210;
    }
    D_011FD870.argument0 = argument0;
    D_011FD870.argument1 = argument1;
    D_011FD870.response = D_011FDD80;
    func_001B08E8(D_011FD870.text, text, 1023);
    D_011FD870.text[1023] = 0;
    func_0019E3F8(D_011FDD80, 1024);
    if (func_0019EE30(&D_011FD7C0, 12, 1, &D_011FD870, 1044,
                     &D_011FED80, 4, func_00196820, output)) {
        func_0019B140(D_005CAA34);
        return -91;
    }
    D_005CAA30 = 12;
    return 0;
}
