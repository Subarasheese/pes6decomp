/* compiler: ee-gcc-2.9-G0 */
/* Byte-identical to a GT4 function; source ported from the GT4 decompilation
 * (MIT, see THIRD_PARTY.md). Names here do not identify PES6 behavior. */
typedef int s32;

extern char D_003B31D8[];
extern "C" void func_002D9590(void);

extern "C" s32 func_002D9600(void) {
    char *p = D_003B31D8;
    if (p[0] == 0) func_002D9590();
    return p[4] == 'T';
}
