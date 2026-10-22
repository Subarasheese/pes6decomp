/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned char u8;
extern const char *D_00372A00[];
extern u8 D_003C4070;
extern "C" char *func_001C7F58(char *, const char *);
extern "C" void func_00112130(unsigned idx, u8 *out) {
    if (idx < 4) {
        func_001C7F58((char *)out, D_00372A00[idx]);
        return;
    }
    *out = D_003C4070;
}
