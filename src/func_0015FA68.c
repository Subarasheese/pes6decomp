/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from 3s-decomp (src/anniversary/cri/libadxe/adx_mps2.c). */
typedef unsigned int u_int;
typedef signed int Sint32;
Sint32 SVM_SetCbSvr(Sint32, Sint32 (*)(void*), void*);
void SVM_SetCbSvrId(Sint32, Sint32, Sint32 (*)(void*), void*);
struct ThreadParam {
    int status;
    void (*entry)(void*);
    void* stack;
    int stackSize;
    void* gpReg;
    int initPriority;
    int currentPriority;
    u_int attr;
    u_int option;
    int waitType;
    int waitId;
    int wakeupCount;
};
int func_00105260(int, struct ThreadParam*);
int SuspendThread(int);
extern Sint32 (*adxm_old_cbf)(Sint32 arg);
Sint32 func_0015FA68(Sint32 tid);
void adxm_goto_svr_border(Sint32 tid, Sint32 priority);
Sint32 func_0015FA68(Sint32 tid) {
    struct ThreadParam param;
    Sint32 ret = 0;
    if (tid != 0) {
        func_00105260(tid, &param);
        if ((param.status != 0x08) && (param.status != 0x0c)) {
            ret = SuspendThread(tid);
        }
    }
    return ret;
}