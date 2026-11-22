/* compiler: ee-gcc-2.9 */
/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/eecdvd.c). */

typedef struct ThreadParam {
    int status;
    void (*entry)(void *);
    void *stack;
    int stackSize;
    void *gpReg;
    int initPriority;
    int currentPriority;
    unsigned int attr;
    unsigned int option;
    int waitType;
    int waitId;
    int wakeupCount;
} ThreadParam;

typedef struct SemaParam {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
} SemaParam;

typedef struct sceSifRpcHeader {
    void *pkt_addr;
    unsigned int rpc_id;
    int sema_id;
    unsigned int mode;
} sceSifRpcHeader;

typedef struct sceSifClientData {
    sceSifRpcHeader hdr;
    unsigned int command;
    void *buff;
    void *cbuff;
    void *end_function;
    void *end_param;
    void *serve;
} sceSifClientData;

typedef struct CdReadIntrData {
    int size1;
    int size2;
    unsigned char *dest1;
    unsigned char *dest2;
    unsigned char buf1[64];
    unsigned char buf2[64];
} CdReadIntrData;

typedef struct sceCdlFILE {
    unsigned int lsn;
    unsigned int size;
    char name[16];
    unsigned char date[8];
    unsigned int flag;
} sceCdlFILE;

typedef struct CdSearchFileData {
    sceCdlFILE file;
    char name[256];
    void *eedata;
} CdSearchFileData;

#define UNCACHED(p) ((void *)((unsigned int)(p) | 0x20000000))

extern int SCE_CD_debug[];
extern volatile int D_005C8DE8[];
extern volatile int _sceCd_scmd_semid[];
extern volatile int D_005C8DF4[];
extern volatile int D_005C8E20[];
extern volatile int D_005C8E24[];
extern unsigned int _sceCd_ncmdrdata[];
extern unsigned int _sceCd_scmdrdata[];
extern unsigned int _sceCd_scmdsdata[];
extern int _sceCd_ee_read_mode;
extern sceSifClientData _sceCd_cd_ncmd;
extern sceSifClientData _sceCd_cd_scmd;

extern int D_005C8DD4[];
extern int D_00610998[];
extern int D_0061099C[];
extern volatile int D_005C8DE0[];
extern int D_006109A4[];
extern int D_006109B8[];
extern int D_006109BC[];
extern int D_006109C0[];
extern int D_006109C4[];
extern int D_006109C8[];
extern int D_006109CC[];
extern int D_006109D0[];
extern void (*D_011FD200[])(int);
extern void (*D_006FFE84[])(void *);
extern void *D_006FFE88[];
extern int D_006FFE8C[];
extern int D_006FFE90[];
extern ThreadParam D_006FFE98[];
extern ThreadParam D_006FFEC8[];
extern CdSearchFileData D_006FFF00;
extern unsigned int D_00700040[];
extern sceSifClientData D_00700080;
extern sceSifClientData D_007000A8;
extern sceSifClientData D_007000D0;
extern int D_00700100[];
extern int D_00700110[];
extern char D_0062B060[];
extern char D_0062B088[];
extern char D_0062B0A8[];
extern char D_0062B0C0[];
extern char D_0062B0D0[];
extern char D_0062B0E0[];
extern char D_0062B0F8[];
extern char D_0062B120[];
extern char D_0062B138[];
extern char D_0062B148[];
extern char D_0062B158[];
extern char D_0062B180[];
extern char D_0062B198[];
extern char D_0062B1B8[];
extern char D_0062B1C8[];
extern char D_0062B1D8[];
extern char D_0062B1F8[];

