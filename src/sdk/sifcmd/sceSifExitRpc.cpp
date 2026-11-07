/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef int s32;

extern "C" void sceSifExitCmd(void);
extern "C" s32 D_00371300;

extern "C" void sceSifExitRpc(void) {
    sceSifExitCmd();
    D_00371300 = 0;
}
