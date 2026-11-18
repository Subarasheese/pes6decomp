/* compiler: ee-gcc-2.9 */
extern void func_00133C88(void *, int);

void func_00133CF8(char *list) {
    int count = *(int *)(list + 0xC);

    func_00133C88(list, count - 1);
}
