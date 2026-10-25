/* compiler: ee-gcc-2.96-nsa-nosib-G0 */
void func_00162F28(int, int, int, int);
void func_00163000(int, int, int, int);

void func_00163118(int handle, int size) {
    if (size < 256) {
        func_00162F28(0, 0, 0, handle);
    } else {
        func_00163000(0, 0, 0, handle);
    }
}
