/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;
struct Handler { void (*fn)(void); void *arg; int pad; };
struct Cmd { void *packet,*unused; void *iop; struct Handler *sys; int nsys; struct Handler *usr; int nusr; int *regs; };
struct Packet { int hdr[3]; int zero; void *buf; };
extern int D_003712F8,D_003EC254;
extern char D_003EC180[],D_003EC200[];
extern struct Cmd D_003EC258;
extern struct Handler D_003EC280[32];
extern int D_003EC400[32];
extern struct Packet D_003EC240;
int DIntr(void),EIntr(void);
void FlushCache(int),func_00105740(void);
int func_00105070(int,void (*)(void),int);
int func_00105F78(int),func_00105770(unsigned int);
int func_00105760(int,int);
int sceSifSendCmd(int,void *,int,int,int,int);
void func_00108168(void),func_00108148(void),func_00108728(void);
void func_001081C0(void) {
    struct Cmd *c;
    struct Handler *h;
    int i,addr;
    void *p1,*p2;
    struct Cmd *cmd;
    DIntr();
    if(D_003712F8) { EIntr(); return; }
    p2=(void *)((u32)D_003EC180|0x20000000);
    p1=(void *)((u32)D_003EC200|0x20000000);
    D_003712F8=1;
    D_003EC258.packet=p2;
    D_003EC258.unused=p1;
    D_003EC258.iop=0;
    D_003EC258.sys=D_003EC280;
    D_003EC258.nsys=32;
    D_003EC258.usr=0;
    D_003EC258.nusr=0;
    D_003EC258.regs=D_003EC400;
    h=D_003EC280;
    do { h->fn=0; h->arg=0; h++; } while((int)h<(int)(D_003EC280+32));
    for(i=31;i>=0;i--) D_003EC400[i]=0;
    c=&D_003EC258;
    i=32;
    D_003EC280[0].fn=func_00108168;
    D_003EC280[0].arg=c;
    D_003EC280[1].fn=func_00108148;
    D_003EC280[1].arg=c;
    EIntr();
    FlushCache(0);
    if(*(volatile int *)0x1000e010&32) *(volatile int *)0x1000e010=i;
    if(!(*(volatile int *)0x1000c000&0x100)) func_00105740();
    D_003EC254=func_00105070(5,func_00108728,0);
    func_00105F78(5);
    addr=func_00105770(0x80000000);
    c->iop=(void *)addr;
    if(addr) {
        D_003EC240.buf=D_003EC180;
        sceSifSendCmd(0x80000000,&D_003EC240,20,0,0,0); return;
    }
    while(!(func_00105770(4)&0x20000)) {}
    addr=func_00105770(2);
    cmd=&D_003EC258;
    cmd->iop=(void *)addr;
    func_00105760(0x80000000,addr);
    func_00105760(0x80000001,(int)cmd);
    D_003EC240.buf=D_003EC180;
    D_003EC240.zero=0;
    sceSifSendCmd(0x80000002,&D_003EC240,20,0,0,0);
}
