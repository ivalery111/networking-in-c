#include <assert.h>

#include "../src/internal/network_internal.h"

int main(void) {
  int sock = _net_open_udp_socket();
  assert(sock != (-1));

  int result = _net_close_socket(sock);
  assert(result == 0);
  (void)result;
}
