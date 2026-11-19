/* compiler: ee-gcc-2.9 */
extern void func_00153060(void *, int);

void func_001530D8(char *list) {
    int count = *(int *)(list + 0xC);

    func_00153060(list, count - 1);
}
