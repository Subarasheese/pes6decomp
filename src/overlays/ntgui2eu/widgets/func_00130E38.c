/* compiler: ee-gcc-2.9 */
extern void func_00130DC8(void *, int);

void func_00130E38(char *list) {
    int count = *(int *)(list + 0xC);

    func_00130DC8(list, count - 1);
}
