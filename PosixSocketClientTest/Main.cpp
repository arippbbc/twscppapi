#ifdef _WIN32
# include <Windows.h>
# define sleep( seconds) Sleep( seconds * 1000);
#else
# include <unistd.h>
#endif

#include "PosixTestClient.h"
#include "Contracts.h"
#include <cstdio>

const unsigned MAX_ATTEMPTS = 5;
const unsigned SLEEP_TIME = 5;

int main(int argc, char** argv)
{
    //const char* host = argc > 1 ? argv[1] : "";
    //const char* host = "24.191.41.43";
    const char* host = "127.0.0.1";
	unsigned int port = 2020;
	int clientId = 0;

	unsigned attempt = 0;
	printf( "Start of POSIX Socket Client Test %u\n", attempt);

    	TickerId tickerId = 100;
    	FXContract eurusd = FXContract();
	PosixTestClient client;
	client.connect( host, port, clientId);
	//client.reqRealTimeBars(tickerId, eurusd, 5,"TRADES", 0);
	


}
