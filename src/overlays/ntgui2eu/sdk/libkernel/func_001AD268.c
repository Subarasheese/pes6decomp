/* compiler: ee-gcc-2.96 */
/* This NTGUI2EU runtime copy also appears at 0011F4C8 in SLES-542.03. */
extern int func_001AD550();
void func_001AD268(int a0, int a1, int a2, int a3) {
    int buf[4];
    buf[0] = a0;
    buf[1] = a1;
    buf[2] = a2;
    buf[3] = a3;
    func_001AD550(buf, a1, a2, a3);
}
