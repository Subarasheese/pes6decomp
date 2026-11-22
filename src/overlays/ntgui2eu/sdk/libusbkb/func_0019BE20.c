/* compiler: ee-gcc-2.9-G0 */
/* Adapted from gt4-decomp, src/runtime/unit_0059BE80/func_005AE9A0.c.
 * MIT licence. See THIRD_PARTY.md. */
struct TopRequest {
    unsigned char mode;
    unsigned char data;
};

struct TopArg {
    int requestOut;
    int requestIn;
    struct TopRequest request[512];
};

extern int D_01200F70;
extern char D_00600208[]; /* "## internel error in libkernl.a!\n" */

int func_0019B160(int sema);
int func_0019AFD0(int thread);
int func_0019B050(int thread);
int func_0019B090(int thread);
void func_0019DC50(const char *fmt, ...);

/* topThread (thread.o): serves the thread requests queued from interrupt handlers. */
void func_0019BE20(struct TopArg *arg) {
    int index;

    while (1) {
        func_0019B160(D_01200F70);
        index = arg->requestOut & 0x1FF;
        arg->requestOut = index + 1;
        switch (arg->request[index].mode) {
        case 0:
            func_0019B050(arg->request[index].data);
            break;
        case 1:
            func_0019AFD0(arg->request[index].data);
            break;
        case 2:
            func_0019B090(arg->request[index].data);
            break;
        default:
            func_0019DC50(D_00600208);
            break;
        }
    }
}
