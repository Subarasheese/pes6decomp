/* compiler: ee-gcc-2.96-G0 */
/* LogPrintf adapted from LucasPicoli/god-hand-decomp, src/cod/00326050.c. See THIRD_PARTY.md. */
/* GCC R5900 EABI va_start for integer-register arguments. */
typedef char *va_list;
#define va_start(list, last)                                                                       \
    ((list) = (char *)__builtin_next_arg(last) -                                                   \
              (__builtin_args_info(2) >= 8 ? 0 : (8 - __builtin_args_info(2)) * 8))
#define va_end(list) ((void)0)
extern int D_00383270;
extern int vsprintf(char *out, const char *format, va_list args);
extern int printf(const char *format, ...);
void func_00161038(const char *format, ...) {
    char message[128];
    va_list args;
    if (!D_00383270) {
        va_start(args, format);
        vsprintf(message, format, args);
        va_end(args);
        printf(message);
    }
}
