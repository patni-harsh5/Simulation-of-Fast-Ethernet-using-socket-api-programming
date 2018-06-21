# Simulation-of-Fast-Ethernet-using-socket-api-programming

Fast Ethernet

How to Build?

1. Drive to the directory where all the files reside.
2. Type `make` to build all the clients and servers
i.e: 
	$make -f Makefile.client
	$make -f Makefile.server
NOTE: If already built it and you need to re-run it. You need to clean it. For cleaning use :
	make -f Makefile.client clean
	make -f Makefile.client_timeout clean
	make -f Makefile.server clean	
	make -f Makefile.server_timeout clean
	make -f Makefile.server_pause clean
	
3. Compile the CSP Source code.
	$gcc CSPtcp.c -o CSPtcp

For Running the client and server:

1. Type `server <port> [<ip>]` where <ip> is the IP address of
   the network interface where you want to listen for and accept
   connections. If you don't specify an IP address the server
   will listen on all network interfaces.
   Ex: ./server 8192 [localhost]
2. Type `client <port> <ip>` where <ip> is the IP address of the
   server you started in step 1. 
3. Type `CSPtcp <source hostname/IP> <source port> <target hostname/IP> <target port>` Perform this with root permission on the server    machine.

NOTE: If you are running client and server on the same system you
      can just use `localhost` for `<ip>`.

