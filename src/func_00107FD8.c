/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
int DIntr(void);
void EIntr(void);
void func_00107EB8(void);
void func_00107148(void (*fn)(void), int *result, unsigned int mask, void *a, void *b);

void func_00107FD8(void *a, void *b)
{
    int result = 0;
    int state = DIntr();
    func_00107148(func_00107EB8, &result, 0xFFFFFFFF, a, b);
    if (state)
        EIntr();
}
