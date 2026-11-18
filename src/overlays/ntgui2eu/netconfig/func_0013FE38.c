/* compiler: ee-gcc-2.9 */
extern void *D_011DA500[];
extern void func_00165AC0(void *);
extern void func_00165AE0(void *);

void func_0013FE38(int enabled) {
    if (enabled) {
        func_00165AC0(D_011DA500[0]);
    } else {
        func_00165AE0(D_011DA500[0]);
    }
}
