/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern char *D_00371730;
struct Args { int x; int y; };
extern struct Args D_003721E8;
extern int func_0010F8F0(int, int);
extern int func_0010F8B0(void *, const void *, int);
extern int func_001C80F0(const char *);
char *func_0010F900(const char *name, int argc, const char **argv) {
    char *table = D_00371730;
    struct Args *config = &D_003721E8;
    char *out = table + 0x40;
    char *end = out;
    int len;
    const char **arg;
    func_0010F8F0(config->x, config->y);
    if (argc >= 16) argc = 15;
    func_0010F8B0(table, &out, 4);
    table += 4;
    len = func_001C80F0(name) + 1;
    func_0010F8B0(out, name, len);
    out += len;
    if (argc > 0) {
        arg = argv;
        do {
            func_0010F8B0(table, &out, 4);
            table += 4;
            argc--;
            len = func_001C80F0(*arg) + 1;
            func_0010F8B0(out, *arg, len);
            arg++;
            out += len;
        } while (argc != 0);
    }
    return end;
}
