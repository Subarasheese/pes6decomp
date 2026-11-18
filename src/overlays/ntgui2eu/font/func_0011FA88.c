/* compiler: ee-gcc-2.9 */
extern void func_0011FA10(void *, int);

void func_0011FA88(char *list) {
    int count = *(int *)(list + 0xC);

    func_0011FA10(list, count - 1);
}
