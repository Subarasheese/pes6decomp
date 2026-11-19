/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
int func_001A4728(void);
void func_001A4778(void);
void func_0019DA40(void);
void func_0019CCD0(void (*fn)(void), int *result, unsigned int mask, void *a, void *b);

void func_0019DB60(void *a, void *b)
{
    int result = 0;
    int state = func_001A4728();
    func_0019CCD0(func_0019DA40, &result, 0xFFFFFFFF, a, b);
    if (state)
        func_001A4778();
}
