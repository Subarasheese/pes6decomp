/* compiler: ee-gcc-2.9-G0 */
/* Adapted from a GT4 decompilation source via the PES6 resident code.
 * See THIRD_PARTY.md for the MIT attribution. */
typedef unsigned char u8;

typedef struct {
    unsigned int word;
    u8 flags;
} Status;

extern u8 D_005CAA57;

int func_00197218(void);
void func_0019B1D0(Status *st);
int func_0019B430(u8 *p, int a, int b);

int func_00197478(void)
{
    Status st;
    int ret;

    if (func_00197218()) {
        ret = D_005CAA57;
    } else {
        func_0019B1D0(&st);
        if (((st.word >> 13) & 7) == 0) {
            ret = 0;
        } else {
            func_0019B430(&st.flags, 1, 1);
            ret = (st.flags >> 5) & 1;
        }
    }
    return ret;
}
