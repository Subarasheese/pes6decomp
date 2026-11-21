/* compiler: ee-gcc-2.9-G0 */
/* Adapted from gt4-decomp, src/libstream/unit_0057A128/func_0058F580.cpp.
 * MIT licence. See THIRD_PARTY.md. */
typedef unsigned char u8;
extern const char *D_005CAA10[];
extern u8 D_005FF250;
char *func_001B02B0(char *, const char *);
void func_00194D60(unsigned idx, u8 *out) {
    if (idx < 4) {
        func_001B02B0((char *)out, D_005CAA10[idx]);
        return;
    }
    *out = D_005FF250;
}
