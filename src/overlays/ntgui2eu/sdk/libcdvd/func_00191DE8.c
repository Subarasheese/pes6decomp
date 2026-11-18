/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_005C8DD0,D_005C8E10,D_005C8E00;
extern volatile int D_005C8DF0;
extern char D_005FEBB8[],D_005FEB80[],D_005FEBA0[];
extern int D_011FD490,D_005CA840;
struct Cl { char pad[36]; int server; };
extern struct Cl D_011FD450;
void func_00190DE8(void);
int func_00191BD0(int);
void func_0019B140(int);
int func_0019B170(int);
void func_0019DBD0(const char *,...);
void func_0019E3F8(void *,int);
void func_0019E4A8(int);
int func_0019EC50(void *,int,int);
int func_0019EE30(void *,int,int,void *,int,void *,int,void *,void *);
int func_001A4728(void);
int func_001A4778(void);
int func_00191DE8(int mode) {
 int i,j,r;
 if(D_005C8DD0>0) func_0019DBD0(D_005FEBB8);
 func_00190DE8();
 if(D_005C8DF0!=func_0019B170(D_005C8DF0)) return mode!=8?6:-1;
 func_0019E4A8(0);
 i=0;
 if(D_005C8E10<0) {
  for(;;) {
   if(func_0019EC50(&D_011FD450,0x8000059C,0)<0) {
    if(D_005C8DD0>0) func_0019DBD0(D_005FEB80);
    for(j=0x100000;j!=-1;j--);
    continue;
   }
   if(D_011FD450.server) { D_005C8E10=0; break; }
   if(i>=17) {
    func_0019B140(D_005C8DF0);
    return func_00191BD0(mode);
   }
   for(j=0x100000;j!=-1;j--);
   i++;
  }
 }
 r=func_001A4728();
 D_005C8E00=0;
 if(r) func_001A4778();
 D_011FD490=mode;
 func_0019E3F8(&D_011FD490,4);
 if(func_0019EE30(&D_011FD450,0,0,&D_011FD490,4,&D_005CA840,4,0,0)<0) {
  func_0019B140(D_005C8DF0);
  return mode!=8?6:-1;
 }
 if(D_005C8DD0>0) func_0019DBD0(D_005FEBA0);
 r=*(int *)((unsigned)&D_005CA840|0x20000000);
 func_0019B140(D_005C8DF0);
 return r;
}
