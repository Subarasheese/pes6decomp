/* compiler: ee-gcc-2.9-G0 */
/* Adapted from gt4-decomp, src/libstream/unit_0057A128/func_0058CF08.cpp.
 * MIT licence. See THIRD_PARTY.md. */
typedef int s32;
typedef unsigned int u32;
typedef unsigned char u8;

extern u8 D_005CAA52;
s32 func_00197218(void);
void func_0019B1D0(u32 *);

s32 func_001972D8(void) {
    u32 cfg[4];
    if (func_00197218() != 0)
        return D_005CAA52;
    func_0019B1D0(cfg);
    return (cfg[0] >> 1) & 3;
}
