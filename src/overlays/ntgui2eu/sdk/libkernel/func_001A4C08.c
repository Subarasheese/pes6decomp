/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern char *D_005CBF38;
struct Args { int x; int y; };
extern struct Args D_005CB3E8;
extern int func_001A4BF8(int, int);
extern int func_001A4BB8(void *, const void *, int);
extern int func_001B0444(const char *);
char *func_001A4C08(const char *name, int argc, const char **argv) {
    char *table = D_005CBF38;
    struct Args *config = &D_005CB3E8;
    char *out = table + 0x40;
    char *end = out;
    int len;
    const char **arg;
    func_001A4BF8(config->x, config->y);
    if (argc >= 16) argc = 15;
    func_001A4BB8(table, &out, 4);
    table += 4;
    len = func_001B0444(name) + 1;
    func_001A4BB8(out, name, len);
    out += len;
    if (argc > 0) {
        arg = argv;
        do {
            func_001A4BB8(table, &out, 4);
            table += 4;
            argc--;
            len = func_001B0444(*arg) + 1;
            func_001A4BB8(out, *arg, len);
            arg++;
            out += len;
        } while (argc != 0);
    }
    return end;
}
