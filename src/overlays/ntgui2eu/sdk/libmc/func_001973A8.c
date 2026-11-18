/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned char u8;

typedef struct {
    unsigned int word;
    u8 flags;
} Status;

extern u8 D_005CAA53;

int func_00197218(void);
void func_0019B1D0(Status *st);
int func_0019B430(u8 *p, int a, int b);

int func_001973A8(void)
{
    Status st;
    int ret;

    if (func_00197218()) {
        ret = D_005CAA53;
    } else {
        func_0019B1D0(&st);
        if (((st.word >> 13) & 7) == 0) {
            ret = 0;
        } else {
            func_0019B430(&st.flags, 1, 1);
            ret = st.flags >> 6;
        }
    }
    return ret;
}
