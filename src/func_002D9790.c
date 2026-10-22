/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned char u8;

typedef struct {
    unsigned int word;
    u8 flags;
} Status;

extern u8 D_003B31D3;

int func_002D9600(void);
void func_00105410(Status *st);
int func_00105670(u8 *p, int a, int b);

int func_002D9790(void)
{
    Status st;
    int ret;

    if (func_002D9600()) {
        ret = D_003B31D3;
    } else {
        func_00105410(&st);
        if (((st.word >> 13) & 7) == 0) {
            ret = 0;
        } else {
            func_00105670(&st.flags, 1, 1);
            ret = st.flags >> 6;
        }
    }
    return ret;
}
