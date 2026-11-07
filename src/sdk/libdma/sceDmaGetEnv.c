/* Sony SDK code; source adapted from crashwoc-decomp-ps2 (src/sdk/sce/libdma.c). */
 
 

typedef unsigned int u_int;
typedef unsigned short u_short;
typedef unsigned char u_char;

typedef struct {
    u_char sts;
    u_char std;
    u_char mfd;
    u_char rcycle;
    u_short express;
    u_short notify;
    u_short sqwc;
    u_short tqwc;
    void *rbadr;
    u_int rbmsk;
} sceDmaEnv;
extern sceDmaEnv D_003EB4C8;

sceDmaEnv *sceDmaGetEnv(sceDmaEnv *env)
{
    *env = D_003EB4C8;
    return env;
}