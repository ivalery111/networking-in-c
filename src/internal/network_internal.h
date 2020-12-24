#ifndef NETWORK_NETWORK_INTERNAL_H
#define NETWORK_NETWORK_INTERNAL_H

#include <netinet/in.h>
#include <stdint.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include "network.h"

int _net_open_udp_socket();
int _net_bind_socket(const int sock, const uint32_t addr, const uint16_t port);

int _net_close_socket(const int sock);

#endif
