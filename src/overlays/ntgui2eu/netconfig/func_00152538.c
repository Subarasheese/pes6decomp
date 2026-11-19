/* compiler: ee-gcc-2.9 */
extern void func_001524C0(void *, int);

void func_00152538(char *list) {
    int count = *(int *)(list + 0xC);

    func_001524C0(list, count - 1);
}
