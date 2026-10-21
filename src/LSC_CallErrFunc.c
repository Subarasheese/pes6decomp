/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/lsc_err.c). */
typedef char Char8;
void LSC_CallErrFunc(const Char8* format, ...);
extern int printf(const char* format, ...);
extern int func_001CD490(char* buf, const char* fmt, ...);
typedef char* va_list;
extern void (*D_00387958)(void*, Char8*);
extern void* D_0038795C;
extern Char8 D_00387960[0x100];
void LSC_CallErrFunc(const Char8* format, ...) {
    va_list args;
    (args = ((char*) __builtin_next_arg (format) - (__builtin_args_info (2) >= 8 ? 0 : (8 - __builtin_args_info (2)) * 8)));
    func_001CD490(D_00387960, format, args);
    if (D_00387958 != 0) {
        D_00387958(D_0038795C, D_00387960);
    }
}