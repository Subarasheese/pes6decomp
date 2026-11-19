/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
typedef unsigned int u32;
struct Sema { int a,max,init,d,e; const char *opt; };
struct Blk { int sema; int *res; int n8; char path[0x400]; char newname[0x400]; };
extern struct Blk D_01203340;
extern int D_005CABE4;
extern char D_01204A40[], D_01203F80[], D_00600750[];
extern int func_0019B120(struct Sema *);
extern void func_0019B130(int);
extern int func_0019B160(int);
extern u32 func_0019F6D8(int,int,int,int,int,int,int,int,int,int);
extern int func_0019FC48(int);
extern void func_0019FC78(void),func_0019FD70(void);
int func_001A2DC0(const char *path, const char *newname) {
 struct Blk *b=&D_01203340;
 int i,sema,res,ok;
 struct Sema sp;
 func_0019FC48(0x11);
 if (D_005CABE4==0) func_0019FD70();
 for(i=0;i<0x400;i++) { if((b->path[i]=path[i])==0) break; }
 if(i==0x400) b->path[0x3ff]=0;
 for(i=0;i<0x400;i++) { if((b->newname[i]=newname[i])==0) break; }
 if(i==0x400) b->newname[0x3ff]=0;
 sp.max=1; sp.opt=D_00600750; sp.init=0;
 sema=func_0019B120(&sp);
 b->res=&res; b->sema=sema; b->n8=4;
 if((int)func_0019F6D8((int)D_01204A40,0x18,0,(int)&D_01203340,0x80c,(int)D_01203F80,4,0,0,0)<0) {
 func_0019B130(sema); func_0019FC78(); return -11; }
 ok=*(int *)((u32)D_01203F80|0x20000000);
 func_0019FC78();
 if(ok==0) { func_0019B130(sema); return -11; }
 func_0019B160(sema); func_0019B130(sema); return res;
}
