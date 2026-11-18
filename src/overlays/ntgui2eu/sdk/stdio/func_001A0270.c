/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Slot { int fd,flags,a,b; };
struct Req { int sema; int *result; int size,flags,mode; char name[1024]; int slot; };
struct Sema { int attr,max,init,a,b; char *name; };
extern struct Req D_01203340;
extern struct Slot D_01204840[32];
extern char D_01204A40[],D_01203F80[],D_00600570[];
extern int D_005CABE4,D_005CABF0;
int func_0019FC48(int);
void func_0019FC78(void);
int func_0019FD70(void),func_0019FF78(void);
struct Slot *func_0019F650(void);
int func_0019B120(struct Sema *);
int func_0019B130(int);
int func_0019B160(int),func_0019B140(int);
int func_0019F6D8(void *,int,int,void *,int,void *,int,int,int,int);
int func_001A0270(const char *name,int flags,...) {
    struct Req *req=&D_01203340;
    char *args;
    struct Sema sp;
    int result;
    struct Slot *slot;
    int i, idx, sema, reply, mode;
    func_0019FC48(0);
    if (!D_005CABE4) func_0019FD70();
    if (func_0019FF78()) { func_0019FC78(); return -0x10004; }
    slot=func_0019F650();
    if (!slot) { func_0019FC78(); return -19; }
    args=(char *)__builtin_next_arg(flags) - (__builtin_args_info(2)>=8 ? 0 : (8-__builtin_args_info(2))*8);
    mode=*(int *)args;
    for (i=0; i<1024; i++) {
        char *dst=(char *)req+i;
        if ((*(dst+20)=name[i])==0) break;
    }
    if (i==1024) req->name[1023]=0;
    idx=slot-D_01204840;
    req->flags=flags&0x7fffffff;
    req->mode=mode;
    sp.max=1;
    sp.name=D_00600570;
    req->slot=idx;
    sp.init=0;
    sema=func_0019B120(&sp);
    req->result=&result;
    req->sema=sema;
    req->size=4;
    if (func_0019F6D8(D_01204A40,0,0,&D_01203340,0x418,D_01203F80,4,0,0,0)<0) {
        func_0019B130(sema); func_0019FC78(); return -11;
    }
    reply=*(int *)((unsigned int)D_01203F80|0x20000000);
    func_0019FC78();
    if (!reply) { func_0019B130(sema); return -11; }
    func_0019B160(sema);
    func_0019B130(sema);
    if (result<0) {
        func_0019B160(D_005CABF0);
        slot->flags=0;
        func_0019B140(D_005CABF0);
        return result;
    }
    reply=idx;
    func_0019B160(D_005CABF0);
    { int old=slot->flags; int fd=result;
    slot->fd=fd;
    slot->flags=old|flags; }
    func_0019B140(D_005CABF0);
    return reply;
}
