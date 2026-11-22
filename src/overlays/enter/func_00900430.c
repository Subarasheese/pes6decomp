/* compiler: mwcc-3.0.1b210 */
extern void (*D_0092F0A8[])(void);

void func_00900430(void)
{
    void (*hook)(void) = D_0092F0A8[0];

    if (hook != 0) {
        hook();
    }
}
