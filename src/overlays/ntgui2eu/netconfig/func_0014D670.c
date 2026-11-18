/* compiler: ee-gcc-2.9 */
extern void *D_011E09F0[];
extern void func_00165AC0(void *);
extern void func_00165AE0(void *);

void func_0014D670(int enabled) {
    if (enabled) {
        func_00165AC0(D_011E09F0[0]);
    } else {
        func_00165AE0(D_011E09F0[0]);
    }
}
