/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Buf { int size,result; char name[252]; char args[252]; };
extern struct Buf D_003EF6C0;
extern int D_003EF8C0;
int _lf_bind(void),func_0010DC60(void);
char *func_001C8590(char *,const char *,unsigned int);
void *func_001C4730(void *,const void *,unsigned int);
int sceSifCallRpc(void *,int,int,void *,int,void *,int,void *,void *);
int _sceSifLoadModule(const char *name,int arglen,const void *args,int *result,int fno) {
    if(_lf_bind()<0) return -0x10000;
    if(func_0010DC60()) return -0x10004;
    func_001C8590(D_003EF6C0.name,name,252);
    D_003EF6C0.name[251]=0;
    if(args) {
        if(arglen>252) {
            __builtin_memcpy(D_003EF6C0.args,args,252);
            D_003EF6C0.size=252;
        } else {
            func_001C4730(D_003EF6C0.args,args,arglen);
            D_003EF6C0.size=arglen;
        }
    } else {
        D_003EF6C0.args[0]=0;
        D_003EF6C0.size=0;
    }
    if(sceSifCallRpc(&D_003EF8C0,fno,0,&D_003EF6C0,512,&D_003EF6C0,8,0,0)<0) return -0x10001;
    { int ret=D_003EF6C0.size;
    *result=D_003EF6C0.result;
    return ret; }
}
