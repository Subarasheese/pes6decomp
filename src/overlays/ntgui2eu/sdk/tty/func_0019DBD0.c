/* compiler: ee-gcc-2.9-G0 */
/* This NTGUI2EU runtime copy also appears at 00108048 in SLES-542.03. */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* This compiler ships no headers: va_list and va_start as gcc 2.9x's va-mips.h defines them for
   the EABI without double-precision FP registers (a pointer into the saved argument registers). */
typedef char *va_list;
#define va_start(ap, last)                                    \
    (ap = (va_list)__builtin_next_arg(last) -                 \
          (__builtin_args_info(2) >= 8 ? 0 : (8 - __builtin_args_info(2)) * 8))

extern int func_0019DA40();
extern int func_001A4728(void);
extern void func_001A4778(void);
extern int func_0019CCD0(int (*)(), void *, unsigned int, const char *, va_list);

void func_0019DBD0(const char *fmt, ...)
{
    int ctx;
    va_list args;
    int state;

    ctx = 0;
    state = func_001A4728();
    va_start(args, fmt);
    func_0019CCD0(func_0019DA40, &ctx, 0xFFFFFFFF, fmt, args);
    if (state)
        func_001A4778();
}
