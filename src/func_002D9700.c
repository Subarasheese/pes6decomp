/* compiler: ee-gcc-2.9-G0 */
/* Byte-identical to a GT4 function; source ported from the GT4 decompilation
 * (MIT, see THIRD_PARTY.md). Names here do not identify PES6 behavior. */
typedef int s32;
typedef unsigned char u8;

extern u8 D_003B31D5;

s32 func_002D9600(void);
void func_00105410(s32 *buf);

s32 func_002D9700(void) {
    s32 buf[4];
    if (func_002D9600() != 0) {
        return D_003B31D5;
    }
    func_00105410(buf);
    return buf[0] & 1;
}
