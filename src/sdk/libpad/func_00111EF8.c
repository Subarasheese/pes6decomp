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
extern PadSlot D_003F3250[2][4];
extern void *memcpy(void *, const void *, int);
extern void func_00111D48(int, int, void *);
int func_00111EF8(int port, int slot, void *dst) {
    PadData out;
    if (D_003F3250[port][slot].open == 0) {
        return 0;
    }
    func_00111D48(port, slot, &out);
    memcpy(dst, &out, ((int *)(&out))[0x18]);
    return ((int *)(&out))[0x18];
}
