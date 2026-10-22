/* compiler: ee-gcc-2.96-G0 */
/* CRI middleware code; source adapted from mk-deception (src/libadxgca/crimw/dev/adx/src/svm/svm.c). */
typedef unsigned int size_t;
void *memset(void *, int, size_t);

typedef struct SVMCallback {
    void *func;
    void *object;
} SVMCallback;

extern int D_00396E38[8];       /* svm_svr_exec_flag */
extern SVMCallback D_00510FA0;  /* svm_lock_func */
extern SVMCallback D_00510FA8;  /* svm_unlock_func */
extern SVMCallback D_00510FC0;  /* svm_pre_waitv_func */
extern SVMCallback D_00510FC8;  /* svm_post_waitv_func */
extern int D_00396E18[6];       /* svm_exec_cnt */
extern void *D_00510FB8;        /* svm_tas_fptr */

/* Reset the server manager's state. */
void func_0017A0E0(void)
{
    int index;
    int *counter;

    memset(D_00396E38, 0, sizeof(D_00396E38));
    memset(&D_00510FA0, 0, sizeof(D_00510FA0));
    memset(&D_00510FA8, 0, sizeof(D_00510FA8));
    memset(&D_00510FC0, 0, sizeof(D_00510FC0));
    memset(&D_00510FC8, 0, sizeof(D_00510FC8));
    counter = D_00396E18;
    for (index = 0; index < 6; index++) {
        *counter++ = 0;
    }
    D_00510FB8 = 0;
}
