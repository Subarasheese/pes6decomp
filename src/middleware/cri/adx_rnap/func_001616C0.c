/* compiler: ee-gcc-2.96-G0 */
extern volatile int D_00383278;
extern char D_00383280[];
void func_001C48E8(void *, int, int);

void func_001616C0(void) {
    volatile int *count = &D_00383278;

    *count = *count - 1;
    if (*count == 0) {
        func_001C48E8(D_00383280, 0, 0xA80);
    }
}
