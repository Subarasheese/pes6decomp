/* compiler: ee-gcc-2.9-G0 */
/* Source: devin-thomas/guilty-gear-x-plus, src/sdk/sce/libpad.c (scePadInfoPressMode). See
 * LICENSES/ggx-CC0.txt. */
typedef struct {
    void *dmaArea;
    int *cmdBuf;
    int *iopBuf;
    int dmaId;
    int opened;
    int pad14;
    int pad18;
} PadSlot;
extern PadSlot D_011FD510[2][4];
extern int func_00195358(int port, int slot);

int func_001954B8(int port, int slot) {
    if (D_011FD510[port][slot].opened == 0) {
        return 0;
    }
    return func_00195358(port, slot) == 0x3FFFF;
}
