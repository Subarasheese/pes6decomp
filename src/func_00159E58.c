/* compiler: ee-gcc-2.96-G0 */
extern volatile int D_00378078;
extern int D_00378070;

void func_00159E58(void) {
    volatile int *count = &D_00378078;

    *count = *count - 1;
    if (*count == 0) {
        D_00378070 = 0;
    }
}
