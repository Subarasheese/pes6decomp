/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Slot { int fd,flags,a,b; };
struct Req { int sema; int *result; int size,flags,mode; char name[1024]; int slot; };
struct Sema { int attr,max,init,a,b; char *name; };
extern struct Req D_003EDD00;
extern struct Slot D_003EF200[32];
extern char D_003EF400[],D_003EE940[],D_003C3C80[];
extern int D_0037138C,D_00371398;
int func_0010A0C0(int);
void func_0010A0F0(void);
int func_0010A1E8(void),func_0010A3F0(void);
struct Slot *func_00109AC8(void);
int func_00105360(struct Sema *);
int func_00105370(int);
int WaitSema(int),func_00105380(int);
int func_00109B50(void *,int,int,void *,int,void *,int,int,int,int);
int func_0010A6E8(const char *name,int flags,...) {
    struct Req *req=&D_003EDD00;
    char *args;
    struct Sema sp;
    int result;
    struct Slot *slot;
    int i, idx, sema, reply, mode;
    func_0010A0C0(0);
    if (!D_0037138C) func_0010A1E8();
    if (func_0010A3F0()) { func_0010A0F0(); return -0x10004; }
    slot=func_00109AC8();
    if (!slot) { func_0010A0F0(); return -19; }
    args=(char *)__builtin_next_arg(flags) - (__builtin_args_info(2)>=8 ? 0 : (8-__builtin_args_info(2))*8);
    mode=*(int *)args;
    for (i=0; i<1024; i++) {
        char *dst=(char *)req+i;
        if ((*(dst+20)=name[i])==0) break;
    }
    if (i==1024) req->name[1023]=0;
    idx=slot-D_003EF200;
    req->flags=flags&0x7fffffff;
    req->mode=mode;
    sp.max=1;
    sp.name=D_003C3C80;
    req->slot=idx;
    sp.init=0;
    sema=func_00105360(&sp);
    req->result=&result;
    req->sema=sema;
    req->size=4;
    if (func_00109B50(D_003EF400,0,0,&D_003EDD00,0x418,D_003EE940,4,0,0,0)<0) {
        func_00105370(sema); func_0010A0F0(); return -11;
    }
    reply=*(int *)((unsigned int)D_003EE940|0x20000000);
    func_0010A0F0();
    if (!reply) { func_00105370(sema); return -11; }
    WaitSema(sema);
    func_00105370(sema);
    if (result<0) {
        WaitSema(D_00371398);
        slot->flags=0;
        func_00105380(D_00371398);
        return result;
    }
    reply=idx;
    WaitSema(D_00371398);
    { int old=slot->flags; int fd=result;
    slot->fd=fd;
    slot->flags=old|flags; }
    func_00105380(D_00371398);
    return reply;
}
