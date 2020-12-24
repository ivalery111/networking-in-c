#include "network_internal.h"

int _net_bind_socket(const int sock, const uint32_t addr, const uint16_t port) {
  struct sockaddr_in server_addr;
  memset(&server_addr, 0, sizeof(server_addr));

  server_addr.sin_family = AF_INET;
  server_addr.sin_addr.s_addr = addr;
  server_addr.sin_port = htons(port);

  int rc =
      bind(sock, (const struct sockaddr *)&server_addr, sizeof(server_addr));
  if (rc == (-1)) {
    return NET_ERR_BIND;
  }

  return NET_OK;
}