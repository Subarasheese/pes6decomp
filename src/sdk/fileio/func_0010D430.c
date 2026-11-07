/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;
struct Sema { int a,max,init,d,e; const char *opt; };
struct Blk { int sema; int *res; int n8; u32 size; void *buf; char path[0x400]; };
extern struct Blk D_003EDD00;
extern int D_0037138C;
extern char D_003EF400[], D_003EE940[], D_003C3E78[];
extern int func_00105360(struct Sema *);
extern void func_00105370(int);
extern int WaitSema(int);
extern void sceSifWriteBackDCache(void *,int);
extern u32 func_00109B50(int,int,int,int,int,int,int,int,int,int);
extern int func_0010A0C0(int);
extern void func_0010A0F0(void),func_0010A1E8(void);
int func_0010D430(const char *path, void *buf, u32 size) {
 struct Blk *b=&D_003EDD00;
 int i,sema,res,ok;
 struct Sema sp;
 func_0010A0C0(0x11);
 if (D_0037138C==0) func_0010A1E8();
 for(i=0;i<0x400;i++) { if((b->path[i]=path[i])==0) break; }
 if(i==0x400) b->path[0x3ff]=0;
 if(size>=0x400) size=0x3ff;
 b->buf=buf; b->size=size;
 sceSifWriteBackDCache(buf,size);
 sp.max=1; sp.opt=D_003C3E78; sp.init=0;
 sema=func_00105360(&sp);
 b->res=&res; b->sema=sema; b->n8=4;
 if((int)func_00109B50((int)D_003EF400,0x19,0,(int)&D_003EDD00,0x80c,(int)D_003EE940,4,0,0,0)<0) {
 func_00105370(sema); func_0010A0F0(); return -11; }
 ok=*(int *)((u32)D_003EE940|0x20000000);
 func_0010A0F0();
 if(ok==0) { func_00105370(sema); return -11; }
 WaitSema(sema); func_00105370(sema); return res;
}
