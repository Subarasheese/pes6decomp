/* compiler: ee-gcc-2.96-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef int s32;

extern "C" void _sceSifLoadModule(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);

extern "C" void func_0010E580(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    _sceSifLoadModule(arg0, arg1, arg2, arg3, 0);
}
