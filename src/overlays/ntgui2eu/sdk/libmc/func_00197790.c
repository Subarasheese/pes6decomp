/* compiler: ee-gcc-2.9-G0 */
/* Adapted from gt4-decomp, src/libstream/unit_0057A128/func_0058D3C0.cpp.
 * MIT licence. See THIRD_PARTY.md. */
typedef unsigned char u8;
void func_001976B8(void *);
void func_00197790(u8 *p) {
    if (p[3] == 0) {
        p[3] = 0x17;
        func_001976B8(p);
        return;
    }
    p[3]--;
}
