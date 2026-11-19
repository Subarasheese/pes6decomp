/* compiler: ee-gcc-2.9 */
extern void func_0012A6F8(void *, int);

void func_0012A770(char *list) {
    int count = *(int *)(list + 0xC);

    func_0012A6F8(list, count - 1);
}
