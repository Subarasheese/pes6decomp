/* compiler: ee-gcc-2.9-G0 */
/* This NTGUI2EU runtime copy also appears at 0010F5C8 in SLES-542.03. */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
typedef int s32;
typedef unsigned int u32;

extern s32 D_005CAC10[];
extern s32 D_005CAC08;
extern char D_001A4848[];
extern char D_001A4810[];

extern "C" s32 func_001A4888(s32, s32, s32);
extern "C" void func_001A49D0(s32, s32);

extern "C" void func_001A48D0(void) {
    s32 *g = D_005CAC10;
    s32 s3;
    s32 s2;
    u32 s1;
    u32 s0;

    func_001A49D0(g[0], g[1]);
    func_001A49D0(g[2], g[3]);

    s3 = func_001A4888(0x80000000, 0x80080000, (s32)D_001A4848);
    s1 = (u32)s3 - 0x20C;
    s2 = func_001A4888(0x80000000, 0x80080000, (s32)D_001A4810);
    s0 = (u32)s2 - 0x168;

    if (s1 != s0) {
        do {
            if (s1 < s0) {
                s3 = func_001A4888(s3 + 4, 0x80080000, (s32)D_001A4848);
                s1 = (u32)s3 - 0x20C;
            } else {
                s2 = func_001A4888(s2 + 4, 0x80080000, (s32)D_001A4810);
                s0 = (u32)s2 - 0x168;
            }
        } while (s1 != s0);
    }

    D_005CAC08 = (s32)s1;
}
