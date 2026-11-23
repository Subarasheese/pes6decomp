/* PAL libkernel file seek. The two RPC commands differ in the seek offset and result width. */
#include "pes6/fileio_seek_symbols.h"

struct FileDescriptor {
    int fd, flags, x8, xC;
};
struct FileSemaphoreParams {
    int currentCount;
    int maxCount;
    int initCount;
    int numWaitThreads;
    unsigned int attr;
    unsigned int option;
};
typedef struct {
    int sema;
    SEEK_OFFSET *res;
    int rsize;
    int fd;
    SEEK_OFFSET offset;
    int whence;
    int idx;
} FileSeekRequest;
extern int FILEIO_READY;
extern int FILEIO_TABLE_SEMAPHORE;
extern int FILEIO_PENDING[32];
extern FileSeekRequest FILEIO_REQUEST;
extern struct FileDescriptor FILEIO_DESCRIPTORS[];
extern char FILEIO_CLIENT[];
extern int FILEIO_REPLY[];
extern char SEEK_LABEL[];
struct FileDescriptor *FILEIO_GET_DESCRIPTOR(int);
int FILEIO_LOCK(int);
void FILEIO_UNLOCK(void);
int FILEIO_CREATE_SEMAPHORE(struct FileSemaphoreParams *);
int FILEIO_DELETE_SEMAPHORE(int);
int FILEIO_SIGNAL_SEMAPHORE(int);
int FILEIO_WAIT_SEMAPHORE(int);
int FILEIO_CALL_RPC(void *, int, int, void *, int, void *, int, void *, void *, int);
SEEK_OFFSET FILE_SEEK(int fd, SEEK_OFFSET offset, int whence) {
    struct FileSemaphoreParams sp;
    SEEK_OFFSET res;
    struct FileDescriptor *io;
    FileSeekRequest *arg;
    int sema, r, flags, nowait, i;

    arg = &FILEIO_REQUEST;
    io = FILEIO_GET_DESCRIPTOR(fd);
    FILEIO_LOCK(SEEK_COMMAND);
    if (FILEIO_READY == 0 || io == 0 || (flags = io->flags) == 0) {
        FILEIO_UNLOCK();
        return -9;
    }
    arg->fd = io->fd;
    arg->offset = offset;
    arg->whence = whence;
    arg->idx = io - FILEIO_DESCRIPTORS;
    sp.maxCount = 1;
    sp.option = (unsigned int)SEEK_LABEL;
    sp.initCount = 0;
    sema = FILEIO_CREATE_SEMAPHORE(&sp);
    arg->res = &res;
    arg->rsize = sizeof(res);
    FILEIO_REQUEST.sema = sema;
    if (flags & 0x8000) {
        FILEIO_WAIT_SEMAPHORE(FILEIO_TABLE_SEMAPHORE);
        /* EE GCC schedules the table address before the loop index. */
        r = (int)FILEIO_PENDING;
        i = 0;
        do {
            do {
                nowait = flags & 0x8000;
            } while (0);
        } while (0);
        for (; i < 32; i++) {
            if (FILEIO_PENDING[i] == -1) {
                FILEIO_PENDING[i] = arg->sema;
                arg->sema = -arg->sema;
                break;
            }
        }
        FILEIO_SIGNAL_SEMAPHORE(FILEIO_TABLE_SEMAPHORE);
    } else {
        /* Both RPC addresses are established before clearing the asynchronous flag. */
        r = (int)FILEIO_CLIENT;
        r = (int)FILEIO_REPLY;
        nowait = 0;
    }
    if (FILEIO_CALL_RPC(FILEIO_CLIENT, SEEK_COMMAND, 0, &FILEIO_REQUEST, sizeof(FileSeekRequest), FILEIO_REPLY, 4, 0, 0,
                      nowait) < 0) {
        FILEIO_DELETE_SEMAPHORE(sema);
        FILEIO_UNLOCK();
        return -11;
    }
    r = *(int *)((unsigned int)FILEIO_REPLY | 0x20000000);
    FILEIO_UNLOCK();
    if (r == 0) {
        FILEIO_DELETE_SEMAPHORE(sema);
        return -11;
    }
    if (nowait) {
        FILEIO_DELETE_SEMAPHORE(sema);
        return 0;
    }
    FILEIO_WAIT_SEMAPHORE(sema);
    FILEIO_DELETE_SEMAPHORE(sema);
    return res;
}
