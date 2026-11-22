/* compiler: ee-gcc-2.9-G0 */
/* Adapted from gt4-decomp, src/runtime/unit_0059BE80/func_005B9668.c.
 * MIT licence. See THIRD_PARTY.md. */
extern void func_0019B550(int, void *);
void func_001A6A20(int a, int b, int c) {
    int buf[8];
    buf[1] = b;
    buf[0] = a & 0xff;
    buf[2] = c;
    func_0019B550(0x20, buf);
}
