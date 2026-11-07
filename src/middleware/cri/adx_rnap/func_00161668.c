/* compiler: ee-gcc-2.96-G0 */
extern volatile int D_00383278;
extern char D_00383280[];
void func_00157E00(void);
void func_001C48E8(void *, int, int);

void func_00161668(void) {
    volatile int *count = &D_00383278;

    if (*count == 0) {
        func_00157E00();
        func_001C48E8(D_00383280, 0, 0xA80);
    }
    *count = *count + 1;
}
