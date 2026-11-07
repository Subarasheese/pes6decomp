/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/sdr_main.c). This SDK
   release has more commands and runs each completion handler with the $gp it was installed with. */
typedef char *va_list;
#define va_start(ap, last)                                    \
    (ap = (va_list)__builtin_next_arg(last) -                 \
          (__builtin_args_info(2) >= 8 ? 0 : (8 - __builtin_args_info(2)) * 8))
#define va_arg(ap, type) (*(type *)(((ap) += 8) - 8))
#define va_end(ap)

#define SD_SPU2_PROC_BATCH 0x8130
#define SD_SPU2_PROC_BATCH_EX 0x8140
#define SD_SET_TRANS_INTR_HANDLER 0x8160
#define SD_SET_SPU2_INTR_HANDLER 0x8170
#define SIF_RPCM_NOWAIT 1

typedef int (*sceSdSpu2IntrHandler)(int core, void *common);
typedef int (*sceSdTransIntrHandler)(int channel, void *common);

extern sceSdSpu2IntrHandler D_00372A10;   /* sceSdCallBack's handler */
extern void *D_00372A14;                  /* and its $gp */
extern sceSdTransIntrHandler D_00372A28;  /* DMA channel 0 transfer handler */
extern sceSdTransIntrHandler D_00372A2C;  /* DMA channel 1 transfer handler */
extern sceSdSpu2IntrHandler D_00372A30;   /* SPU2 interrupt handler */
extern void *D_00372A34;                  /* their arguments */
extern void *D_00372A38;
extern void *D_00372A3C;
extern void *D_00372A40;                  /* and the $gp each runs with */
extern void *D_00372A44;
extern void *D_00372A48;
extern int D_003F3540[16];                /* the RPC send buffer */
extern char D_003F3580[];                 /* the libsdr RPC client */

int sceSifCallRpc(void *client, unsigned int fno, unsigned int mode, void *send, int ssize,
                  void *receive, int rsize, void (*end_func)(void *), void *end_param);

static inline void *get_gp(void)
{
    void *gp;

    __asm__ volatile("move %0, $gp" : "=r"(gp));
    return gp;
}

/* Switch to gp; returns the previous $gp. */
static inline void *set_gp(void *gp)
{
    void *old;

    __asm__ volatile("move %0, $gp\n\tmove $gp, %1" : "=&r"(old) : "r"(gp));
    return old;
}

/* Send an SPU2 request to the IOP: sceSdRemote(blocking? 0 = no, command, up to 6 arguments). A
   non-blocking call completes through the sceSdCallBack handler, run with its own $gp. Handler
   installs return the previous handler; other commands return the IOP's reply. */
int sceSdRemote(int arg, ...)
{
    va_list ap;
    unsigned int command;
    unsigned int mode;
    sceSdSpu2IntrHandler func;
    void *gp;
    void *old;
    int i;
    int ret;
    unsigned short *req;
    void *recv;
    int rsize;

    func = 0;
    gp = 0;
    D_003F3540[0] = (int)D_003F3540;
    va_start(ap, arg);
    command = va_arg(ap, unsigned int);
    for (i = 1; i < 7; i++) {
        D_003F3540[i] = va_arg(ap, int);
    }
    va_end(ap);

    mode = 0;
    if (arg == 0) {
        mode = SIF_RPCM_NOWAIT;
        func = D_00372A10;
    }

    old = 0;
    if (command == SD_SET_TRANS_INTR_HANDLER) {
        if (D_003F3540[1] == 0) {
            old = D_00372A28;
            D_00372A28 = (sceSdTransIntrHandler)D_003F3540[2];
            D_00372A34 = (void *)D_003F3540[3];
            D_00372A40 = get_gp();
        } else {
            old = D_00372A2C;
            D_00372A2C = (sceSdTransIntrHandler)D_003F3540[2];
            D_00372A38 = (void *)D_003F3540[3];
            D_00372A44 = get_gp();
        }
    } else if (command == SD_SET_SPU2_INTR_HANDLER) {
        old = D_00372A30;
        D_00372A30 = (sceSdSpu2IntrHandler)D_003F3540[1];
        D_00372A3C = (void *)D_003F3540[2];
        D_00372A48 = get_gp();
    }

    ret = 0;
    if (command == SD_SPU2_PROC_BATCH || command == 0x81A0 || command == 0x81B0) {
        if (func) {
            gp = set_gp(D_00372A14);
        }
        sceSifCallRpc(D_003F3580, command | D_003F3540[1], mode, (void *)D_003F3540[2], 64,
                      D_003F3540, 64, (void (*)(void *))func, (void *)D_003F3540[0]);
        if (func) {
            set_gp(gp);
        }
        ret = D_003F3540[0];
    } else if (command == SD_SPU2_PROC_BATCH_EX) {
        if (func) {
            gp = set_gp(D_00372A14);
        }
        sceSifCallRpc(D_003F3580, D_003F3540[1] | SD_SPU2_PROC_BATCH_EX, mode, D_003F3540, 64,
                      (void *)D_003F3540[2], 64, (void (*)(void *))func, (void *)D_003F3540[2]);
        if (func) {
            set_gp(gp);
        }
    } else if (command == 0x81C0 || command == 0x81D0) {
        req = (unsigned short *)D_003F3540[1];
        req[1] = D_003F3540[2];
        if (command == 0x81D0) {
            *(int *)(req + 2) = D_003F3540[5];
        }
        recv = (void *)D_003F3540[3];
        rsize = D_003F3540[4];
        if (recv == 0) {
            recv = &ret;
            rsize = 4;
        }
        if (func) {
            gp = set_gp(D_00372A14);
        }
        sceSifCallRpc(D_003F3580, command, mode, (void *)D_003F3540[1], (D_003F3540[2] + 1) * 8,
                      recv, rsize, (void (*)(void *))func, D_003F3540);
        if (func) {
            set_gp(gp);
        }
        if (D_003F3540[3]) {
            ret = *(int *)D_003F3540[3];
        }
    } else if (command - 0x9000 <= 0xF0) {
        if (func) {
            gp = set_gp(D_00372A14);
        }
        sceSifCallRpc(D_003F3580, command, mode, (void *)D_003F3540[1], D_003F3540[2],
                      D_003F3540, 16, (void (*)(void *))func, D_003F3540);
        if (func) {
            set_gp(gp);
        }
        ret = D_003F3540[0];
    } else {
        if (func) {
            gp = set_gp(D_00372A14);
        }
        sceSifCallRpc(D_003F3580, command, mode, D_003F3540, 64, D_003F3540, 16,
                      (void (*)(void *))func, D_003F3540);
        if (func) {
            set_gp(gp);
        }
        ret = D_003F3540[0];
    }
    if (command == SD_SET_TRANS_INTR_HANDLER || command == SD_SET_SPU2_INTR_HANDLER) {
        ret = (int)old;
    }
    return ret;
}
