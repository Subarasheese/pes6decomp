/* compiler: ee-gcc-2.9-G0 */
/* Byte-identical to a GT4 function; source ported from the GT4 decompilation
 * (MIT, see THIRD_PARTY.md). Names here do not identify PES6 behavior. */
typedef unsigned char u8;
extern "C" void func_002D9AA0(void *);
extern "C" void func_002D9B78(u8 *p) {
    if (p[3] == 0) {
        p[3] = 0x17;
        func_002D9AA0(p);
        return;
    }
    p[3]--;
}
