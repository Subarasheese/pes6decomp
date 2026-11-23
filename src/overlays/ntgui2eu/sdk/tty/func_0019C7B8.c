/* compiler: ee-gcc-2.9-G0 */
/* NTGUI TTY input, shared by the resident TTY implementation. Adapted from OpenRAC/rac5-sm-decomp
 * src/boot/sceTtyRead.c, originally from OpenRAC/rac4-decomp src/core/00128180.c. See
 * THIRD_PARTY.md. */
typedef struct {
    int size;
    volatile int count;
    unsigned char *readPtr;
} TtyQueue;
typedef struct {
    unsigned char pad0[0x18];
    TtyQueue *input;
} TtyInfo;
extern TtyInfo D_01201490;
extern void func_0019C468(TtyQueue *q);

int func_0019C7B8(char *buf, int n) {
    int i;

    for (i = 0; i < n; i++) {
        while (D_01201490.input->count == 0) {
        }
        buf[i] = *D_01201490.input->readPtr;
        func_0019C468(D_01201490.input);
        if (buf[i] == '\n' || buf[i] == '\r') {
            return i + 1;
        }
    }
    return i;
}
