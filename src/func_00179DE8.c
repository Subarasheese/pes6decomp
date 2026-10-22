/* compiler: ee-gcc-2.96 */
/* CRI middleware code; source adapted from mk-deception (src/libadxgca/crimw/dev/adx/src/svm/svm.c). */
#ifndef MKD_CRI_SVM_H
#define MKD_CRI_SVM_H

#ifndef MKD_CRI_SVM_CALLBACKS_H
#define MKD_CRI_SVM_CALLBACKS_H

typedef int (*SVMServerFunction)(void* object);
typedef void (*SVMCallbackFunction)(void* object);
typedef void (*SVMErrorFunction)(void* object, char* message);

#endif

void SVM_Init(void);
void SVM_Finish(void);
int SVM_ExecSvrFs(void);
void SVM_Lock(void);
void SVM_Unlock(void);
void SVM_CallErr1(const char* message);
void SVM_CallErr(const char* message, ...);
unsigned int SVM_TestAndSet(int* value);
void func_00179DE8(int server_id);
void SVM_DelCbSvr(int server_type, int id);
int SVM_SetCbSvr(int server_type, SVMServerFunction function, void* object);
void SVM_SetCbSvrId(int server_type, int id, SVMServerFunction function,
                    void* object);
void SVM_SetCbUnlock(SVMCallbackFunction function, void* object);
void SVM_SetCbLock(SVMCallbackFunction function, void* object);
void SVM_SetCbErr(SVMErrorFunction function, void* object);
void SVM_SetCbBdr(int server_id, SVMCallbackFunction function, void* object);

#endif
#ifndef MKD_RUNTIME_CSTDIO_H
#define MKD_RUNTIME_CSTDIO_H

#ifndef MKD_RUNTIME_CSTDARG_H
#define MKD_RUNTIME_CSTDARG_H

typedef struct MkVaListState {
    signed char gpr;
    signed char fpr;
    unsigned short reserved;
    char* input_arg_area;
    char* reg_save_area;
} __va_list[1];

#define va_start(list, last_arg) __va_start(list, last_arg)
#define va_end(list) ((void)0)

void* __va_arg(__va_list args, int type);

#endif

#ifdef __cplusplus
extern "C" {
#endif

enum __ReadProcActions {
    __GetAChar,
    __UngetAChar,
    __TestForError,
};

typedef struct __InStrCtrl {
    char* NextChar;
    int NullCharDetected;
} __InStrCtrl;

int __StringRead(void* context, int character, int action);

int sprintf(char* output, const char* format, ...);
int vsprintf(char* output, const char* format, __va_list args);
int snprintf(char* output, unsigned long size, const char* format, ...);

#ifdef __cplusplus
}
#endif

#endif

#undef va_start
#define va_start(arguments, format) ((void)(format), __builtin_va_info(&(arguments)))

struct SVMServerCallback {
    SVMServerFunction function;
    void* object;
};

struct SVMCallback {
    SVMCallbackFunction function;
    void* object;
};

struct SVMErrorCallback {
    SVMErrorFunction function;
    void* object;
};extern const char* const svm_build;
extern volatile int svm_init_level;
extern volatile int svm_lock_level;
extern volatile int svm_locking_type;
extern struct SVMCallback svm_post_waitv_func;
extern struct SVMCallback svm_pre_waitv_func;
extern int (*svm_tas_fptr)(int* value);
extern char svmerr_msg[128];
extern struct SVMErrorCallback svm_err_func;
extern struct SVMCallback svm_unlock_func;
extern struct SVMCallback svm_lock_func;
extern struct SVMCallback D_00510F60[8];
extern struct SVMServerCallback D_00510FA0[8][6];
extern int svm_svr_exec_flag[8];
extern int svm_exec_cnt[8];
extern const char svm_unlock_error[];
extern const char svm_exec_id_error[];
extern const char svm_exec_type_error[];
void svm_itoa(int value, char* string, int length);
void SVM_SetCbWaitVsync(SVMCallbackFunction pre_function, void* pre_object,
                        SVMCallbackFunction post_function, void* post_object);
void SVM_SetCbTestAndSet(int (*function)(int* value));
void svm_call_err1(const char* message);
void svm_unlock(void);
void svm_lock(void);
void SVM_SetCbGotoSvrBorder(int server_type, SVMCallbackFunction function,
                            void* object);
int SVM_GetNumCbSvr(int server_type);
int svm_exec_svr(int server_type);
unsigned int SVM_TestAndSet(int* value);
void svm_clear(void);
void SVM_Finish(void);
void SVM_Init(void);
int SVM_ExecSvrMwIdle(void);
int SVM_ExecSvrMain(void);
int SVM_ExecSvrFs(void);
int SVM_ExecSvrVsync(void);
void SVM_SetCbUnlock(SVMCallbackFunction function, void* object);
void SVM_SetCbLock(SVMCallbackFunction function, void* object);
void SVM_SetCbErr(SVMErrorFunction function, void* object);


void func_00179DE8(int server_id)
{
    if (D_00510F60[server_id].function != 0) {
        D_00510F60[server_id].function(
            D_00510F60[server_id].object);
    }
}
void SVM_SetCbBdr(int server_id, SVMCallbackFunction function, void* object);
void SVM_SetCbSvrId(int server_type, int id, SVMServerFunction function,
                    void* object);
void SVM_DelCbSvr(int server_type, int id);
int SVM_SetCbSvr(int server_type, SVMServerFunction function, void* object);
void SVM_CallErr1(const char* message);
void SVM_CallErr(const char* message, ...);
void SVM_Unlock(void);
void SVM_Lock(void);
extern const char svm_space[];
