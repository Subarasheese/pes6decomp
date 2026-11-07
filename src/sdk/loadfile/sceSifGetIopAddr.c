/* Sony SDK / C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/eeloadfile.c). */
/*
 * Unit: sdk/sce/eeloadfile
 *
 * Functions:
 *   0x0027fb40 _lf_bind
 *   0x0027fc40 _lf_version
 *   0x0027fcd0 sceSifLoadFileReset
 *   0x0027fd08 _sceSifLoadModuleBuffer
 *   0x0027ff10 sceSifStopModule
 *   0x00280118 sceSifUnloadModule
 *   0x002801a8 sceSifSearchModuleByName
 *   0x00280248 sceSifSearchModuleByAddress
 *   0x002802d8 sceSifLoadModuleBuffer
 *   0x002802f8 sceSifLoadStartModuleBuffer
 *   0x00280318 _sceSifLoadModule
 *   0x00280540 sceSifLoadModule
 *   0x00280560 sceSifLoadStartModule
 *   0x00280580 _sceSifLoadElfPart
 *   0x00280688 sceSifLoadElfPart
 *   0x002806a8 sceSifLoadElf
 *   0x002806d0 sceSifGetIopAddr
 *   0x002807c0 sceSifSetIopAddr
 */

#define LF_PATH_MAX 252
#define LF_ARG_MAX  252

#define LF_RPC_SERVER   0x80000006
#define LF_SET_ADDR     2
#define LF_GET_ADDR     3
#define LF_MODULE_BUFFER_LOAD 6
#define LF_MODULE_STOP  7
#define LF_UNLOAD       8
#define LF_SEARCH_NAME  9
#define LF_SEARCH_ADDR  10

#define SCE_EBINDMISS    0x10000
#define SCE_ECALLMISS    0x10001
#define SCE_ETYPEMISS    0x10002
#define SCE_ELOADMISS    0x10003
#define SCE_EVERSIONMISS 0x10004

typedef struct sceSifClientData {
    unsigned char rpc_data[16];
    unsigned int command;
    void *buff;
    void *cbuff;
    void (*end_func)(void *);
    void *end_param;
    void *server;
} sceSifClientData;

typedef struct sceExecData {
    int entry_point;
    int global_pointer;
    int stack_pointer;
    int reserved;
} sceExecData;

typedef struct LoadFileArg {
    union {
        const void *addr;
        int id;
        int arg_len;
        int entry_point;
        int result;
    } p;
    union {
        int arg_len;
        int start_result;
        int global_pointer;
    } q;
    char path[LF_PATH_MAX];
    char args[LF_ARG_MAX];
} LoadFileArg;

typedef struct LoadFileIopValArg {
    union {
        unsigned int iop_addr;
        int result;
    } p;
    int type;
    union {
        unsigned char b;
        unsigned short s;
        unsigned int l;
    } val;
} LoadFileIopValArg;

typedef union LoadFileSendData {
    LoadFileArg file;
    LoadFileIopValArg iopval;
} LoadFileSendData;

extern LoadFileSendData D_003EF6C0;
extern sceSifClientData D_003EF8C0;
extern char D_007068E8[];
extern char D_00612BB4[];
extern char *D_0061341C[];
extern int D_00613418[];
extern char D_0062C7E8[];

#define lf_arg          D_003EF6C0.file
#define lf_iopval       D_003EF6C0.iopval
#define lf_client       D_003EF8C0
#define lf_iop_version  D_007068E8
#define lf_ee_version   D_00612BB4
#define lf_dummy_version D_0061341C
#define lf_init         D_00613418
#define lf_all_sections D_0062C7E8

extern int sceSifCallRpc(sceSifClientData *client, unsigned int fno,
                         unsigned int mode, void *send, int ssize,
                         void *receive, int rsize, void (*end_func)(void *),
                         void *end_param);
extern int memcmp(const void *a, const void *b, unsigned int n);
extern void *memcpy(void *dest, const void *src, unsigned int n);
extern void *memset(void *dest, int c, unsigned int n);
extern char *strncpy(char *dest, const char *src, unsigned int n);
extern int _lf_bind(void);int _lf_version(void);
int sceSifLoadFileReset(void);
int _sceSifLoadModuleBuffer(const void *addr, int arg_len, const char *args,
                            int *result);
int sceSifStopModule(int id, int arg_len, const char *args, int *result);
int sceSifUnloadModule(int id);
int sceSifSearchModuleByName(const char *name);
int sceSifSearchModuleByAddress(const void *addr);
int sceSifLoadModuleBuffer(const void *addr, int arg_len, const char *args);
int sceSifLoadStartModuleBuffer(const void *addr, int arg_len,
                                const char *args, int *result);
int _sceSifLoadModule(const char *filename, int arg_len, const char *args,
                      int *result, int mode);
int sceSifLoadModule(const char *filename, int arg_len, const char *args);
int sceSifLoadStartModule(const char *filename, int arg_len,
                          const char *args, int *result);
int _sceSifLoadElfPart(const char *name, const char *secname,
                       sceExecData *data, int mode);
int sceSifLoadElfPart(const char *name, const char *secname,
                      sceExecData *data);
int sceSifLoadElf(const char *name, sceExecData *data);



int sceSifGetIopAddr(unsigned int iop_addr, void *val, int type) {
    if (_lf_bind() < 0) {
        return -SCE_EBINDMISS;
    }
    if (type < 0 || type > 2) {
        return -SCE_ETYPEMISS;
    }
    lf_iopval.p.iop_addr = iop_addr;
    lf_iopval.type = type;
    if (sceSifCallRpc(&lf_client, LF_GET_ADDR, 0, &lf_iopval, 32, &lf_iopval, 32, 0, 0) < 0) {
        return -SCE_ECALLMISS;
    }
    if (type == 0) {
        *(unsigned char *)val = lf_iopval.p.result;
    } else if (type == 1) {
        *(unsigned short *)val = lf_iopval.p.result;
    } else if (type == 2) {
        *(unsigned int *)val = lf_iopval.p.result;
    } else {
        return -SCE_ETYPEMISS;
    }
    return 0;
}
int sceSifSetIopAddr(unsigned int iop_addr, void *val, int type);
