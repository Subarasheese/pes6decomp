/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_00372A90,D_00372AD0,D_00372AC0;
extern volatile int D_00372AB0;
extern char D_003C42E8[],D_003C42B0[],D_003C42D0[];
extern int D_003F3850,D_00374500;
struct Cl { char pad[36]; int server; };
extern struct Cl D_003F3810;
void func_00113590(void);
int func_00114378(int);
void func_00105380(int);
int func_001053B0(int);
void printf(const char *,...);
void sceSifWriteBackDCache(void *,int);
void sceSifInitRpc(int);
int sceSifBindRpc(void *,int,int);
int sceSifCallRpc(void *,int,int,void *,int,void *,int,void *,void *);
int DIntr(void);
int EIntr(void);
int func_00114590(int mode) {
 int i,j,r;
 if(D_00372A90>0) printf(D_003C42E8);
 func_00113590();
 if(D_00372AB0!=func_001053B0(D_00372AB0)) return mode!=8?6:-1;
 sceSifInitRpc(0);
 i=0;
 if(D_00372AD0<0) {
  for(;;) {
   if(sceSifBindRpc(&D_003F3810,0x8000059C,0)<0) {
    if(D_00372A90>0) printf(D_003C42B0);
    for(j=0x100000;j!=-1;j--);
    continue;
   }
   if(D_003F3810.server) { D_00372AD0=0; break; }
   if(i>=17) {
    func_00105380(D_00372AB0);
    return func_00114378(mode);
   }
   for(j=0x100000;j!=-1;j--);
   i++;
  }
 }
 r=DIntr();
 D_00372AC0=0;
 if(r) EIntr();
 D_003F3850=mode;
 sceSifWriteBackDCache(&D_003F3850,4);
 if(sceSifCallRpc(&D_003F3810,0,0,&D_003F3850,4,&D_00374500,4,0,0)<0) {
  func_00105380(D_00372AB0);
  return mode!=8?6:-1;
 }
 if(D_00372A90>0) printf(D_003C42D0);
 r=*(int *)((unsigned)&D_00374500|0x20000000);
 func_00105380(D_00372AB0);
 return r;
}
