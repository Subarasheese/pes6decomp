/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef unsigned int u32;

extern "C" u32 *func_0010F540(u32 *p, u32 *end, u32 v) {
    while (*p != v && p < end)
        p++;
    return p < end ? p : 0;
}
