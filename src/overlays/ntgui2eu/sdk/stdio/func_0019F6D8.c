/* compiler: ee-gcc-2.9-G0 */
/* Sony SDK / C runtime code shared with GT4 (same SDK release); source ported
 * from the GT4 decompilation (MIT, see THIRD_PARTY.md). */
extern int func_0019EE30(void *, int, int, void *, int, void *, int,
                       void (*)(void *), void *);
extern int func_0019C198(int);

/* Retry failed RPC submissions with a capped exponential delay. The return
 * value reports failure, rather than returning the RPC routine's error code. */
unsigned int func_0019F6D8(void *client, int command, int mode,
    void *send, int send_size, void *receive, int receive_size,
    void (*callback)(void *), void *callback_argument, int no_retry)
{
    int attempt = 0;
    int delay_scale = 1;
    unsigned int failed;
    do {
        failed = func_0019EE30(client, command, mode, send,
            send_size, receive, receive_size, callback, callback_argument) < 0;
        if (!failed || no_retry)
            break;
        func_0019C198(delay_scale * 1000);
        if (delay_scale < 127)
            delay_scale *= 2;
        ++attempt;
    } while (attempt < 101);
    return failed;
}
