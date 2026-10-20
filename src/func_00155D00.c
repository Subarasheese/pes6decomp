extern int func_001607F8();
void func_00155D00(int a0, int a1, int a2, int a3) {
    func_001607F8(0x0, a1, a2, a3);
    __asm__ __volatile__("sync");
    __asm__ __volatile__("ei");
}
