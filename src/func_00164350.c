/* compiler: ee-gcc-2.96-G0 */
int func_0016B308(int);

int func_00164350(int file, int *sectors) {
    int size = func_0016B308(file);
    int count = size / 2048;

    *sectors = count;
    if (size - count * 2048 > 0) {
        *sectors = count + 1;
    }
    return 1;
}
