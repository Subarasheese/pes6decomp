/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern void func_00105410(unsigned int *status);
extern void func_00105400(unsigned int *status);

int func_0010F798(void)
{
    unsigned int st[2];

    func_00105410(&st[0]);
    st[1] = (st[0] & ~0xE000) | 0x2000;
    func_00105400(&st[1]);
    func_00105410(&st[1]);
    func_00105400(&st[0]);
    return ((st[1] >> 13) & 7) == 0;
}
