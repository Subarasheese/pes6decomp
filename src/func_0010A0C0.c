/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef int s32;
extern s32 D_00371394;
void func_0010A068(void);
s32 WaitSema(s32);
s32 func_0010A0C0(void) {
    func_0010A068();
    WaitSema(D_00371394);
    return 0;
}
