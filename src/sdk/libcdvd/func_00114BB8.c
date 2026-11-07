/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern volatile int D_00372AAC;
extern volatile int sceCdCbfunc_num;
extern char D_00374600[];
extern int D_00373C80[];
int func_00113E88(int);
void func_00105380(int);
int sceSifCallRpc(void *,int,int,void *,int,void *,int,void *,void *);
int func_00114BB8(void) {
 int r;
 if(!func_00113E88(30)) return 0;
 sceCdCbfunc_num=8;
 if(sceSifCallRpc(D_00374600,22,0,0,0,D_00373C80,4,0,0)<0) {
 func_00105380(D_00372AAC);
 sceCdCbfunc_num=0;
 return 0;
 }
 sceCdCbfunc_num=0;
 r=*(int *)((unsigned int)D_00373C80|0x20000000);
 func_00105380(D_00372AAC);
 return r;
}
