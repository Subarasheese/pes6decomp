extern int func_00105100();
void func_00105FE0(int a0, int a1, int a2, int a3) {
    func_00105100(a0, a1, a2, a3);
    __asm__ __volatile__("sync");
}
