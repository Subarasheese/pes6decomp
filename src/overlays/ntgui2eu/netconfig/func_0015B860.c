/* compiler: ee-gcc-2.9 */
extern void func_0015B7F0(void *, int);

void func_0015B860(char *list) {
    int count = *(int *)(list + 0xC);

    func_0015B7F0(list, count - 1);
}
