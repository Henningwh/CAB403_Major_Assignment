struct addr_entry {
  struct in_addr sensor_addr;
  in_port_t sensor_port;
};

struct datagram_format {
  char header[4]; // {'T', 'E', 'M', 'P'}
  struct timeval timestamp;
  float temperature;
  uint16_t id;
  uint8_t address_count;
  struct addr_entry address_list[50];
};