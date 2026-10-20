/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* vsprintf-style wrapper over the shared formatter (newlib vsprintf.c shape): the sink context
   carries the destination buffer; func_00107E60 stores each produced character. */
typedef char *va_list;

typedef struct Ctx {
    char *buf;
    int pad[3];
} Ctx;

extern int func_00107E60();
extern int func_00107148(int (*)(), Ctx *, const char *, int, va_list);

int func_00107F58(char *buf, const char *fmt, int x, va_list args) {
    Ctx ctx;
    ctx.buf = buf;
    return func_00107148(func_00107E60, &ctx, fmt, x, args);
}
