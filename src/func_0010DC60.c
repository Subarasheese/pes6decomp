/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern char D_003EF8E8[];
extern char D_003712DC[];
extern char *D_003713B4;
int func_001C4698(const char *, const char *, int);

int func_0010DC60(void)
{
    char *b = D_003712DC;
    char *a = D_003EF8E8;
    return func_001C4698(a, b, 4) && func_001C4698(a, D_003713B4, 4) && func_001C4698(b, D_003713B4, 4);
}
