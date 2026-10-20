/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef int s32;

extern "C" s32 func_001086E8(s32, s32, s32, s32, s32, s32);

extern "C" s32 func_00108FB8(s32 a, s32 b, s32 c, s32 d) {
    if (func_001086E8(0x80000008, d, 0x40, 0, 0, 0) != 0)
        return 0;
    return 0x800;
}
