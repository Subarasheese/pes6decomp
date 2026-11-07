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
int func_00105270(int, struct ThreadParam*);
int func_00106228(int);
extern Sint32 (*adxm_old_cbf)(Sint32 arg);
void func_0015F948(Sint32 tid);
void adxm_goto_svr_border(Sint32 tid, Sint32 priority);
void func_0015F948(Sint32 tid) {
    struct ThreadParam param;
    if (tid != 0) {
        func_00105270(tid, &param);
        if ((param.status == 0x04) || (param.status == 0x0c)) {
            func_00106228(tid);
        }
    }
}