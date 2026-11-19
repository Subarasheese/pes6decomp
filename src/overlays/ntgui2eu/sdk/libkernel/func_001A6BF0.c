/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef void (*Handler)(int);

extern Handler D_005CBEF8[];
extern void func_001A7300(int sig);
extern void func_0019ADD0(int sig, void (*f)(int));
extern void func_0019ADE0(int sig, void (*f)(int));

Handler func_001A6BF0(int sig, Handler h)
{
    Handler old;

    if ((unsigned int)(sig - 1) >= 13)
        return (Handler)0xFFFFFFFF;
    old = D_005CBEF8[sig];
    D_005CBEF8[sig] = h;
    if ((unsigned int)(sig - 1) < 3)
        func_0019ADD0(sig, func_001A7300);
    else
        func_0019ADE0(sig, func_001A7300);
    return old;
}
