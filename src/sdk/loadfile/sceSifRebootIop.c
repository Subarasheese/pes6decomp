/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/iopreset.c). */
extern int sceSifInitRpc(unsigned int mode);
extern void sceSifExitRpc(void);
extern int printf(const char *fmt, ...);int func_0010E8C0(const char *arg, int mode);

int sceSifRebootIop(const char *img)
{
    char param[80];
    const char *prefix = "rom0:UDNL ";
    const char *end;
    char *dst;

    for (end = img; *end != 0; end++) {
    }
    if ((unsigned int)(sizeof("rom0:UDNL ") + end - img) > 80) {
        printf("too long parameter '%s'\n", img);
        return 0;
    }

    sceSifInitRpc(0);
    sceSifExitRpc();

    dst = param;
    while (*prefix != 0) {
        *dst++ = *prefix++;
    }
    while (*img != 0) {
        *dst++ = *img++;
    }
    *dst = 0;

    return func_0010E8C0(param, 0);
}