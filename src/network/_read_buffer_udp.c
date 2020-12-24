#include "network_internal.h"

ssize_t _net_read_buffer_udp(IN const int sender, IN char *buffer) {
  if (buffer == NULL) return NET_ERR_INVALID;

  struct sockaddr_in client_addr;
  memset(&client_addr, 0, sizeof(client_addr));
  ssize_t read_bytes = recvfrom(sender,
                                buffer,
                                NET_MAX_BUFFER_SIZE,
                                MSG_DONTWAIT,
                                (struct sockaddr *)&client_addr,
                                &(socklen_t){sizeof(client_addr)});

  return read_bytes;
}
