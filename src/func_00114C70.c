/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_00373C80[2];
extern int D_00372AAC;
extern char D_00374600[];
int func_00113E88(int);
void func_00105380(int);
int sceSifCallRpc(void *,int,int,void *,int,void *,int,void *,void *);
int func_00114C70(int *a) {
 int *buf;
 int r;
 if(!func_00113E88(33)) return 0;
 buf=D_00373C80;
 if(sceSifCallRpc(D_00374600,33,0,0,0,buf,8,0,0)<0) {
 func_00105380(D_00372AAC); return 0;
 }
 *a=*(int *)((unsigned int)(buf+1)|0x20000000);
 r=*(int *)((unsigned int)buf|0x20000000);
 func_00105380(D_00372AAC);
 return r;
}
