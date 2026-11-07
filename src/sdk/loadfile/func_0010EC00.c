/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef void (*Handler)(int);

extern Handler D_003716F0[];
extern void func_0010F300(int sig);
extern void func_00105010(int sig, void (*f)(int));
extern void func_00105020(int sig, void (*f)(int));

Handler func_0010EC00(int sig, Handler h)
{
    Handler old;

    if ((unsigned int)(sig - 1) >= 13)
        return (Handler)0xFFFFFFFF;
    old = D_003716F0[sig];
    D_003716F0[sig] = h;
    if ((unsigned int)(sig - 1) < 3)
        func_00105010(sig, func_0010F300);
    else
        func_00105020(sig, func_0010F300);
    return old;
}
