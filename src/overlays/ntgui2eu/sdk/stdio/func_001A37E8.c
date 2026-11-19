/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern char D_01204F28[];
extern char D_005CAB44[];
extern char *D_005CAC04;
int func_001AE590(const char *, const char *, int);

int func_001A37E8(void)
{
    char *b = D_005CAB44;
    char *a = D_01204F28;
    return func_001AE590(a, b, 4) && func_001AE590(a, D_005CAC04, 4) && func_001AE590(b, D_005CAC04, 4);
}
