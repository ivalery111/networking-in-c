#ifndef NETWORK_NETWORK_INTERNAL_H
#define NETWORK_NETWORK_INTERNAL_H

#include <stdint.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include "network.h"

int _net_open_udp_socket();

int _net_close_socket(const int sock);

#endif
