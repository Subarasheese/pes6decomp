/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef int s32;
typedef unsigned int u32;

extern s32 D_00371A10[];
extern s32 D_00371A08;
extern char D_0010F540[];
extern char D_0010F508[];

extern "C" s32 func_0010F580(s32, s32, s32);
extern "C" void func_0010F6C8(s32, s32);

extern "C" void func_0010F5C8(void) {
    s32 *g = D_00371A10;
    s32 s3;
    s32 s2;
    u32 s1;
    u32 s0;

    func_0010F6C8(g[0], g[1]);
    func_0010F6C8(g[2], g[3]);

    s3 = func_0010F580(0x80000000, 0x80080000, (s32)D_0010F540);
    s1 = (u32)s3 - 0x20C;
    s2 = func_0010F580(0x80000000, 0x80080000, (s32)D_0010F508);
    s0 = (u32)s2 - 0x168;

    if (s1 != s0) {
        do {
            if (s1 < s0) {
                s3 = func_0010F580(s3 + 4, 0x80080000, (s32)D_0010F540);
                s1 = (u32)s3 - 0x20C;
            } else {
                s2 = func_0010F580(s2 + 4, 0x80080000, (s32)D_0010F508);
                s0 = (u32)s2 - 0x168;
            }
        } while (s1 != s0);
    }

    D_00371A08 = (s32)s1;
}
