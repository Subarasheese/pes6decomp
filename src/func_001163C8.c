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
extern struct Client D_003F3880;
extern struct Command D_003F3930;
extern char D_003F3E40[1024], D_003F4E40;
extern int D_00374654, D_00374650;
extern int func_001053B0(int);
extern int func_00105380(int);
extern char *func_001C8590(char *, const char *, unsigned int);
extern void func_00108870(void *, int);
extern void func_00116338(char *);
extern int func_001092A8(struct Client *, int, int, void *, int, void *, int,
    void (*)(char *), char *);
int func_001163C8(int argument0, int argument1, const char *text, char *output) {
    if (!D_003F3880.server) return -100;
    if (func_001053B0(D_00374654) < 0) return -200;
    if (!text || !*text) {
        func_00105380(D_00374654);
        return -210;
    }
    D_003F3930.argument0 = argument0;
    D_003F3930.argument1 = argument1;
    D_003F3930.response = D_003F3E40;
    func_001C8590(D_003F3930.text, text, 1023);
    D_003F3930.text[1023] = 0;
    func_00108870(D_003F3E40, 1024);
    if (func_001092A8(&D_003F3880, 12, 1, &D_003F3930, 1044,
                     &D_003F4E40, 4, func_00116338, output)) {
        func_00105380(D_00374654);
        return -91;
    }
    D_00374650 = 12;
    return 0;
}
