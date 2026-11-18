/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;
struct Handler { void (*fn)(void); void *arg; int pad; };
struct Cmd { void *packet,*unused; void *iop; struct Handler *sys; int nsys; struct Handler *usr; int nusr; int *regs; };
struct Packet { int hdr[3]; int zero; void *buf; };
extern int D_005CAB58,D_01201894;
extern char D_012017C0[],D_01201840[];
extern struct Cmd D_01201898;
extern struct Handler D_012018C0[32];
extern int D_01201A40[32];
extern struct Packet D_01201880;
int func_001A4728(void),func_001A4778(void);
void func_0019B3A0(int),func_0019B500(void);
int func_0019AE30(int,void (*)(void),int);
int func_0019BD38(int),func_0019B530(unsigned int);
int func_0019B520(int,int);
int func_0019E230(int,void *,int,int,int,int);
void func_0019DCF0(void),func_0019DCD0(void),func_0019E2B0(void);
void func_0019DD48(void) {
    struct Cmd *c;
    struct Handler *h;
    int i,addr;
    void *p1,*p2;
    struct Cmd *cmd;
    func_001A4728();
    if(D_005CAB58) { func_001A4778(); return; }
    p2=(void *)((u32)D_012017C0|0x20000000);
    p1=(void *)((u32)D_01201840|0x20000000);
    D_005CAB58=1;
    D_01201898.packet=p2;
    D_01201898.unused=p1;
    D_01201898.iop=0;
    D_01201898.sys=D_012018C0;
    D_01201898.nsys=32;
    D_01201898.usr=0;
    D_01201898.nusr=0;
    D_01201898.regs=D_01201A40;
    h=D_012018C0;
    do { h->fn=0; h->arg=0; h++; } while((int)h<(int)(D_012018C0+32));
    for(i=31;i>=0;i--) D_01201A40[i]=0;
    c=&D_01201898;
    i=32;
    D_012018C0[0].fn=func_0019DCF0;
    D_012018C0[0].arg=c;
    D_012018C0[1].fn=func_0019DCD0;
    D_012018C0[1].arg=c;
    func_001A4778();
    func_0019B3A0(0);
    if(*(volatile int *)0x1000e010&32) *(volatile int *)0x1000e010=i;
    if(!(*(volatile int *)0x1000c000&0x100)) func_0019B500();
    D_01201894=func_0019AE30(5,func_0019E2B0,0);
    func_0019BD38(5);
    addr=func_0019B530(0x80000000);
    c->iop=(void *)addr;
    if(addr) {
        D_01201880.buf=D_012017C0;
        func_0019E230(0x80000000,&D_01201880,20,0,0,0); return;
    }
    while(!(func_0019B530(4)&0x20000)) {}
    addr=func_0019B530(2);
    cmd=&D_01201898;
    cmd->iop=(void *)addr;
    func_0019B520(0x80000000,addr);
    func_0019B520(0x80000001,(int)cmd);
    D_01201880.buf=D_012017C0;
    D_01201880.zero=0;
    func_0019E230(0x80000002,&D_01201880,20,0,0,0);
}
