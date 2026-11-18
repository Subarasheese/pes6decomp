/* compiler: ee-gcc-2.9 */
extern void func_00154B10(void *, int);

void func_00154B88(char *list) {
    int count = *(int *)(list + 0xC);

    func_00154B10(list, count - 1);
}
