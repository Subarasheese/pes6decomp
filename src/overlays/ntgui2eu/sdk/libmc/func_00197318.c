/* compiler: ee-gcc-2.9-G0 */
/* Adapted from a GT4 decompilation source via the PES6 resident code.
 * See THIRD_PARTY.md for the MIT attribution. */
typedef int s32;
typedef unsigned char u8;

extern u8 D_005CAA55;

s32 func_00197218(void);
void func_0019B1D0(s32 *buf);

s32 func_00197318(void) {
    s32 buf[4];
    if (func_00197218() != 0) {
        return D_005CAA55;
    }
    func_0019B1D0(buf);
    return buf[0] & 1;
}
