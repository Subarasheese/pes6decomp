/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from Persona4 (src/cri/re4/adx_bau_callbacks.c). */
/* ADX bank-input callback registration and dispatch. */
extern unsigned int D_00377008[];
extern unsigned int D_0037700C[];// FUN_004C3120
unsigned int func_004c3120(void);
// FUN_004C3128
unsigned int func_004c3128(unsigned int first, unsigned int second);


// FUN_004C3140
unsigned int func_00157B20(unsigned int value)
{
    void (*callback)(unsigned int, unsigned int) =
        (void (*)(unsigned int, unsigned int))D_00377008[0];
    if (callback != 0)
        callback(D_0037700C[0], value);
    return 0;
}
