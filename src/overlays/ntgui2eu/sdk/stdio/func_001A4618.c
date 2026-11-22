/* compiler: ee-gcc-2.9-G0 */
/* Source: nathanialf/ico, sce/libkernl/iopreset.c (sceSifRebootIop). See LICENSES/ico-MIT.txt. */
extern int func_0019DBD0(const char *fmt, ...);
extern void func_0019E4A8(int mode);
extern void func_0019E648(void);
extern int func_001A4448(char *arg, int mode);

int func_001A4618(const char *arg) {
    char buf[80];
    char *s = "rom0:UDNL ";
    char *d;
    char *p;
    for (p = (char *)arg; (*p) != 0; p++) {
    }

    if (((unsigned int)((p + 11) - ((char *)arg))) > 80) {
        func_0019DBD0("too long parameter '%s'\n", arg);
        return 0;
    }
    func_0019E4A8(0);
    func_0019E648();
    d = buf;
    while ((*s) != 0) {
        *(d++) = *(s++);
    }

    while ((*arg) != 0) {
        *(d++) = *(arg++);
    }

    *d = 0;
    return func_001A4448(buf, 0);
}
