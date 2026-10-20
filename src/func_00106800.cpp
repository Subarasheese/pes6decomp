/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef int s32;

extern "C" void func_00105790(s32 arg0, void *arg1);

extern "C" void func_00106800(s32 arg0) {
    s32 buf = arg0;
    func_00105790(-8, &buf);
}
