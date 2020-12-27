#include "network_internal.h"

int _net_stop_udp_server(net_server_cont_t *server) {
  int rc = NET_OK;

  server->port = -1;
  server->server_msg_handler = NULL;

  memset(&server->addr_info, 0, sizeof(server->addr_info));
  memset(&server->client_addr, 0, sizeof(server->client_addr));

  if (close(server->listener) == (-1)) {
    rc = NET_ERR_STOP;
  }

  return rc;
}
