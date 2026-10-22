/* compiler: mwcc-3.0.1b151 */
extern void (*D_005E2F60[])(void);

/* Call the hook at D_005E2F60 if one is installed. */
void func_002B9720(void)
{
    void (*hook)(void) = D_005E2F60[0];

    if (hook != 0) {
        hook();
    }
}
