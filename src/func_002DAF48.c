extern int func_00105390();
void func_002DAF48(int a0, int a1, int a2, int a3) {
    func_00105390(a0, a1, a2, a3);
    __asm__ __volatile__("sync");
    __asm__ __volatile__("ei");
}
