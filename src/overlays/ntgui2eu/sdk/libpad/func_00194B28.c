/* compiler: ee-gcc-2.9-G0 */
/* OpenRAC/rac5-sm-decomp, src/boot/scePadRead.c (scePadRead). See THIRD_PARTY.md. */

typedef struct {
    unsigned char data[0x58];
    int frame;
    unsigned char pad5C[0x80 - 0x5C];
} PadData;
typedef struct {
    unsigned char pad0[0x10];
    int open;
    unsigned char pad14[0x1C - 0x14];
} PadSlot;
extern PadSlot D_011FD510[2][4];
extern void *func_001AE624(void *, const void *, int);
extern void func_00194978(int, int, void *);
int func_00194B28(int port, int slot, void *dst) {
    PadData out;
    if (D_011FD510[port][slot].open == 0) {
        return 0;
    }
    func_00194978(port, slot, &out);
    func_001AE624(dst, &out, ((int *)(&out))[0x18]);
    return ((int *)(&out))[0x18];
}
