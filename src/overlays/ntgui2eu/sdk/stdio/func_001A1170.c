/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;
struct Sema { int a,max,init,d,e; const char *opt; };
struct Blk { int sema; int *res; int n8; int fd,request; char data[0x400]; void *buf; u32 buflen,arglen; };
struct Entry { int fd,used; };
extern struct Blk D_01203340;
extern int D_005CABE4;
extern char D_01204A40[],D_01203F80[],D_00600600[];
extern int func_0019B120(struct Sema *);
extern void func_0019B130(int);
extern int func_0019B160(int);
extern void *func_001AE624(void *,const void *,u32);
extern void func_0019E3F8(void *,int);
extern u32 func_0019F6D8(int,int,int,int,int,int,int,int,int,int);
extern struct Entry *func_0019F7C8(u32);
extern int func_0019FC48(int);
extern void func_0019FC78(void),func_0019FD70(void);
int func_001A1170(u32 fd,int request,const void *argp,u32 arglen,void *bufp,u32 buflen) {
 struct Blk *b=&D_01203340;
 struct Entry *e;
 int sema,res,ok;
 struct Sema sp;
 e=func_0019F7C8(fd);
 func_0019FC48(0x1a);
 if(D_005CABE4==0) func_0019FD70();
 if(e==0 || e->used==0) { func_0019FC78(); return -9; }
 if(arglen>0x400 || buflen>0x400) { func_0019FC78(); return -22; }
 if(argp==0) b->arglen=0;
 else func_001AE624(b->data,argp,arglen);
 b->fd=e->fd; b->request=request; b->arglen=arglen;
 sp.max=1; sp.init=0; sp.opt=D_00600600;
 sema=func_0019B120(&sp);
 b->buflen=buflen; b->res=&res; b->n8=4; b->buf=bufp; b->sema=sema;
 func_0019E3F8(&D_01203340,0x420);
 if((int)func_0019F6D8((int)D_01204A40,0x1a,0,(int)&D_01203340,0x420,(int)D_01203F80,4,0,0,0)<0) {
 func_0019B130(sema); func_0019FC78(); return -11; }
 ok=*(int *)((u32)D_01203F80|0x20000000);
 func_0019FC78();
 if(ok==0) {func_0019B130(sema); return -11;}
 func_0019B160(sema); func_0019B130(sema); return res;
}
