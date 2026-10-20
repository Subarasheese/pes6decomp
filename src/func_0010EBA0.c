/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef void (*Handler)(void);
extern Handler D_003716E8;
void func_0010F0C0(void);
int func_00105010(int code, void (*handler)(void));

Handler func_0010EBA0(Handler h)
{
    D_003716E8 = h;
    func_00105010(1, func_0010F0C0);
    func_00105010(2, func_0010F0C0);
    func_00105010(3, func_0010F0C0);
    return h;
}
