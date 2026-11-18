/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_005C9FC0[2];
extern int D_005C8DEC;
extern char D_005CA940[];
int func_001916E0(int);
void func_0019B140(int);
int func_0019EE30(void *,int,int,void *,int,void *,int,void *,void *);
int func_00192008(int *a) {
 int *buf;
 int r;
 if(!func_001916E0(33)) return 0;
 buf=D_005C9FC0;
 if(func_0019EE30(D_005CA940,33,0,0,0,buf,8,0,0)<0) {
 func_0019B140(D_005C8DEC); return 0;
 }
 *a=*(int *)((unsigned int)(buf+1)|0x20000000);
 r=*(int *)((unsigned int)buf|0x20000000);
 func_0019B140(D_005C8DEC);
 return r;
}
