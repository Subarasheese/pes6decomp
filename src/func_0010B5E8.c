/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;
struct Sema { int a,max,init,d,e; const char *opt; };
struct Blk { int sema; int *res; int n8; int fd,request; char data[0x400]; void *buf; u32 buflen,arglen; };
struct Entry { int fd,used; };
extern struct Blk D_003EDD00;
extern int D_0037138C;
extern char D_003EF400[],D_003EE940[],D_003C3D10[];
extern int func_00105360(struct Sema *);
extern void func_00105370(int);
extern int WaitSema(int);
extern void *func_001C4730(void *,const void *,u32);
extern void sceSifWriteBackDCache(void *,int);
extern u32 func_00109B50(int,int,int,int,int,int,int,int,int,int);
extern struct Entry *func_00109C40(u32);
extern int func_0010A0C0(int);
extern void func_0010A0F0(void),func_0010A1E8(void);
int func_0010B5E8(u32 fd,int request,const void *argp,u32 arglen,void *bufp,u32 buflen) {
 struct Blk *b=&D_003EDD00;
 struct Entry *e;
 int sema,res,ok;
 struct Sema sp;
 e=func_00109C40(fd);
 func_0010A0C0(0x1a);
 if(D_0037138C==0) func_0010A1E8();
 if(e==0 || e->used==0) { func_0010A0F0(); return -9; }
 if(arglen>0x400 || buflen>0x400) { func_0010A0F0(); return -22; }
 if(argp==0) b->arglen=0;
 else func_001C4730(b->data,argp,arglen);
 b->fd=e->fd; b->request=request; b->arglen=arglen;
 sp.max=1; sp.init=0; sp.opt=D_003C3D10;
 sema=func_00105360(&sp);
 b->buflen=buflen; b->res=&res; b->n8=4; b->buf=bufp; b->sema=sema;
 sceSifWriteBackDCache(&D_003EDD00,0x420);
 if((int)func_00109B50((int)D_003EF400,0x1a,0,(int)&D_003EDD00,0x420,(int)D_003EE940,4,0,0,0)<0) {
 func_00105370(sema); func_0010A0F0(); return -11; }
 ok=*(int *)((u32)D_003EE940|0x20000000);
 func_0010A0F0();
 if(ok==0) {func_00105370(sema); return -11;}
 WaitSema(sema); func_00105370(sema); return res;
}
