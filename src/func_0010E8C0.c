/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
/* SIF reboot command. Layout follows the packet fields and DMA descriptor in
 * the executable; names are provisional pending SDK header identification. */
typedef unsigned int u32;
struct Packet {
    unsigned long long size:8;
    unsigned long long data_size:24;
    unsigned long long destination:32;
    u32 command, option;
    int argument_length, mode;
    char arguments[80];
};
struct Dma { void *source; u32 destination; int size, attributes; };
extern struct Packet D_003EF900;
extern void func_001115A8(int, int);
extern void func_00105630(void);
extern u32 func_00105770(int);
extern void func_00105760(u32, u32);
extern int sceSifSetDma(struct Dma *, int);
extern void sceSifWriteBackDCache(void *, int);
int func_0010E8C0(char *arguments, int mode) {
    struct Dma transfer;
    u32 destination;
    int length;
    func_001115A8(0,0);
    func_001115A8(1,0);
    func_00105630();
    destination=func_00105770(0x80000000);
    D_003EF900.mode=mode;
    for(length=0; arguments[length]; ++length)
        D_003EF900.arguments[length]=arguments[length];
    D_003EF900.destination=0;
    D_003EF900.argument_length=length;
    D_003EF900.command=0x80000003;
    D_003EF900.data_size=0;
    D_003EF900.size=104;
    transfer.source=&D_003EF900;
    transfer.destination=destination;
    transfer.size=104;
    transfer.attributes=0x44;
    sceSifWriteBackDCache(&D_003EF900,104);
    func_00105760(4,0x40000);
    if(sceSifSetDma(&transfer,1)) {
        func_00105760(4,0x10000);
        func_00105760(4,0x20000);
        func_00105760(0x80000002,0);
        func_00105760(0x80000000,0);
        return 1;
    }
    return 0;
}
