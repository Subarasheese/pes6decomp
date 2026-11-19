/* compiler: ee-gcc-2.9 */
extern void func_0015B038(void *, int);

void func_0015B0A8(char *list) {
    int count = *(int *)(list + 0xC);

    func_0015B038(list, count - 1);
}
