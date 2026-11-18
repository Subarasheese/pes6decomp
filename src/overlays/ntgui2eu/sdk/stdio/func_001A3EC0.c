/* compiler: ee-gcc-2.9-G0 */
/* Shared Sony SDK/runtime code; source ported from the GT4 decompilation (same SDK). */
struct Buf { int size,result; char name[252]; char args[252]; };
extern struct Buf D_01204D00;
extern int D_01204F00;
int func_001A36E8(void),func_001A37E8(void);
char *func_001B08E8(char *,const char *,unsigned int);
void *func_001AE624(void *,const void *,unsigned int);
int func_0019EE30(void *,int,int,void *,int,void *,int,void *,void *);
int func_001A3EC0(const char *name,int arglen,const void *args,int *result,int fno) {
    if(func_001A36E8()<0) return -0x10000;
    if(func_001A37E8()) return -0x10004;
    func_001B08E8(D_01204D00.name,name,252);
    D_01204D00.name[251]=0;
    if(args) {
        if(arglen>252) {
            __builtin_memcpy(D_01204D00.args,args,252);
            D_01204D00.size=252;
        } else {
            func_001AE624(D_01204D00.args,args,arglen);
            D_01204D00.size=arglen;
        }
    } else {
        D_01204D00.args[0]=0;
        D_01204D00.size=0;
    }
    if(func_0019EE30(&D_01204F00,fno,0,&D_01204D00,512,&D_01204D00,8,0,0)<0) return -0x10001;
    { int ret=D_01204D00.size;
    *result=D_01204D00.result;
    return ret; }
}
