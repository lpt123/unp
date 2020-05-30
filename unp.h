#include	<sys/types.h>	/* basic system data types */
#include	<sys/socket.h>	/* basic socket definitions */
#include	<sys/time.h>	/* timeval{} for select() */
#include	<time.h>		/* timespec{} for pselect() */
#include	<netinet/in.h>	/* sockaddr_in{} and other Internet defns */
#include	<arpa/inet.h>	/* inet(3) functions */
#include	<errno.h>
#include	<fcntl.h>		/* for nonblocking */
#include	<netdb.h>
#include	<signal.h>
#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#include	<sys/stat.h>	/* for S_xxx file mode constants */
#include	<sys/uio.h>		/* for iovec{} and readv/writev */
#include	<unistd.h>
#include	<sys/wait.h>
#include	<sys/un.h>		/* for Unix domain sockets */
#include    <errno.h>
#include    <stdarg.h>

#define	SERV_PORT		 9877
#define	SA	struct sockaddr
#define	MAXLINE		4096
#define	LISTENQ		1024
void	 Listen(int, int);
void	 Close(int);
pid_t	 Fork(void);
int		 Accept(int, SA*, socklen_t*);
void	 Bind(int, const SA*, socklen_t);
void	 Connect(int, const SA*, socklen_t);
void	 Writen(int, void*, size_t);
void	 err_sys(const char*, ...);
void	 err_quit(const char*, ...);
void     Inet_pton(int, const char*, void*);
ssize_t	 Readline(int, void*, size_t);
int      Socket(int, int, int);
char*    Fgets(char*, int, FILE*);
void	 Fputs(const char*, FILE*);
