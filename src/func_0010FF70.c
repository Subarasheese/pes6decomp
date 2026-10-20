/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
int func_0010F420(void);
void func_0010F470(void);
void func_0010FD10(unsigned int);
int func_00110578(void);
void func_00110080(int);

int func_0010FF70(void)
{
    int s = func_0010F420();
    unsigned int v = *(volatile unsigned int *)0x10001010;
    if (v & 0x80) {
        if (s) func_0010F470();
        return 1;
    }
    func_0010FD10((v & ~0xC00) | 0x80);
    func_00110080(func_00110578());
    if (s) func_0010F470();
    return 0;
}
