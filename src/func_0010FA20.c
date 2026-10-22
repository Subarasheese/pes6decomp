/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern char D_003C3F70[];
extern char *D_00371730;
extern char *func_0010F900(const char *, int, const char **);
extern void func_0010FA18(void);
extern int func_00104FB0(int, int, int, void *);
int func_0010FA20(int a, int b, int n, const char **v) {
    func_0010F900(D_003C3F70, n, v);
    func_0010FA18();
    return func_00104FB0(a, b, n, D_00371730 + 4);
}
