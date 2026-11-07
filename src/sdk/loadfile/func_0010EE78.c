/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int func_001057C0(void);
extern int func_001057D0(void);
extern long long func_0010EEB8(void);
long long func_0010EE78(void) {
    if (func_001057C0() == 0x02000000) {
        return func_0010EEB8();
    } else {
        return func_001057D0();
    }
}
