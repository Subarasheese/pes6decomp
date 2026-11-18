/* compiler: ee-gcc-2.9 */
extern void *D_011E0AC8[];
extern void func_00165AC0(void *);
extern void func_00165AE0(void *);

void func_0014FEB0(int enabled) {
    if (enabled) {
        func_00165AC0(D_011E0AC8[0]);
    } else {
        func_00165AE0(D_011E0AC8[0]);
    }
}
