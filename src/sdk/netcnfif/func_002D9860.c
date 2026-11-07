/* compiler: ee-gcc-2.9-G0 */
/* Byte-identical to a GT4 function; source ported from the GT4 decompilation
 * (MIT, see THIRD_PARTY.md). Names here do not identify PES6 behavior. */
typedef unsigned char u8;

typedef struct {
    unsigned int word;
    u8 flags;
} Status;

extern u8 D_003B31D7;

int func_002D9600(void);
void func_00105410(Status *st);
int func_00105670(u8 *p, int a, int b);

int func_002D9860(void)
{
    Status st;
    int ret;

    if (func_002D9600()) {
        ret = D_003B31D7;
    } else {
        func_00105410(&st);
        if (((st.word >> 13) & 7) == 0) {
            ret = 0;
        } else {
            func_00105670(&st.flags, 1, 1);
            ret = (st.flags >> 5) & 1;
        }
    }
    return ret;
}