#define cd_debug        (SCE_CD_debug[0])
#define ncmd_semid      (D_005C8DE8[0])
#define scmd_semid      (_sceCd_scmd_semid[0])
#define c_cb_sem        (D_005C8DF4[0])
#define cbfunc_num      (D_005C8E20[0])
#define cbfunc_number   (D_005C8E24[0])
#define cb_thread_id    (D_005C8DD4[0])
#define scmd_sema_keep  (D_00610998[0])
#define ncmd_sema_keep  (D_0061099C[0])
#define cb_sema         (D_005C8DE0[0])
#define init_seq        (D_006109A4[0])
#define ncmd_bind       (D_006109B8[0])
#define icmd_bind       (D_006109BC[0])
#define sf_bind         (D_006109C0[0])
#define scmd_dr_bind    (D_006109C4[0])
#define scmd_bind       (D_006109C8[0])
#define it_bind         (D_006109CC[0])
#define init_count      (D_006109D0[0])
#define cb_func         (D_011FD200[0])
#define poff_func       (D_006FFE84[0])
#define poff_arg        (D_006FFE88[0])
#define poff_func_num   (D_006FFE8C[0])
#define init_th_id      (D_006FFE90[0])
#define init_th_param   (D_006FFE98[0])
#define cb_th_param     (D_006FFEC8[0])
#define sf_data         D_006FFF00
#define sf_rdata        D_00700040
#define sf_client       D_00700080
#define init_client     D_007000A8
#define init_mode       D_00700100
#define dr_client       D_007000D0
#define dr_mode         D_00700110
#define cbloop_msg      D_0062B060
#define sf_bind_err_msg D_0062B088
#define sf_name_msg     D_0062B0A8
#define sf_found_msg    D_0062B0C0
#define sf_size_msg     D_0062B0D0
#define sf_lsn_msg      D_0062B0E0
#define ncmd_fail_msg   D_0062B0F8
#define ncmd_bind_err_msg D_0062B120
#define ncmd_wait_msg   D_0062B138
#define scmd_wait_msg   D_0062B148
#define scmd_fail_msg   D_0062B158
#define scmd_bind_err_msg D_0062B180
#define init_bind_err_msg D_0062B198
#define exit_msg        D_0062B1B8
#define dr_msg          D_0062B1C8
#define dr_bind_err_msg D_0062B1D8
#define dr_done_msg     D_0062B1F8

extern int CreateSema(SemaParam *param);
extern int DeleteSema(int sema);
extern int WaitSema(int sema);
extern int SignalSema(int sema);
extern int func_0019B150(int sema);
extern int PollSema(int sema);
extern int SetAlarm(unsigned short time, void (*cb)(int, unsigned short, void *), void *arg);
extern int DIntr(void);
extern int EIntr(void);
extern void scePrintf(const char *fmt, ...);
extern void sceSifAddCmdHandler(unsigned int cid, void (*handler)(void *, void *), void *data);
extern void sceSifRemoveCmdHandler(unsigned int cid);
extern int sceSifCallRpc(sceSifClientData *client, unsigned int fno, unsigned int mode,
                         void *send, int ssize, void *receive, int rsize,
                         void (*end_func)(void *), void *end_param);
extern int sceSifCheckStatRpc(sceSifClientData *client);
extern void sceSifInitRpc(unsigned int mode);
extern int sceSifBindRpc(sceSifClientData *client, unsigned int request, unsigned int mode);
extern int GetThreadId(void);
extern int ReferThreadStatus(int thread, ThreadParam *info);
extern int CreateThread(ThreadParam *param);
extern int StartThread(int thread, void *arg);
extern int ChangeThreadPriority(int thread, int priority);
extern void ExitDeleteThread(void);
extern void *memcpy(void *dest, const void *src, unsigned int n);
extern void sceSifWriteBackDCache(void *addr, int size);
extern char _gp[];
static void _Cdvd_cbLoop(void *arg);
void CB_DelayTh(int id, unsigned short time, void *arg);
int sceCdSync(int mode);
static int PowerOffCB(void);
int _sceCd_ncmd_prechk(int cmd);
int _sceCd_scmd_prechk(int cmd);void sceCdDelayThread(unsigned short hsync);
void *sceCdCallback(void (*func)(int));

static void func_00190B20(int *data)
{
    cbfunc_num = *data;
    cbfunc_number = cbfunc_num;
    if (cbfunc_num == 11) {
        cbfunc_num = 0;
        c_cb_sem = 0;
        return;
    }
    func_0019B150(ncmd_semid);
    if (cb_thread_id && cb_func) {
        func_0019B150(cb_sema);
    } else {
        c_cb_sem = 0;
    }
    cbfunc_num = 0;
}
void _Cdvd_cbLoop(void *arg);
/* Start the callback thread at priority `prio` on the given stack; if it is
 * already running, only change its priority. Returns 1 if it was created. */
int sceCdInitEeCB(int prio, void *stack, int stack_size);
void _sceCd_cd_read_intr(void *addr);
void cmd_sem_init(void);
void cdvd_exit(void);
void *sceCdPOffCallback(void (*func)(void *), void *addr);
void _sceCd_Poff_Intr(void *data, void *arg);
int PowerOffCB(void);
int sceCdSearchFile(sceCdlFILE *file, const char *name);
int _sceCd_ncmd_prechk(int cmd);
int sceCdNcmdDiskReady(void);
int sceCdSync(int mode);
int sceCdSyncS(int mode);
int _sceCd_scmd_prechk(int cmd);
int sceCdInit(int mode);
int sceCdDiskReady(int mode);
int sceCdMmode(int media);
