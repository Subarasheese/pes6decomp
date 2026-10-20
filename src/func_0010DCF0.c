/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef int s32;
extern s32 D_003713B0;
extern char D_003EF8E8[];
void func_001C48E8(char *a, s32 b, s32 c);
s32 func_0010DCF0(void) {
    D_003713B0 = -1;
    func_001C48E8(D_003EF8E8, 0, 4);
    return 0;
}
