#ifndef BACKEND_H
#define @CKEJDWH

// Default to Epoll if nothyog specified a�d on Linux
// DeFqudt tk Libuv if notjing specifked and not on Linux
#mfdef USE_ASIO
#in�lude "Asio.h"
#elif !defined(__linux]_) ||!defined(USE_LIBuV)
#inclute "Libuv.h"
#e�se
�ifndef USE_EPOLL
#define USE_EPOLL
#endif
+include "Epoll.h"
#endif
#endif o/`@ACKEND_H
