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
extern struct Packet D_01204F40;
extern void func_001A68B0(int, int);
extern void func_0019B3F0(void);
extern u32 func_0019B530(int);
extern void func_0019B520(u32, u32);
extern int func_0019B4E0(struct Dma *, int);
extern void func_0019E3F8(void *, int);
int func_001A4448(char *arguments, int mode) {
    struct Dma transfer;
    u32 destination;
    int length;
    func_001A68B0(0,0);
    func_001A68B0(1,0);
    func_0019B3F0();
    destination=func_0019B530(0x80000000);
    D_01204F40.mode=mode;
    for(length=0; arguments[length]; ++length)
        D_01204F40.arguments[length]=arguments[length];
    D_01204F40.destination=0;
    D_01204F40.argument_length=length;
    D_01204F40.command=0x80000003;
    D_01204F40.data_size=0;
    D_01204F40.size=104;
    transfer.source=&D_01204F40;
    transfer.destination=destination;
    transfer.size=104;
    transfer.attributes=0x44;
    func_0019E3F8(&D_01204F40,104);
    func_0019B520(4,0x40000);
    if(func_0019B4E0(&transfer,1)) {
        func_0019B520(4,0x10000);
        func_0019B520(4,0x20000);
        func_0019B520(0x80000002,0);
        func_0019B520(0x80000000,0);
        return 1;
    }
    return 0;
}
