extern int func_00105110();
void func_00106000(int a0, int a1, int a2, int a3) {
    func_00105110(a0, a1, a2, a3);
    __asm__ __volatile__("sync");
}
