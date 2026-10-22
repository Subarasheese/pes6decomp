/* compiler: mwcc-3.0.1b151 */
extern void (*D_003E9C9C)(void);

/* Call the hook at D_003E9C9C if one is installed. */
void func_00272800(void)
{
    void (*hook)(void) = D_003E9C9C;

    if (hook != 0) {
        hook();
    }
}
