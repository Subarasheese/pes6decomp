/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* This compiler ships no headers: va_list and va_start as gcc 2.9x's va-mips.h defines them for
   the EABI without double-precision FP registers (a pointer into the saved argument registers). */
typedef char *va_list;
#define va_start(ap, last)                                    \
    (ap = (va_list)__builtin_next_arg(last) -                 \
          (__builtin_args_info(2) >= 8 ? 0 : (8 - __builtin_args_info(2)) * 8))

extern int func_00107EE0();
extern int func_0010F420(void);
extern void func_0010F470(void);
extern int func_00107148(int (*)(), void *, unsigned int, const char *, va_list);

void func_001080C8(const char *fmt, ...)
{
    int ctx;
    va_list args;
    int state;

    ctx = 0;
    state = func_0010F420();
    va_start(args, fmt);
    func_00107148(func_00107EE0, &ctx, 0xFFFFFFFF, fmt, args);
    if (state)
        func_0010F470();
}
