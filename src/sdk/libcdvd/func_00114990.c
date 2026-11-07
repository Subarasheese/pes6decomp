/* compiler: ee-gcc-2.9-as210-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
extern int D_00372B80;
extern volatile int _sceCd_ncmd_semid;
extern volatile int sceCdCbfunc_num;
extern volatile int _sceCd_c_cb_sem;
extern char D_00373C50[];
int func_00113CE0(void);
int func_00113B88(int);
void sceSifWriteBackDCache(void *,int);
void func_00105380(int);
void _sceCd_cd_callback(void);
int sceSifCallRpc(void *,int,int,void *,int,void *,int,void *,void *);
int func_00114990(unsigned int arg0) {
 int *send=&D_00372B80;
 if (func_00113CE0()==6) return 0;
 if (!func_00113B88(9)) return 0;
 D_00372B80=arg0;
 sceSifWriteBackDCache(send,4);
 sceCdCbfunc_num=4;
 _sceCd_c_cb_sem=1;
 if(sceSifCallRpc(D_00373C50,5,1,send,4,0,0,_sceCd_cd_callback,&sceCdCbfunc_num)<0) {
 sceCdCbfunc_num=0;
 _sceCd_c_cb_sem=0;
 func_00105380(_sceCd_ncmd_semid);
 return 0;
 }
 return 1;
}
