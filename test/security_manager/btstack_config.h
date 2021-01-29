//
// btstack_config.h for most tests
//

#ifndef BTSTACK_CONFIG_H
#define BTSTACK_CONFIG_H

// Port related features
#define HAVE_BTSTACK_STDIN
#define HAVE_EMBEDDED_TIME_MS
#define HAVE_MALLOC
#define HAVE_POSIX_FILE_IO

// BTstack features that can be enabled
#define ENABLE_BLE
#define ENABLE_LOG_ERROR
#define ENABLE_LOG_INFO
#define ENABLE_PRINTF_HEXDUMP

//#define ENABLE_MICRO_ECC_FOR_LE_SECURE_CONNECTIONS
#define ENABLE_L2CAP_ENHANCED_RETRANSMISSION_MODE
#define ENABLE_LE_CENTRAL
#define ENABLE_LE_PERIPHERAL
#define ENABLE_LE_SECURE_CONNECTIONS
#define ENABLE_LE_SIGNED_WRITE
#define ENABLE_SDP_EXTRA_QUERIES
#define ENABLE_SOFTWARE_AES128

// BTstack configuration. buffers, sizes, ...
#define HCI_ACL_PAYLOAD_SIZE 69
#define HCI_INCOMING_PRE_BUFFER_SIZE 4

#define MAX_NR_LE_DEVICE_DB_ENTRIES 4

#define NVM_NUM_LINK_KEYS 2

#endif
