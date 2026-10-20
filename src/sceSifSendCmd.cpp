/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef int s32;

extern "C" s32 _sceSifSendCmd(s32, s32, s32, s32, s32, s32, s32);

extern "C" s32 sceSifSendCmd(s32 a, s32 b, s32 c, s32 d, s32 e, s32 f) {
    return _sceSifSendCmd(a, 0, b, c, d, e, f);
}
